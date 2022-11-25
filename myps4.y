%token PICTURE
%token <content> STRING
%token START
%token END
%token FOR
%token TO
%token STEP
%token DO
%token DONE
%token VAR
%token <content> ID
%token TINT
%token TNUM
%token TSTRING
%token TPOINT
%token TPATH
%token TTERM
%token LATE_BIND
%token <content> INT
%token <content> FLOAT
%token PATHOPEN
%token PATHCLOSE

%left MOD
%left '+' '-'
%left '*' '/'

%type <content> program
%type declarations
%type <content> commands
%type declaration
%type <content> command
%type type
%type <content> assignment
%type <content> late_binding
%type <content> call
%type <content> termcall
%type <content> forloop
%type <content> expression
%type <content> expression_list
%type <content> nonempty_expression_list
%type <content> factor
%type <content> number
%type <content> point
%type <content> path
%type <content> term
%type <content> variable
%type <content> string
%type <content> eval_func

%code requires {
#include "../syntree.h"
}
%union {
    ComplexNode *content;
}
%parse-param {ComplexNode **root}
%define parse.trace
%define parse.error detailed
%{
#include <iostream>
#include <list>
#include <map>
#include <set>

using namespace std;

extern int yylex();
extern FILE *yyin;
extern int yylineno;

const char *PREAMBLE = "%!PS-Adobe\n%%Creator: myps4 compiler \n%%Title: ";

/* Every operator is directly mapped to a sequence of postscript commands as far as possible. The
 * transformations and "clip" are handled in a special way, since they need to defer the execution
 * of the term-argument until the current matrix is adjusted. Paths are represented by a procedure
 * that generates them, so operations that construct paths must also be handled in a special way, so
 * their result is returned in a form protected from execution. The operation "write" has 2
 * signatures. This is handled in an ad hoc fashion in the rules. */
map<string, string> OPERATION_TABLE = {
    {string("draw"), string("cvx exec stroke setmatrix")},
    {string("fill"), string("cvx exec fill setmatrix")},
    {string("setcolor"), string("setrgbcolor")},
    {string("setdrawstyle"), string("2 array astore 0 setdash")},
    {string("setfont"), string("selectfont")},
    {string("setlinewidth"), string("setlinewidth")},
    {string("arc"), string("newpath arc")},
    {string("ellipse"), string("newpath 6 -2 roll translate 4 -2 roll dup 3 1 roll div 1 scale \
3 1 roll 0 0 5 2 roll arc")},
    {string("string2path"), string("3 -2 roll moveto true charpath")},
    {string("num2string"), string("100 string cvs")},
    {string("write"), string("3 -2 roll moveto show")},

    {string("rotate"), string("\
matrix currentmatrix \
3 1 roll \
2 -1 roll \
rotate \
exec \
setmatrix")},

    {string("scale"), string("\
matrix currentmatrix \
4 1 roll \
3 -2 roll \
scale \
exec \
setmatrix")},

    {string("translate"), string("\
matrix currentmatrix \
4 1 roll \
3 -2 roll \
translate \
exec \
setmatrix")},

    {string("clip"), string("\
clipsave \
exch cvx exec \
clip \
setmatrix \
exec \
cliprestore")},

    {string("sin"), string("sin")},
    {string("cos"), string("cos")},
    {string("ln"), string("ln")},
    {string("abs"), string("abs")},
    {string("exp"), string("exp")},
    {string("random"), string("exch dup 3 1 roll sub 1 add rand exch mod add")}
};

/* These operations must defer the execution of their last argument until the current matrix has
 * been modiefied. If the last argument is between curly braces in the myPS code, this would happen
 * anyway. Otherwise, we must put curly braces around Whatever postscript code this argument expands
 * to. I found it simplest to always put the braces. */
map<string, int> DEFERRING_OPERATIONS = {
    {string("rotate"), 1},
    {string("scale"), 2},
    {string("translate"), 2},
    {string("clip"), 1},
};

/* These operations expand to postscript code between curly braces with the "executable" attribute
 * disabled, i.e. with the "literal" attribute. This code can be used to construct a path. Simply
 * append a "cvx" to make it executable and execute it when needed. */
set<string> PATH_CONSTRUCTORS = {
    string("arc"),
    string("ellipse"),
    string("string2path")
};

/* This function checks if <code> is enclosed in curly braces. It is needed to implement the rule,
 * that curly braces around the last argument of the transformations and of "clip" can be omitted if
 * that argument is only one command. */
int
is_block(string code)
{
    int nopen;
    auto b = code.begin(), e = code.end(), c = b;

    if(code[0] != '{')
        return 0;
    nopen = 0;
    c = b;
    c++;
    nopen = 1;
    while(c != e) {
        if(*c == '{')
            nopen++;
        else if(*c == '}')
            nopen--;
        if(nopen == 0) {
            c++;
            if(c == e) {
                return 1;
            }
            else
                return 0;
            c--;
        }
        c++;
    }

    return 0;
}

void
yyerror(ComplexNode **root, const char *s)
{
    cerr << "Error (line " << yylineno << ")\n" << s << "\n\n";
}

string
strip_quotes(const string &s)
{
    return s.substr(1, s.size() - 2);
}

string
escape_parentheses(const string &s)
{
    string res;

    for(auto c = s.begin(); c != s.end(); c++) {
        if(*c == '(' || *c == ')')
            res += '\\';
        res += *c;
    }

    return res;
}

%}
%%
    program         : PICTURE string declarations START commands END
                        { *root = new ComplexNode(PREAMBLE + $2->code + "\n%%EndComments\n\n"
                                                  + $5->code); }
    ;
    declarations    : %empty
                    | declaration declarations
    ;
    commands        : %empty { $$ = new ComplexNode(""); }
                    | command commands { $$ = new ComplexNode($1->code + "\n" + $2->code); }
    ;
    declaration     : VAR ID ':' type ';'
    ;
    command         : assignment { $$ = $1; }
                    | late_binding { $$ = $1; }
                    | call { $$ = $1; }
                    | termcall { $$ = $1; }
                    | forloop ';' { $$ = $1; }
    ;
    type            : TINT
                    | TNUM
                    | TSTRING
                    | TPOINT
                    | TPATH
                    | TTERM
    ;
    assignment      : ID ':' '=' expression ';'
                        { $$ = new ComplexNode("/" + $1->code + " " + $4->code + " def"); }
    ;
    /* Late binding is implemented in a rather (too?) simple-minded way: We put curly braces around
     * the right * side so it becomes a procedure. Later when the variable is referenced, the
     * procedure is executed automatically according to the evaluation rules of postscript. When the
     * right side is already between curly braces nothing is to be done. */
    late_binding    : ID LATE_BIND expression ';'
                        { 
                            if($3->code[0] != '{' )
                                $3->code = "{ " + $3->code + " }";
                            $$ = new ComplexNode("/" + $1->code + " " + $3->code + " def");
                        }
    ;
    call            : ID '(' expression_list ')' ';'
                        {
                            if(DEFERRING_OPERATIONS.count($1->code)) {
                                auto c = $3->children.begin();
                                advance(c, DEFERRING_OPERATIONS[$1->code]);
                                if(!is_block((*c)->code))
                                    (*c)->code = "{" + (*c)->code + "}";
                            }
                            if($1->code == "write" && $3->children.size() == 1)
                                $3->append_child(new ComplexNode("currentpoint 3 2 roll"));
                            if(OPERATION_TABLE.count($1->code))
                                $3->concat_children(" ", " ", " " + OPERATION_TABLE[$1->code]);
                            else {
                                cerr << "Unknown operation \"" + $1->code + "\".\n";
                                exit(1);
                            }
                            $$ = $3;
                        }
    ;
    termcall        : ID ';' { $$ = $1; }
    ;
    forloop         : FOR ID ':' '=' expression TO expression STEP expression DO commands DONE
                        { $$ = new ComplexNode($5->code + " " + $9->code + " " + $7->code + " { /"
                                               + $2->code + " exch def\n" + $11->code
                                               + "} for"); }
    /* Operator precedence and associativity for +, -, *, /, mod and unary +/- is handled by bison
     * according to the %left directives above. */
    expression      : factor { $$ = $1; }
                    | '+' factor { $$ = $2; }
                    | '-' factor { $$ = new ComplexNode($2->code + " -1 mul"); }
                    | '(' expression ')' { $$ = $2; }
                    | '+' '(' expression ')' { $$ = $3; }
                    | '-' '(' expression ')' { $$ = new ComplexNode($3->code + " -1 mul"); }
                    | expression '+' expression
                        { $$ = new ComplexNode($1->code + " " + $3->code + " add"); }
                    | expression '-' expression
                        { $$ = new ComplexNode($1->code + " " + $3->code + " sub"); }
                    | expression '*' expression
                        { $$ = new ComplexNode($1->code + " " + $3->code + " mul"); }
                    | expression '/' expression
                        { $$ = new ComplexNode($1->code + " " + $3->code + " div"); }
                    | expression MOD expression
                        { $$ = new ComplexNode($1->code + " " + $3->code + " mod"); }
                    | forloop { $$ = $1; }
    ;
    expression_list : %empty { $$ = new ComplexNode(""); }
                    | nonempty_expression_list { $$ = $1; }
    ;
    nonempty_expression_list
                    : expression { $$ = new ComplexNode(""); $$->append_child($1); }
                    | expression ',' nonempty_expression_list
                        {
                            $3->prepend_child($1);
                            $$ = $3;
                        }
    ;
    factor          : number { $$ = $1; }
                    | string { $$ = new ComplexNode("(" + $1->code + ")"); }
                    | point { $$ = $1; }
                    | path { $$ = $1; }
                    | variable { $$ = $1; }
                    | eval_func { $$ = $1; }
                    | term { $$ = $1; }
    ;
    number          : INT { $$ = $1; }
                    | FLOAT { $$ = $1; }
    ;
    point           : '(' expression ',' expression ')'
                        { $$ = new ComplexNode($2->code + " " + $4->code); }
    ;
    path            : PATHOPEN nonempty_expression_list PATHCLOSE
                        { 
                            if($2->children.size() <= 1) {
                                cerr << "A path must have at least two points.\n";
                                exit(1);
                            }
                            $2->concat_children(" moveto ", " lineto ", " lineto") ;
                            $2->code = "{ matrix currentmatrix newpath " + $2->code + "} cvlit";
                            $$ = $2;
                        }
    ;
    term            : '{' commands '}'
                        { $$ = new ComplexNode("{ " + $2->code + "}"); }
    ;
    variable        : ID { $$ = $1; }
    ;
    eval_func       : ID '(' expression_list ')'
                        {
                            if(DEFERRING_OPERATIONS.count($1->code)) {
                                /* The operation is deferring (i.e. a transformation). Protect the
                                 * last argument from execution. */
                                auto c = $3->children.begin();
                                advance(c, DEFERRING_OPERATIONS[$1->code]);
                                if(!is_block((*c)->code))
                                    (*c)->code = "{" + (*c)->code + "}";
                            }
                            $3->concat_children(" ", " ", " ");
                            if(OPERATION_TABLE.count($1->code))
                                $$ = new ComplexNode($3->code + OPERATION_TABLE[$1->code]);
                            else {
                                cerr << "Unknown operation \"" + $1->code + "\".\n";
                                exit(1);
                            }
                            /* Protect the path-valued result from execution. */
                            if(PATH_CONSTRUCTORS.count($1->code))
                                $$->code = "{ matrix currentmatrix " + $$->code + "} cvlit";
                        }
    string          : STRING { $$ = new ComplexNode(escape_parentheses(strip_quotes($1->code))); }
%%

void
usage()
{
    cout << "Usage: myps_check [OPTION]... [FILE]\n  -s Show syntax tree.\n  -d Show syntax tree and debug track.\n";
}

void
get_options(int argc, char **argv, char *options, char **in_filename)
{
    int i;
    char *s;

    for(i = 0; i < 256; i++)
        options[i] = 0;

    for(i = 1; i < argc; i++) {
        s = argv[i];
        if(s[0] == '-') {
            s++;
            while(*s)
                options[*(s++)] = 1;
        }
    }
    *in_filename = NULL;
    if(argc > 1 && argv[argc - 1][0] != '-')
        *in_filename = argv[argc - 1];
}

/* Called if a file name has been given on the command line. Read from this file instead of stdin.*/
FILE*
change_yyin(char *in_filename)
{
    FILE *input;

    if(!(input = fopen(in_filename, "r"))) {
        usage();
        printf("Error: Can't open file %s.\n", in_filename);
        exit(1);
    }
    yyin = input;

    return input;
}

int
main(int argc, char* argv[])
{
    ComplexNode *root;
    char options[256], *in_filename;
    FILE *input;

    get_options(argc, argv, options, &in_filename);
    if(options['h']) {
        usage();
        return 0;
    }   
    input = NULL;
    if(in_filename)
        input = change_yyin(in_filename);
    yydebug = 0;
    if(options['d'])
        yydebug = 1;
    if(yyparse(&root) != 0)
        return 1;
    if(input)
        fclose(input);
    cout << root->code;

    return 0;
}

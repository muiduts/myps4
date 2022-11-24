%token PICTURE
%token STRING
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
%type eval_func

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

using namespace std;

extern int yylex();
extern FILE *yyin;
extern int yylineno;

map<string, string> FUNCTION_TABLE = {
    {string("draw"), string("stroke")}
};


void
yyerror(ComplexNode **root, const char *s)
{
    cerr << "Error (line " << yylineno << ")\n" << s << "\n\n";
}

%}
%%
    program : PICTURE STRING declarations START commands END { *root = $5; }
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
                    | forloop { $$ = $1; }
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
    late_binding    : ID LATE_BIND expression ';'
                        { $$ = new ComplexNode("/" + $1->code + " " + $3->code + " def"); }
    ;
    call            : ID '(' expression_list ')' ';'
                        {
                            $3->concat_children(" ", " ", " " + FUNCTION_TABLE[$1->code]);
                            $$ = $3;
                        }
    ;
    termcall        : ID ';' { $$ = $1; }
    ;
    forloop         : FOR ID ':' '=' expression TO expression STEP expression DO commands DONE ';'
                        { $$ = new ComplexNode($5->code + " " + $9->code + " " + $7->code + " { /"
                                               + $2->code + " exch def\n" + $11->code
                                               + "} for"); }
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
    ;
    expression_list : %empty { $$ = new ComplexNode(""); }
                    | nonempty_expression_list { $$ = $1; }
    ;
    nonempty_expression_list
                        : expression { $$ = new ComplexNode(""); $$->append_child($1); }
                        | expression ',' nonempty_expression_list
                            {
                                $$ = $3;
                                $$->append_child($1);
                            }
    ;
    factor          : number { $$ = $1; }
                    | STRING { $$ = NULL; }
                    | point { $$ = $1; }
                    | path { $$ = $1; }
                    | term { $$ = $1; }
                    | variable { $$ = $1; }
                    | eval_func { $$ = NULL; }
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
                            $$ = $2;
                        }
    ;
    term            : '{' commands '}'
                        { $$ = new ComplexNode("{ " + $2->code + "}"); }
    ;
    variable        : ID { $$ = $1; }
    ;
    eval_func       : ID '(' expression_list ')' { }
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

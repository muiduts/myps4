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
%left 'plusminus'

%type <content> program
%type declarations
%type <content> commands
%type declaration
%type <content> command
%type type
%type <content> assignment
%type late_binding
%type <content> call
%type termcall
%type forloop
%type <content> expression
%type <content> expression_list
%type lone_assignment
%type <content> unsigned_expression
%type plusminus 
%type <content> nonempty_expression_list
%type <content> factor
%type <content> number
%type <content> point
%type <content> path
%type term
%type variable
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

void
yyerror(ComplexNode **root, const char *s)
{
    cerr << "Error (line " << yylineno << ")\n" << s << "\n\n";
}

map<string, string> FUNCTION_TABLE = {
    {string("draw"), string("stroke")}
};

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
                    | late_binding { $$ = NULL; }
                    | call { $$ = $1; }
                    | termcall { $$ = NULL; }
                    | forloop { $$ = NULL; }
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
    late_binding    : ID LATE_BIND expression ';' { }
    ;
    call            : ID '(' expression_list ')' ';'
                        {
                            $3->concat_children(" ", " ", " " + FUNCTION_TABLE[$1->code]);
                            $$ = $3;
                        }
    ;
    termcall        : ID ';' { }
    ;
    forloop         : FOR lone_assignment TO expression STEP expression DO commands DONE ';' { }
    expression      : unsigned_expression { $$ = $1; }
                    | plusminus unsigned_expression { }
    ;
    expression_list : %empty { $$ = new ComplexNode(""); }
                    | nonempty_expression_list { $$ = $1; }
    ;
    lone_assignment : ID ':' '=' expression { }
    unsigned_expression : factor { $$ = $1; }
                        | '(' expression ')' { }
                        | unsigned_expression '+' unsigned_expression
                            { $$ = new ComplexNode($1->code + " " + $3->code + " add"); }
                        | unsigned_expression '-' unsigned_expression
                            { $$ = new ComplexNode($1->code + " " + $3->code + " sub"); }
                        | unsigned_expression '*' unsigned_expression { }
                        | unsigned_expression '/' unsigned_expression { }
                        | unsigned_expression MOD unsigned_expression { }
    ;
    plusminus           : '+' { }
                        | '-' { }
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
                    | term { $$ = NULL; }
                    | variable { $$ = NULL; }
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
    term            : '{' commands '}' { }
    ;
    variable        : ID { }
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

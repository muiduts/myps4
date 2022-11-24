%{
#include <stdio.h>
#include "myps4.tab.h"

extern int INDENT_LEVEL;
%}
letter [a-zA-Z]
digit [0-9]
special_symbol [-:=;()+,*/.\{\}]
string \"[^\"]*\"
id {letter}({letter}|{digit})*
tint Int
tnum Num
tstring String
tpoint Point
tpath Path
tterm Term
float {digit}*\.{digit}*((E|e)(\+|-)?{digit}+)?
int {digit}+
%option yylineno
%option noyywrap
%%
[ \a\b\f\t\v\n\r]+ {}
%.*\n {}
{special_symbol} { return *yytext; }
picture { return PICTURE; }
start { return START; };
end { return END; }
var { return VAR; }
for { return FOR; }
to { return TO; }
step { return STEP; }
do { return DO; }
done { return DONE; }
mod {return MOD; }
{string} { return STRING; }
{tint} { return TINT; }
{tnum} { return TNUM; }
{tstring} { return TSTRING; }
{tpoint} { return TPOINT; }
{tpath} { return TPATH; }
{tterm} { return TTERM; }
\<- { return LATE_BIND; }
\<\< { return PATHOPEN; }
\>\> { return PATHCLOSE; }
{int} { yylval.content = new ComplexNode(yytext); return INT; }
{float} { yylval.content = new ComplexNode(yytext); return FLOAT; }
{id} { yylval.content = new ComplexNode(yytext); return ID; }
%%

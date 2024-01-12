%{
#include <stdio.h>
#include "language.tab.h"
#include <cstring>
%}
%option noyywrap
%%
"int"|"float"|"char"|"string"|"bool"|"void" {yylval.string = strdup(yytext); return TYPE;}
"data_begin" {return DBGIN;}
"data_end" {return DEND;}
"global_begin" {return GBGIN;}
"global_end" {return GEND;}
"global_func_begin" {return GFUNCBGIN;}
"global_func_end" {return GFUNCEND;}
"begin" {return BGIN;}
"end" {return END;}
"const" {return CONST;}
"if" {return IF;}
"else" {return ELSE;}
"while" {return WHILE;}
"for" {return FOR;}
"and" {return AND;}
"!" {return NOT;}
"or" {return OR;}
"==" {return EQUAL;}
">" {return GRE;}
"<" {return LOW;}
">=" {return EGRE;}
"<=" {return ELOW;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MUL;}
"/" {return DIV;}
"class" {return CLASS;}
"{" {return BEGINCLASS;}
"}" {return ENDCLASS;}
[a-zA-Z][a-zA-Z0-9]* {yylval.string = strdup(yytext); return ID;}
":=" {return ASSIGN;}
[0-9]+ {yylval.string = strdup(yytext); return NR;}
\[ {yylval.string = strdup(yytext); return '[';}
\] {yylval.string = strdup(yytext); return ']';}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

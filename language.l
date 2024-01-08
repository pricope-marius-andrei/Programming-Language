%{
#include <stdio.h>
#include "language.tab.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string" {yylval.string = strdup(yytext);return TYPE;}
"data_begin" {return DBGIN;}
"data_end" {return DEND;}
"global_begin" {return GBGIN;}
"global_end" {return GEND;}
"global_func_begin" {return GFUNCBGIN;}
"global_func_end" {return GFUNCEND;}
"begin" {return BGIN;}
"end" {return END;}
[a-zA-Z][a-zA-Z0-9]* {yylval.string = strdup(yytext); return ID;}
":=" {return ASSIGN;}
[0-9]+ {return NR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

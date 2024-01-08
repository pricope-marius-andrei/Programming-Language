%{
#include <iostream>
#include <vector>
#include <cstring>
#include "IdList.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class IdList ids;
%}
%union {
     char* string;
}
%token DBGIN DEND GBGIN GEND GFUNCBGIN GFUNCEND BGIN END ASSIGN NR 
%token<string> ID TYPE
%start progr
%%
progr :  entry_point {printf("The programme is correct!\n");}
      |  sections entry_point {printf("The programme is correct!\n");}
      ;

sections : user_data_types
         | user_data_types global_variables
         | user_data_types global_functions
         | user_data_types global_variables global_functions
         | global_variables
         | global_variables global_functions
         | global_functions
         ;


user_data_types : DBGIN declarations DEND ;
global_variables : GBGIN declarations GEND ;
global_functions : GFUNCBGIN func_declarations GFUNCEND ; 

declarations :  decl ';'          
	      |  declarations decl ';'   
	      ;

decl       :  TYPE ID { if(!ids.existsVar($2)) {
                          ids.addVar($1,$2);
                     }
                    };

func_declarations : func_decl ';'
               | func_declarations func_decl ';'

func_decl : TYPE ID { if(!ids.existsVar($2)) {
                          ids.addVar($1,$2);
                     }
                    } 
           | TYPE ID '(' list_param ')'  
           | TYPE ID '(' ')' 
           ;

list_param : param
            | list_param ','  param 
            ;
            
param : TYPE ID 
      ; 
      

entry_point : BGIN list END  
     ;
     

list :  statement ';' 
     | list statement ';'
     ;

statement: ID ASSIGN ID
         | ID ASSIGN NR  		 
         | ID '(' call_list ')'
         ;
        
call_list : NR
           | call_list ',' NR
           ;
%%
void yyerror(const char * s){
printf("error: %s at line:%d\n",s,yylineno);
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     yyparse();
     cout << "Variables:" <<endl;
     ids.printVars();
    
} 
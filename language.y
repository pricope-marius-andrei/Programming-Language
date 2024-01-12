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
class ClassList clslist;
class MethodList mthlist;
%}
%union {
    char* string;
}

%{
     // Declare a global variable to store the ID from user_decl
     char* sharedID = NULL;
     char* methodSharedId = NULL;
%}

%token DBGIN DEND GBGIN GEND GFUNCBGIN GFUNCEND BGIN END ASSIGN NR
%token CLASS BEGINCLASS ENDCLASS
%token CONST IF ELSE FOR WHILE
%token AND OR NOT EQUAL GRE LOW EGRE ELOW MUL DIV PLUS MINUS
%token<string> ID TYPE
%type<string> NR

%start progr

%left NOT AND OR
%left GRE LOW EGRE ELOW 
%left MUL DIV
%left PLUS MINUS

%left '(' ')'
%left '{' '}'

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


user_data_types : DBGIN user_declarations DEND ;
global_variables : GBGIN declarations GEND ;
global_functions : GFUNCBGIN func_declarations GFUNCEND ; 

/*
     class rules
*/
user_declarations :  user_decl ';'     
	      |  user_declarations user_decl ';'   
	      ;

user_decl : CLASS ID BEGINCLASS ENDCLASS {if (!clslist.existClass($2)) {
                                                  clslist.addClass($2);
                                             }
                                        }; 
          | CLASS ID BEGINCLASS {sharedID = strdup($2); 
                                 if (!clslist.existClass($2)) {
                                   clslist.addClass($2);
                              };
                              } 
                              members methods ENDCLASS
                              {  
                                   if (!clslist.existClass($2)) {
                                        clslist.addClass($2);
                                   }
                              };
          ;

/*
     Variables from class
*/

members : TYPE ID ';' {
          char* classID = sharedID;
          clslist.addVars(classID, $1, $2);
        }
        | members TYPE ID ';' {
          char* classID = sharedID;
          clslist.addVars(classID, $2, $3);
        }
        ;

/*
     Methods from class
*/
methods : methods_decl ';'
        | methods methods_decl ';'

methods_decl : TYPE ID '(' {methodSharedId = strdup($2); clslist.addMethods(sharedID,$1,$2);}
               list_method_param ')' BEGINCLASS 
               method_block ENDCLASS  
               | TYPE ID '(' ')' BEGINCLASS {methodSharedId = strdup($2); clslist.addMethods(sharedID,$1,$2);} 
               method_block ENDCLASS
               | TYPE ID '(' ')' BEGINCLASS ENDCLASS {clslist.addMethods(sharedID,$1,$2);}
               ;

list_method_param : method_param 
            | list_method_param ','  method_param 
            ;
            
method_param : TYPE ID {clslist.getMethods(sharedID)->addParameter(methodSharedId,$1,$2);}
      ; 
      
method_block : method_instructions ';'
             | method_block method_instructions ';'
             ;

method_instructions : ID ASSIGN ID
         | ID ASSIGN NR  		 
         | ID '(' call_list ')'
         | TYPE ID {
          clslist.getMethods(sharedID)->addVar(methodSharedId,$1,$2);}
         ;

/*
     Global variables
*/
declarations :  decl ';'          
	      |  declarations decl ';'   
	      ;

decl : TYPE ID '[' NR ']' { ids.addArray($1, $2, $4); }
          | TYPE ID { if(!ids.existsVar($2)) {
                          ids.addVar($1,$2);
                     }
                    }
          | CONST TYPE ID ASSIGN NR {ids.addConst($2, $3);}
          ;
/*
     Functions for global func section
*/

func_declarations : func_decl ';'
               | func_declarations func_decl ';'

func_decl :| TYPE ID '(' {
                         methodSharedId = strdup($2);
                         if(!mthlist.existMethod($2))
                         {
                              mthlist.addMethod($1,$2);    
                         }
          }
                list_param ')' BEGINCLASS func_block ENDCLASS  
           | TYPE ID '(' ')' BEGINCLASS {methodSharedId = strdup($2);
                         if(!mthlist.existMethod($2))
                         {
                              mthlist.addMethod($1,$2);    
                         }
                         }
                          method_block ENDCLASS
           | TYPE ID '(' ')' BEGINCLASS ENDCLASS {methodSharedId = strdup($2);
                         if(!mthlist.existMethod($2))
                         {
                              mthlist.addMethod($1,$2);    
                         }}
           ;

list_param : param 
            | list_param ','  param 
            ;
            
param : TYPE ID {mthlist.addParameter(methodSharedId,$1,$2);}
      ; 
      
func_block : instructions ';'
             | func_block instructions ';'
             ;

instructions: ID ASSIGN ID
         | ID ASSIGN NR  		 
         | ID '(' call_list ')'
         | TYPE ID {mthlist.addVar(methodSharedId,$1,$2);}
         | IF '(' condition ')' BEGINCLASS instructions ENDCLASS  {  }
         | IF '(' condition ')' BEGINCLASS instructions ENDCLASS ELSE BEGINCLASS instructions ENDCLASS {  }
         | FOR '(' instructions ';' condition ';' instructions ')' BEGINCLASS instructions ENDCLASS {  }
         | WHILE '(' condition ')' BEGINCLASS instructions ENDCLASS {  }
         ;
         ;

entry_point : BGIN list END  
     ;
     

list :  statement ';' 
     | list statement ';'
     ;

statement: ID ASSIGN ID
         | ID ASSIGN NR  		 
         | ID '(' call_list ')'
         | IF '(' condition ')' statement {  }
         | IF '(' condition ')' statement ELSE statement {  }
         | FOR '(' statement ';' condition ';' statement ')' {   }
         | WHILE '(' condition ')' statement {     }
         ;

condition: ID
         | NR
         | condition AND condition
         | condition OR condition
         | NOT condition
         | '(' condition ')'
         | ID EQUAL ID
         | ID GRE ID
         | ID LOW ID
         | ID EGRE ID
         | ID ELOW ID
         ;

call_list : NR
          | ID
          | call_list ',' NR
          | call_list ',' ID
          ;
%%
void yyerror(const char * s){
printf("error: %s at line:%d\n",s,yylineno);
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     yyparse();
     printf("Global variables and constants :\n");
     ids.printVarsAndConstants();
     printf("\nClasses :\n");
     clslist.printClasses();
     printf("Global methods :\n");
     mthlist.printMethods();
}
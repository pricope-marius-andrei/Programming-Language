%{
#include <iostream>
#include <vector>
#include <cstring>
#include <stdlib.h>
#include "IdList.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class IdList ids;
class IdList local_list;
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
%token AND OR NOT EQUAL GRE LOW EGRE ELOW MUL DIV PLUS MINUS PINC MINC
%token TYPEOF
%token NEW
%token<string> ID TYPE
%type<string> NR

%start progr

%left NOT 
%left AND OR
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
         | if_statement
         | if_else_statement
         | while_statement
         | for_statement
         ;

if_statement : IF '(' condition ')' block;

if_else_statement : IF '(' condition ')' block ELSE block;

while_statement : WHILE '(' condition ')' block;

for_statement : FOR '(' for_initializer ';' condition ';' for_update')' block;

for_initializer : declarations
                | ID ASSIGN ID
                | ID ASSIGN NR
                ;

for_update : ID PINC
           ;

condition : NR
          | ID 
          | ID GRE NR
          | NR GRE ID
          | ID GRE ID
          | NR GRE NR
          | ID LOW NR
          | NR LOW ID
          | ID LOW ID
          | NR LOW NR
          | ID EGRE NR
          | NR EGRE ID
          | ID EGRE ID
          | NR EGRE NR
          | ID ELOW NR
          | NR ELOW ID
          | ID ELOW ID
          | NR ELOW NR
          | ID EQUAL NR
          | NR EQUAL ID
          | ID EQUAL ID
          | NR EQUAL NR
          ;

block : BEGINCLASS ENDCLASS
      | BEGINCLASS statements ENDCLASS
      ;

statements : statement
           | statements statement
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
                                        else 
                                        {
                                             yyerror("Redefine a class error!");
                                        }
                                        }; 
          | CLASS ID BEGINCLASS {sharedID = strdup($2); 
                                 if (!clslist.existClass($2)) {
                                   clslist.addClass($2);
                              }
                              else 
                              {
                                   yyerror("Redefine a class error!");
                              }
                              } 
                              class_lines ENDCLASS
                              {  
                                   if (!clslist.existClass($2)) {
                                        clslist.addClass($2);
                                   }
                              };
          ;

class_lines : members;
            | methods;
            | members methods;
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
               list_method_param ')' m_block; 
               | TYPE ID '(' ')' {methodSharedId = strdup($2); clslist.addMethods(sharedID,$1,$2);}  
               m_block
               ;

m_block : content;
      | without_content;
     
content : BEGINCLASS method_block ENDCLASS;

without_content : BEGINCLASS ENDCLASS;

list_method_param : method_param 
            | list_method_param ',' method_param 
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
                    else 
                    {
                    yyerror("The variable already exist!");    
                    }
               }
     | CONST TYPE ID ASSIGN NR {
          if(!ids.existsConst($2))
               ids.addConst($2, $3);
          else 
               yyerror("The const variable already exist!");    
          }
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
                         else 
                         {
                              yyerror("Redefine a method!");
                         }
          }
                list_param ')' f_block;
           | TYPE ID '(' ')' {methodSharedId = strdup($2);
                              if(!mthlist.existMethod($2))
                              {
                                   mthlist.addMethod($1,$2);    
                              }
                              else
                              {
                                   yyerror("Redefine a method!");
                              }
                         } f_block;
           ;

f_block : f_content;
        | f_without_content;

f_content : BEGINCLASS func_block ENDCLASS;
f_without_content : BEGINCLASS ENDCLASS;

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
         ;

entry_point : BGIN list END  
            | BGIN END
     ;
     

list :  statement ';' 
     | list statement ';'
     ;

statement: TYPE ID {
     if(ids.existsVar($2))
          yyerror("The variable was already declared");
     else 
     {
          if(!local_list.existsVar($2))
               local_list.addVar($1, $2);
          else 
                yyerror("The variable was already declared");
     }
}
          |ID var_oper {if(!ids.existsVar($1)) {
                         yyerror("The variable was not declared");
}}
         | ID func_oper {
                         if(!mthlist.existMethod($1))
                         {
                              yyerror("The method was not declared");
                         }
         }
         | TYPEOF '(' ID ')' {
               if(!ids.existsVar($3) && !ids.existsConst($3) && !ids.existsArray($3)) {
                         yyerror("The variable was not declared");
               }
               else 
               {
                    ids.getType($3);
               }
         }
         | ID class_oper {
          if(!clslist.existClass($1))
               yyerror("The class was not declared");
         }
         | if_statement
         | if_else_statement
         | while_statement
         | for_statement
         ;

class_oper : ID 
           | ID ASSIGN NEW '(' call_list ')';

var_oper : ASSIGN ID {if(!ids.existsVar($2)) {
                         yyerror("The variable was not declared");
}}
         | ASSIGN NR  		 
         ;

func_oper : '(' call_list ')';
        
call_list : NR
          | ID
          | call_list ',' NR
          | call_list ',' ID
          ;
%%
void yyerror(const char * s){
     printf("error: %s at line:%d\n",s,yylineno);
     exit(EXIT_FAILURE);
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
     printf("Local variables and constants :\n");
     local_list.printVarsAndConstants();
}
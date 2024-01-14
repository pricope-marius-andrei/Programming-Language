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
class IdList user_var_list;
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
     char* def_class = NULL;
%}

%token DBGIN DEND GBGIN GEND GFUNCBGIN GFUNCEND BGIN END ASSIGN NR
%token CLASS BEGINCLASS ENDCLASS
%token CONST IF ELSE FOR WHILE
%token AND OR NOT EQUAL GRE LOW EGRE ELOW MUL DIV PLUS MINUS PINC MINC
%token TYPEOF EVAL
%token NEW ACCESS_FIELD
%token<string> ID TYPE
%type <string> NR
%type <string> expression

%start progr

%left AND OR
%left GRE LOW EGRE ELOW 
%left NOT 
%left PLUS MINUS
%left MUL DIV
%nonassoc UMINUS

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

user_decl : CLASS ID BEGINCLASS constructor ENDCLASS {if (!clslist.existClass($2)) {
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

class_lines : members constructor;
            | methods constructor;
            | members methods constructor;

/*
     Constructor from the class
*/

constructor : ID {
               if(!clslist.isConstructor(sharedID,$1))
               {
                    yyerror("The constructor should have same name as the class!");
               }
            }
            con_params_options
            ;


con_params_options : con_with_params
                   | con_without_params

con_with_params : '(' con_params ')' ';'

con_params : TYPE ID
           | TYPE ID ',' con_params 
           ;

con_without_params : '(' ')' ';'

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
          clslist.getMethods(sharedID)->addVar(methodSharedId,$1,$2);
          }
         ;

/*
     Global variables
*/
declarations :  decl ';'          
	      |  declarations decl ';'   
	      ;

decl      : TYPE ID '[' NR ']' { ids.addArray($1, $2, $4); }
          | TYPE ID ASSIGN NR {ids.addVar($1, $2, $4);}
          | TYPE ID ASSIGN '"' ID '"' {ids.addVar($1, $2, $5);}
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
                    ids.addConst($2, $3, $5);
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



statement: TYPE ID { //declare new local variables
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
          |ID ACCESS_FIELD ID { //access members from the class
               if(!user_var_list.existsVar($1))
               {
                   yyerror("The variable was not declared"); 
               }
          }
          | TYPE ID ASSIGN NR {if(local_list.existsVar($2))
                                   yyerror("The variable was already declared");
                               else
                                    local_list.addVar($1,$2,$4);
                              }
          | TYPE ID ASSIGN '"' ID '"' {if(local_list.existsVar($2))
                                   yyerror("The variable was already declared");
                               else
                                    local_list.addVar($1,$2,$5);
                              }
          | CONST TYPE ID ASSIGN NR {
                                        if(!ids.existsConst($2))
                                             ids.addConst($2, $3, $5);
                                        else 
                                             yyerror("The const variable already exist!");    
                                   }
          | ID ASSIGN ID {
                              if (!ids.existsVar($1)) {
                                   yyerror("The destination variable was not declared");
                              }
                              if (!ids.existsVar($3)) {
                                   yyerror("The source variable was not declared");
                              }
                              ids.updateVarValueID($1, $3);
                         }
          | ID ASSIGN expression { if (!ids.existsVar($1)) {
                                   yyerror("The variable was not declared");
                              }
                                   ids.updateVarValueNR($1, $3);}
         | ID func_oper { //method calls
               if(!mthlist.existMethod($1))
               {
                    yyerror("The method was not declared");
               }
         }
         | TYPEOF '(' ID ')' { //TypeOf function

               int ok = 1;
               if(ids.existsVar($3) || ids.existsConst($3) || ids.existsArray($3)) {
                    ok = 0;
                    ids.getType($3);
               }

               if(user_var_list.existsVar($3)) {
                    ok = 0;
                    user_var_list.getType($3);
               }

               if(local_list.existsVar($3) || local_list.existsConst($3) || local_list.existsArray($3)) {
                    ok = 0;
                    local_list.getType($3);
               }
               if(ok == 1)
                    yyerror("The variable was not declared");
         }
         | EVAL '(' ID ')' {
               int ok = 1;
               if(ids.existsVar($3) || ids.existsConst($3) || ids.existsArray($3)) {
                    ok = 0;
                    ids.getEval($3);
               }

               if(local_list.existsVar($3) || local_list.existsConst($3) || local_list.existsArray($3)) {
                    ok = 0;
                    local_list.getEval($3);
               }

               if(ok == 1)
                    yyerror("The variable was not declared");
         }
         | EVAL '(' expression ')' {
               printf("Eval result: %s\n", $3);
         }
         | ID ID ASSIGN NEW ID '(' call_list ')' {
               if(!clslist.existClass($1) || !clslist.isConstructor($1,$5))
                    yyerror("The class was not declared");
               if(!user_var_list.existsVar($2) && !ids.existsVar($2) && !ids.existsConst($2) && !local_list.existsVar($2) && !local_list.existsConst($2))
               {
                    user_var_list.addVar($1,$2);
               }
               else 
               {
                    yyerror("The variable was already declared");
               }
         }
         | if_statement
         | if_else_statement
         | while_statement
         | for_statement
         ;

expression :	expression PLUS expression	{ $$ = &std::to_string(atoi($1) + atoi($3))[0];
						}
          | expression MINUS expression { $$ = &std::to_string(atoi($1) - atoi($3))[0];}
          | expression MUL expression { $$ = &std::to_string(atoi($1) * atoi($3))[0];}
          | expression DIV expression	{ if ($3 == 0)
							yyerror ("divide by zero");
						else
							$$ = &std::to_string(atoi($1) / atoi($3))[0];
						}
          |	'-' expression %prec UMINUS	{ $$ = &std::to_string(-atoi($2))[0];
						}
          |	'(' expression ')'		{ $$ = strdup($2);
						}
          |	NR				{ $$ = strdup($1); 
                                   }
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
     local_list.printVarsAndConstants();
     printf("\n\nClasses :\n\n");
     clslist.printClasses();
     printf("\nGlobal methods :\n");
     mthlist.printMethods();
     printf("\nLocal variables and constants :\n");
     local_list.printVarsAndConstants();
     user_var_list.printVarsAndConstants();
}
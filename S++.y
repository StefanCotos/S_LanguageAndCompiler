%{
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "S++.h"
using namespace std;

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class symbolTable table;

string current_id;
string current_value;
string current_type;
string current_def_var;
string current_def_func;
vector<string> parameters;
string current;


%}

%union {
    const char* string;
}

%token  <string>INT_TYPE <string>FLOAT_TYPE <string>CHAR_TYPE <string>STRING_TYPE <string>BOOL_TYPE <string>BOOL_TRUE <string>BOOL_FALSE CLASS 
        EQUAL NOT_EQUAL LOWER GREATER LOWER_EQUAL GREATER_EQUAL ASSIGN IMPORT <string>NR
        EXPORT GIVE <string>CONST AND OR NOT IF_STATEMENT ELSE_STATEMENT ELSE_IF_STATEMENT WHILE_STATEMENT FOR_STATEMENT LOOP_STATEMENT STOP
        <string>PLUS <string>MINUS <string>MUL <string>DIV <string>MOD EVAL TYPEOF MAIN_START MAIN_STOP DEF_FUNC <string>STRING_LITERAL '(' ')'
%token<string> ID STRING CHAR

%left PLUS MINUS
%left MUL DIV MOD
%left EQUAL NOT_EQUAL
%left LOWER_EQUAL RIGHT_EQUAL
%left AND
%left OR
%right NOT
%type<string> types left_value  func_call value expression arithmetic_expression boolean_expression

%start program

%%
program: user_data_types_section global_var_section func_section main {printf("The program is correct!\n");}
     ;

types: INT_TYPE {current_type=$1; $$=$1;}
     | FLOAT_TYPE {current_type=$1; $$=$1;}
     | CHAR_TYPE  {current_type=$1; $$=$1;}
     | STRING_TYPE {current_type=$1; $$=$1;}
     | BOOL_TYPE  {current_type=$1; $$=$1;}
     ;

user_data_types_section: user_data_types_def  // daca exista sau nu aceasta sectiune
                    |  /* nothing */
                    ;

user_data_types_def: user_data_types  // daca exista definesc diferite tipuri
                | user_data_types user_data_types_def

user_data_types:  CLASS STRING {current_def_var=string($2); current_def_func=string($2);} '{' list_class '}'
    ;

list_class: class 
        | class list_class
        ;

class: declarations
    | functions
    ;

global_var_section: {current_def_var="global";} global_var  // daca exista sectiunea de declarare a variabilelor globale
                | /* nothing */
                ;

global_var: declarations     // daca exista declar/definesc ce variabile globale doresc
        | declarations global_var
        ;

func_section: {current_def_func="global";} list_functions  // daca exista sau nu functii
            | /* nothing */
            ;

list_functions: functions     // daca exista definesc diferite functii
            | functions list_functions
            ;

functions: DEF_FUNC STRING '(' list_param ')' '-''>' types  {current_def_var=string($2);} '{' list_statements '}' {table.addFunc(string($2),string($8),parameters,current_def_func); parameters.clear();}
        |  DEF_FUNC STRING '(' list_param ')' {current_def_var=string($2);}  '{' list_statements '}' {table.addFunc(string($2),"none",parameters,current_def_func); parameters.clear();}
        ;

list_param: parameters   //daca functia are sau nu parametrii
    | /* nothing */
    ;

parameters: param
    | param ',' parameters
    ;

param: types ID {parameters.push_back(string($1));}
    ;

main: {current_def_var="main";} MAIN_START list_statements MAIN_STOP   // main-ul care trebuie sa exista obligatoriu
    ;

list_statements: statements      // tot ce se afla in main si in diferite locuri
        | statements list_statements

statements: declarations
    | assignments
    | if_statement
    | while_statement
    | for_statement
    | loop_statement
    | func_call ';'
    | give
    | STOP ';'
    | STRING ID ';' //definirea claselor
    | IMPORT ID ';'
    | IMPORT ID '[' NR ']' ';'
    | EXPORT export
    ;

declarations: decl ';'   //pentru declararea/definirea variabilelor
    ;

decl: types ID { table.addVar(current_type, $2, "", current_def_var);  }
    | types ID '[' NR ']' 
    | types ID ASSIGN expression { table.addVar(current_type, $2, $4, current_def_var);}
    | CONST types ID ASSIGN expression {table.addVar(string($1)+" "+current_type, $3, $5, current_def_var);}
    ;

assign_statements: left_value ASSIGN expression // statement ul de assignare
                ;

assignments: assign_statements ';'
    ;

left_value: ID //{current_id=$1;}
    | ID '[' NR ']'
    | ID '-''>' ID
    ;

value: NR   {$$=$1;}     //diferite valori ce pot fii atribuite variabilelor/functiilor etc.
    | NR '.' NR  {current_value=string($1)+"."+string($3); $$=current_value.c_str();}
    | '<''<' STRING '>''>'  {current_value=string($3); $$=current_value.c_str();}
    | '<' CHAR '>' {current_value=string($2);$$=current_value.c_str();}
    | ID '[' NR ']' {current_value=string($1)+"["+string($3)+"]";  $$=current_value.c_str();}
    | ID {current_value=$1; $$=$1;} 
    | func_call 
    | ID '-''>' ID {current_value=string($1)+"->"+string($4); $$=current_value.c_str();}
    ;

expression: arithmetic_expression {$$=$1;}  //tipurile de expresii
        | boolean_expression {$$=$1;}
        ;


arithmetic_expression: arithmetic_expression PLUS arithmetic_expression { current=string($1)+" "+string($2)+" "+string($3); $$=current.c_str();}
        |  arithmetic_expression MINUS arithmetic_expression {current=string($1)+" "+string($2)+" "+string($3); $$=current.c_str();}
        |  arithmetic_expression MUL arithmetic_expression {current=string($1)+" "+string($2)+" "+string($3); $$=current.c_str();}
        |  arithmetic_expression DIV arithmetic_expression {current=string($1)+" "+string($2)+" "+string($3); $$=current.c_str();}
        |  arithmetic_expression MOD arithmetic_expression {current=string($1)+" "+string($2)+" "+string($3); $$=current.c_str();}
        |  value {$$=$1; }
        | '(' arithmetic_expression ')' {current="("+string($2)+")"; $$=current.c_str();}
        ;

boolean_expression: arithmetic_expression EQUAL arithmetic_expression
                 | arithmetic_expression NOT_EQUAL arithmetic_expression
                 | arithmetic_expression LOWER arithmetic_expression
                 | arithmetic_expression GREATER arithmetic_expression
                 | arithmetic_expression LOWER_EQUAL arithmetic_expression
                 | arithmetic_expression GREATER_EQUAL arithmetic_expression
                 | '(' boolean_expression ')' EQUAL boolean_expression
                 | '(' boolean_expression ')' NOT_EQUAL boolean_expression
                 | '(' boolean_expression ')' AND boolean_expression
                 | '(' boolean_expression ')' OR boolean_expression
                 | NOT boolean_expression
                 | '(' boolean_expression ')'
                 | BOOL_TRUE {current_value=$1;}
                 | BOOL_FALSE {current_value=$1;}
                 ;

if_statement: IF_STATEMENT '(' boolean_expression ')' '{' list_statements '}'        //forma pentru if
    | IF_STATEMENT '(' boolean_expression ')' '{' list_statements '}' else_statement
    ;

else_statement: ELSE_IF_STATEMENT '(' boolean_expression ')' '{' list_statements '}' else_statement
                | ELSE_IF_STATEMENT '(' boolean_expression ')' '{' list_statements '}' 
                | ELSE_STATEMENT '{' list_statements '}' 
                ;

while_statement: WHILE_STATEMENT '(' boolean_expression ')' '{' list_statements '}'    //forma pentru while
            ;

for_statement: FOR_STATEMENT '(' assign_statements ';' boolean_expression ';' assign_statements ')' '{' list_statements '}'   // forma pentru for
            ;

loop_statement: LOOP_STATEMENT '{' list_statements '}'   // forma pentru loop

func_call: STRING '(' list_calls ')'  // apelurile de functii
        | EVAL '(' expression ')'
        | TYPEOF '(' expression ')'
        ;

list_calls: expression
        |   expression ',' list_calls
        |   /* nothing */
        ;

give: GIVE expression ';'    //preocesul de returnare in functii
    ;

export: left_value ';' 
    | left_value ',' export

%%
void yyerror(const char * s){
    printf("error: %s at line:%d\n",s,yylineno);
}

int main(int argc, char** argv){
    yyin=fopen(argv[1],"r");
    yyparse();
    table.printTable();
} 
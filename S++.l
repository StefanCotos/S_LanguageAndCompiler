%{
#include <stdio.h>
#include "S++.tab.h"
%}

%option noyywrap
%%
"normal" {yylval.string = strdup(yytext); return INT_TYPE;}
"different" {yylval.string = strdup(yytext); return FLOAT_TYPE;}
"unique" {yylval.string = strdup(yytext); return CHAR_TYPE;}
"special" {yylval.string = strdup(yytext); return STRING_TYPE;}
"decision" {yylval.string = strdup(yytext); return BOOL_TYPE;}
"true" {yylval.string = strdup(yytext); return BOOL_TRUE;}
"false" {yylval.string = strdup(yytext); return BOOL_FALSE;}
"group" {return CLASS;}
"eq" {yylval.string = strdup(yytext); return EQUAL;}
"neq" {yylval.string = strdup(yytext); return NOT_EQUAL;}
"low" {yylval.string = strdup(yytext); return LOWER;}
"great" {yylval.string = strdup(yytext); return GREATER;}
"leq" {yylval.string = strdup(yytext); return LOWER_EQUAL;}
"geq" {yylval.string = strdup(yytext); return GREATER_EQUAL;}
":" {return ASSIGN;}
"import" {return IMPORT;} // cin
"export" {return EXPORT;} // cout
"give" {return GIVE;} // return
"_const_" {yylval.string = strdup(yytext); return CONST;}
"_&_" {yylval.string = strdup(yytext); return AND;}
"_|_" {yylval.string = strdup(yytext); return OR;}
"_!_" {yylval.string = strdup(yytext); return NOT;}
"_if_" {return IF_STATEMENT;}
"_else_" {return ELSE_STATEMENT;}
"_else_if_" {return ELSE_IF_STATEMENT;}
"_while_" {return WHILE_STATEMENT;}
"_for_" {return FOR_STATEMENT;}
"_loop_" {return LOOP_STATEMENT;}
"_stop_" {return STOP;}
"_+_" {yylval.string = strdup(yytext); return PLUS;}
"_-_" {yylval.string = strdup(yytext); return MINUS;}
"_*_" {yylval.string = strdup(yytext); return MUL;}
"_/_" {yylval.string = strdup(yytext); return DIV;}
"_%_" {yylval.string = strdup(yytext); return MOD;}
"Eval" {return EVAL;}
"TypeOf" {return TYPEOF;}
"func" {return DEF_FUNC;}

"main_start" {return MAIN_START;}
"main_stop" {return MAIN_STOP;}

[_][A-Za-z]+ {yylval.string = strdup(yytext); return ID;}
[A-Za-z] {yylval.string = (strdup(yytext)); return CHAR;}
[A-Za-z]+ {yylval.string = strdup(yytext); return STRING;}
[0-9]+ {yylval.string = strdup(yytext); return NR;}
"'"[^\n']*"'" { yylval.string = strdup(yytext+1);  return STRING_LITERAL; }

[ \t] ;
"\r"|"\n"|"\r\n" {yylineno++;}
. {return yytext[0];}

 
%%
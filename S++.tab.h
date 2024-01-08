/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_S_TAB_H_INCLUDED
# define YY_YY_S_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT_TYPE = 258,                /* INT_TYPE  */
    FLOAT_TYPE = 259,              /* FLOAT_TYPE  */
    CHAR_TYPE = 260,               /* CHAR_TYPE  */
    STRING_TYPE = 261,             /* STRING_TYPE  */
    BOOL_TYPE = 262,               /* BOOL_TYPE  */
    BOOL_TRUE = 263,               /* BOOL_TRUE  */
    BOOL_FALSE = 264,              /* BOOL_FALSE  */
    CLASS = 265,                   /* CLASS  */
    EQUAL = 266,                   /* EQUAL  */
    NOT_EQUAL = 267,               /* NOT_EQUAL  */
    LOWER_EQUAL = 268,             /* LOWER_EQUAL  */
    GREAT_EQUAL = 269,             /* GREAT_EQUAL  */
    ASSIGN = 270,                  /* ASSIGN  */
    IMPORT = 271,                  /* IMPORT  */
    NR = 272,                      /* NR  */
    EXPORT = 273,                  /* EXPORT  */
    GIVE = 274,                    /* GIVE  */
    CONST = 275,                   /* CONST  */
    AND = 276,                     /* AND  */
    OR = 277,                      /* OR  */
    NOT = 278,                     /* NOT  */
    IF_STATEMENT = 279,            /* IF_STATEMENT  */
    ELSE_STATEMENT = 280,          /* ELSE_STATEMENT  */
    ELSE_IF_STATEMENT = 281,       /* ELSE_IF_STATEMENT  */
    WHILE_STATEMENT = 282,         /* WHILE_STATEMENT  */
    FOR_STATEMENT = 283,           /* FOR_STATEMENT  */
    LOOP_STATEMENT = 284,          /* LOOP_STATEMENT  */
    STOP = 285,                    /* STOP  */
    PLUS = 286,                    /* PLUS  */
    MINUS = 287,                   /* MINUS  */
    MUL = 288,                     /* MUL  */
    DIV = 289,                     /* DIV  */
    MOD = 290,                     /* MOD  */
    EVAL = 291,                    /* EVAL  */
    TYPEOF = 292,                  /* TYPEOF  */
    MAIN_START = 293,              /* MAIN_START  */
    MAIN_STOP = 294,               /* MAIN_STOP  */
    DEF_FUNC = 295,                /* DEF_FUNC  */
    ID = 296,                      /* ID  */
    STRING = 297,                  /* STRING  */
    CHAR = 298,                    /* CHAR  */
    RIGHT_EQUAL = 299              /* RIGHT_EQUAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "S++.y"

     char* string;
     char char_type;

#line 113 "S++.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_S_TAB_H_INCLUDED  */

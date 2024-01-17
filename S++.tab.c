/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "S++.y"

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



#line 99 "S++.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "S++.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_TYPE = 3,                   /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 4,                 /* FLOAT_TYPE  */
  YYSYMBOL_CHAR_TYPE = 5,                  /* CHAR_TYPE  */
  YYSYMBOL_STRING_TYPE = 6,                /* STRING_TYPE  */
  YYSYMBOL_BOOL_TYPE = 7,                  /* BOOL_TYPE  */
  YYSYMBOL_BOOL_TRUE = 8,                  /* BOOL_TRUE  */
  YYSYMBOL_BOOL_FALSE = 9,                 /* BOOL_FALSE  */
  YYSYMBOL_CLASS = 10,                     /* CLASS  */
  YYSYMBOL_EQUAL = 11,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 12,                 /* NOT_EQUAL  */
  YYSYMBOL_LOWER = 13,                     /* LOWER  */
  YYSYMBOL_GREATER = 14,                   /* GREATER  */
  YYSYMBOL_LOWER_EQUAL = 15,               /* LOWER_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 16,             /* GREATER_EQUAL  */
  YYSYMBOL_ASSIGN = 17,                    /* ASSIGN  */
  YYSYMBOL_IMPORT = 18,                    /* IMPORT  */
  YYSYMBOL_NR = 19,                        /* NR  */
  YYSYMBOL_EXPORT = 20,                    /* EXPORT  */
  YYSYMBOL_GIVE = 21,                      /* GIVE  */
  YYSYMBOL_CONST = 22,                     /* CONST  */
  YYSYMBOL_AND = 23,                       /* AND  */
  YYSYMBOL_OR = 24,                        /* OR  */
  YYSYMBOL_NOT = 25,                       /* NOT  */
  YYSYMBOL_IF_STATEMENT = 26,              /* IF_STATEMENT  */
  YYSYMBOL_ELSE_STATEMENT = 27,            /* ELSE_STATEMENT  */
  YYSYMBOL_ELSE_IF_STATEMENT = 28,         /* ELSE_IF_STATEMENT  */
  YYSYMBOL_WHILE_STATEMENT = 29,           /* WHILE_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 30,             /* FOR_STATEMENT  */
  YYSYMBOL_LOOP_STATEMENT = 31,            /* LOOP_STATEMENT  */
  YYSYMBOL_STOP = 32,                      /* STOP  */
  YYSYMBOL_PLUS = 33,                      /* PLUS  */
  YYSYMBOL_MINUS = 34,                     /* MINUS  */
  YYSYMBOL_MUL = 35,                       /* MUL  */
  YYSYMBOL_DIV = 36,                       /* DIV  */
  YYSYMBOL_MOD = 37,                       /* MOD  */
  YYSYMBOL_EVAL = 38,                      /* EVAL  */
  YYSYMBOL_TYPEOF = 39,                    /* TYPEOF  */
  YYSYMBOL_MAIN_START = 40,                /* MAIN_START  */
  YYSYMBOL_MAIN_STOP = 41,                 /* MAIN_STOP  */
  YYSYMBOL_DEF_FUNC = 42,                  /* DEF_FUNC  */
  YYSYMBOL_STRING_LITERAL = 43,            /* STRING_LITERAL  */
  YYSYMBOL_44_ = 44,                       /* '('  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_ID = 46,                        /* ID  */
  YYSYMBOL_STRING = 47,                    /* STRING  */
  YYSYMBOL_CHAR = 48,                      /* CHAR  */
  YYSYMBOL_RIGHT_EQUAL = 49,               /* RIGHT_EQUAL  */
  YYSYMBOL_50_ = 50,                       /* '{'  */
  YYSYMBOL_51_ = 51,                       /* '}'  */
  YYSYMBOL_52_ = 52,                       /* '-'  */
  YYSYMBOL_53_ = 53,                       /* '>'  */
  YYSYMBOL_54_ = 54,                       /* ','  */
  YYSYMBOL_55_ = 55,                       /* ';'  */
  YYSYMBOL_56_ = 56,                       /* '['  */
  YYSYMBOL_57_ = 57,                       /* ']'  */
  YYSYMBOL_58_ = 58,                       /* '.'  */
  YYSYMBOL_59_ = 59,                       /* '<'  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_program = 61,                   /* program  */
  YYSYMBOL_types = 62,                     /* types  */
  YYSYMBOL_user_data_types_section = 63,   /* user_data_types_section  */
  YYSYMBOL_user_data_types_def = 64,       /* user_data_types_def  */
  YYSYMBOL_user_data_types = 65,           /* user_data_types  */
  YYSYMBOL_66_1 = 66,                      /* $@1  */
  YYSYMBOL_list_class = 67,                /* list_class  */
  YYSYMBOL_class = 68,                     /* class  */
  YYSYMBOL_global_var_section = 69,        /* global_var_section  */
  YYSYMBOL_70_2 = 70,                      /* $@2  */
  YYSYMBOL_global_var = 71,                /* global_var  */
  YYSYMBOL_func_section = 72,              /* func_section  */
  YYSYMBOL_73_3 = 73,                      /* $@3  */
  YYSYMBOL_list_functions = 74,            /* list_functions  */
  YYSYMBOL_functions = 75,                 /* functions  */
  YYSYMBOL_76_4 = 76,                      /* $@4  */
  YYSYMBOL_77_5 = 77,                      /* $@5  */
  YYSYMBOL_list_param = 78,                /* list_param  */
  YYSYMBOL_parameters = 79,                /* parameters  */
  YYSYMBOL_param = 80,                     /* param  */
  YYSYMBOL_main = 81,                      /* main  */
  YYSYMBOL_82_6 = 82,                      /* $@6  */
  YYSYMBOL_list_statements = 83,           /* list_statements  */
  YYSYMBOL_statements = 84,                /* statements  */
  YYSYMBOL_declarations = 85,              /* declarations  */
  YYSYMBOL_decl = 86,                      /* decl  */
  YYSYMBOL_assign_statements = 87,         /* assign_statements  */
  YYSYMBOL_assignments = 88,               /* assignments  */
  YYSYMBOL_left_value = 89,                /* left_value  */
  YYSYMBOL_value = 90,                     /* value  */
  YYSYMBOL_expression = 91,                /* expression  */
  YYSYMBOL_arithmetic_expression = 92,     /* arithmetic_expression  */
  YYSYMBOL_boolean_expression = 93,        /* boolean_expression  */
  YYSYMBOL_if_statement = 94,              /* if_statement  */
  YYSYMBOL_else_statement = 95,            /* else_statement  */
  YYSYMBOL_while_statement = 96,           /* while_statement  */
  YYSYMBOL_for_statement = 97,             /* for_statement  */
  YYSYMBOL_loop_statement = 98,            /* loop_statement  */
  YYSYMBOL_func_call = 99,                 /* func_call  */
  YYSYMBOL_list_calls = 100,               /* list_calls  */
  YYSYMBOL_give = 101,                     /* give  */
  YYSYMBOL_export = 102                    /* export  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   272

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  237

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,    45,     2,     2,    54,    52,    58,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    55,
      59,     2,    53,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    46,
      47,    48,    49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    54,    55,    56,    57,    58,    61,    62,
      65,    66,    68,    68,    71,    72,    75,    76,    79,    79,
      80,    83,    84,    87,    87,    88,    91,    92,    95,    95,
      96,    96,    99,   100,   103,   104,   107,   110,   110,   113,
     114,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   131,   134,   135,   136,   137,   140,
     143,   146,   147,   148,   151,   152,   153,   154,   155,   156,
     157,   158,   161,   162,   166,   167,   168,   169,   170,   171,
     172,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   191,   192,   195,   196,   197,
     200,   203,   206,   208,   209,   210,   213,   214,   215,   218,
     221,   222
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT_TYPE",
  "FLOAT_TYPE", "CHAR_TYPE", "STRING_TYPE", "BOOL_TYPE", "BOOL_TRUE",
  "BOOL_FALSE", "CLASS", "EQUAL", "NOT_EQUAL", "LOWER", "GREATER",
  "LOWER_EQUAL", "GREATER_EQUAL", "ASSIGN", "IMPORT", "NR", "EXPORT",
  "GIVE", "CONST", "AND", "OR", "NOT", "IF_STATEMENT", "ELSE_STATEMENT",
  "ELSE_IF_STATEMENT", "WHILE_STATEMENT", "FOR_STATEMENT",
  "LOOP_STATEMENT", "STOP", "PLUS", "MINUS", "MUL", "DIV", "MOD", "EVAL",
  "TYPEOF", "MAIN_START", "MAIN_STOP", "DEF_FUNC", "STRING_LITERAL", "'('",
  "')'", "ID", "STRING", "CHAR", "RIGHT_EQUAL", "'{'", "'}'", "'-'", "'>'",
  "','", "';'", "'['", "']'", "'.'", "'<'", "$accept", "program", "types",
  "user_data_types_section", "user_data_types_def", "user_data_types",
  "$@1", "list_class", "class", "global_var_section", "$@2", "global_var",
  "func_section", "$@3", "list_functions", "functions", "$@4", "$@5",
  "list_param", "parameters", "param", "main", "$@6", "list_statements",
  "statements", "declarations", "decl", "assign_statements", "assignments",
  "left_value", "value", "expression", "arithmetic_expression",
  "boolean_expression", "if_statement", "else_statement",
  "while_statement", "for_statement", "loop_statement", "func_call",
  "list_calls", "give", "export", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-87)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-26)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,    -7,    44,    40,   -87,     7,   -87,   -87,     9,   197,
     -87,    -4,   -87,    11,   -87,   -87,   -87,   -87,   -87,    68,
      35,   -87,   197,     2,   105,   -87,    28,    48,   -87,    11,
      50,    -9,   -87,   -87,    46,   105,   -87,   -87,   167,    56,
     -87,    84,     4,    83,   -87,   -87,    59,    67,     4,    74,
      76,    77,    75,    69,    82,    90,   -42,    10,    94,   167,
     -87,    81,   -87,   120,   -87,   -87,   -87,   -87,    86,   -87,
      68,     4,   -87,   -87,    87,     4,     4,   -25,    98,   -39,
     -87,   -87,   209,   -87,   -87,    89,   -23,    22,   -87,    93,
       4,     4,    67,   167,   -87,     4,     4,    96,   131,     4,
     104,   -87,   -87,   -87,     4,   -87,   114,   116,   -87,   109,
     -87,   147,   209,   -87,   196,   123,   122,   150,   124,   132,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,   -87,   -87,   159,    67,   -87,   -87,   135,   137,   136,
     139,   149,   170,   146,   160,   162,   173,   -87,   -87,   -87,
     174,    68,   -87,   -87,    14,   181,   171,   -87,   182,    60,
     119,   119,   119,   119,   119,   119,    29,    29,   -87,   -87,
     -87,   177,   -87,   186,   187,     4,   -87,   -87,   -87,   -87,
     -87,     4,   -87,   185,   189,   -87,     4,     4,     4,     4,
     -87,   -87,   194,    95,   193,   167,   167,   195,   -87,    68,
     167,   -87,   -87,   -87,   -87,   -87,   -87,   198,   200,    67,
     -87,   201,    33,   -87,   208,   190,   -87,   204,   211,   -87,
     206,   167,   167,     4,   167,   207,   210,   212,   213,   -87,
     -87,   215,   -87,   167,   216,    33,   -87
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       9,     0,     0,    18,     8,    10,    12,     1,    23,     0,
      11,     0,    37,     0,     3,     4,     5,     6,     7,     0,
       0,    19,    21,     0,     0,     2,     0,     0,    24,    26,
       0,    55,    22,    54,     0,    14,    17,    16,     0,     0,
      27,     0,     0,     0,    13,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,     0,    39,
      41,     0,    42,     0,    43,    44,    45,    46,     0,    48,
      33,     0,    93,    94,    64,     0,     0,    69,     0,     0,
      79,    57,    72,    73,    70,     0,     0,     0,    53,     0,
       0,     0,     0,     0,    49,     0,     0,     0,     0,   108,
       0,    38,    40,    60,     0,    47,     0,     0,    32,    34,
      58,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    51,     0,     0,   110,   109,     0,     0,     0,
       0,     0,     0,     0,     0,   106,     0,    50,    59,    36,
      30,     0,    65,    80,    92,     0,     0,    67,     0,     0,
      81,    82,    83,    84,    85,    86,    74,    75,    76,    77,
      78,     0,   111,     0,     0,     0,   102,   104,   105,    63,
      62,   108,   103,     0,     0,    35,     0,     0,     0,     0,
      71,    68,     0,     0,     0,     0,     0,     0,   107,     0,
       0,    87,    88,    89,    90,    66,    52,     0,     0,     0,
      28,     0,    95,   100,     0,     0,    31,     0,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
      99,     0,   101,     0,     0,    98,    97
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -87,   -87,   -18,   -87,   254,   -87,   -87,   225,   -87,   -87,
     -87,   240,   -87,   -87,   234,     0,   -87,   -87,   -87,   115,
     -87,   -87,   -87,   -57,   -87,     6,   -87,   -86,   -87,   -40,
     -87,   -26,   -37,   -72,   -87,    34,   -87,   -87,   -87,   -38,
      91,   -87,   134
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    20,     3,     4,     5,    11,    34,    35,     8,
       9,    21,    12,    13,    28,    29,   215,   184,   107,   108,
     109,    25,    26,    58,    59,    60,    23,    61,    62,    63,
      80,   145,   112,    83,    64,   219,    65,    66,    67,    84,
     146,    69,    88
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    30,   102,   113,   115,    82,   139,    87,    42,   118,
      97,    82,    72,    73,    98,    22,    81,     1,   137,   138,
     119,    68,    89,    74,    36,   186,   187,   116,    22,    75,
      37,   117,   132,   133,    82,    36,   140,   188,   189,   114,
       6,    37,    54,    55,     7,   110,    24,    43,    76,   -25,
      77,    78,   106,    27,    99,    68,   100,    33,    82,    82,
     217,   218,    82,    79,   128,   129,   130,    82,    38,   141,
     142,    14,    15,    16,    17,    18,   134,   135,   148,    74,
     -20,    31,   -20,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,    87,    39,    41,    44,    54,    55,
      70,    71,    85,   197,   159,    86,    77,    78,    14,    15,
      16,    17,    18,    56,   201,   202,   203,   204,    90,    79,
      91,    92,   193,   214,    94,    93,    95,    19,   126,   127,
     128,   129,   130,   106,    96,   101,   103,   104,   207,   208,
     153,   105,    99,   211,    82,   111,   131,    27,   136,   143,
     144,   227,   126,   127,   128,   129,   130,    68,    68,   147,
     149,   150,    68,   151,   225,   226,   152,   228,   154,   156,
      14,    15,    16,    17,    18,   155,   234,   157,   171,   158,
     173,   210,   174,    68,    68,    46,    68,    47,    48,    19,
     176,   175,   179,    49,   177,    68,    50,    51,    52,    53,
      14,    15,    16,    17,    18,    54,    55,   120,   121,   122,
     123,   124,   125,    56,    57,   178,   181,   180,   182,    19,
     120,   121,   122,   123,   124,   125,   183,   190,   191,   126,
     127,   128,   129,   130,   194,   192,   195,   196,   199,   200,
     221,   153,   126,   127,   128,   129,   130,   205,   206,   212,
     209,   213,   216,   220,   222,   223,   224,   231,   229,    10,
      45,   230,    32,    40,   232,   233,   185,   235,   172,   236,
       0,     0,   198
};

static const yytype_int16 yycheck[] =
{
      38,    19,    59,    75,    76,    42,    92,    47,    17,    48,
      52,    48,     8,     9,    56,     9,    42,    10,    90,    91,
      59,    59,    48,    19,    24,    11,    12,    52,    22,    25,
      24,    56,    55,    56,    71,    35,    93,    23,    24,    76,
      47,    35,    38,    39,     0,    71,    50,    56,    44,    40,
      46,    47,    70,    42,    44,    93,    46,    55,    95,    96,
      27,    28,    99,    59,    35,    36,    37,   104,    40,    95,
      96,     3,     4,     5,     6,     7,    54,    55,   104,    19,
      40,    46,    42,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   134,    47,    46,    51,    38,    39,
      44,    17,    19,   175,    44,    46,    46,    47,     3,     4,
       5,     6,     7,    46,   186,   187,   188,   189,    44,    59,
      44,    44,   159,   209,    55,    50,    44,    22,    33,    34,
      35,    36,    37,   151,    44,    41,    55,    17,   195,   196,
      45,    55,    44,   200,   181,    58,    57,    42,    55,    53,
      19,   223,    33,    34,    35,    36,    37,   195,   196,    55,
      46,    45,   200,    54,   221,   222,    19,   224,    45,    19,
       3,     4,     5,     6,     7,    53,   233,    53,    19,    47,
      45,   199,    45,   221,   222,    18,   224,    20,    21,    22,
      51,    55,    46,    26,    45,   233,    29,    30,    31,    32,
       3,     4,     5,     6,     7,    38,    39,    11,    12,    13,
      14,    15,    16,    46,    47,    45,    54,    57,    45,    22,
      11,    12,    13,    14,    15,    16,    52,    46,    57,    33,
      34,    35,    36,    37,    57,    53,    50,    50,    53,    50,
      50,    45,    33,    34,    35,    36,    37,    53,    55,    51,
      55,    51,    51,    45,    50,    44,    50,    45,    51,     5,
      35,    51,    22,    29,    51,    50,   151,    51,   134,   235,
      -1,    -1,   181
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    61,    63,    64,    65,    47,     0,    69,    70,
      64,    66,    72,    73,     3,     4,     5,     6,     7,    22,
      62,    71,    85,    86,    50,    81,    82,    42,    74,    75,
      62,    46,    71,    55,    67,    68,    75,    85,    40,    47,
      74,    46,    17,    56,    51,    67,    18,    20,    21,    26,
      29,    30,    31,    32,    38,    39,    46,    47,    83,    84,
      85,    87,    88,    89,    94,    96,    97,    98,    99,   101,
      44,    17,     8,     9,    19,    25,    44,    46,    47,    59,
      90,    91,    92,    93,    99,    19,    46,    89,   102,    91,
      44,    44,    44,    50,    55,    44,    44,    52,    56,    44,
      46,    41,    83,    55,    17,    55,    62,    78,    79,    80,
      91,    58,    92,    93,    92,    93,    52,    56,    48,    59,
      11,    12,    13,    14,    15,    16,    33,    34,    35,    36,
      37,    57,    55,    56,    54,    55,    55,    93,    93,    87,
      83,    91,    91,    53,    19,    91,   100,    55,    91,    46,
      45,    54,    19,    45,    45,    53,    19,    53,    47,    44,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    19,   102,    45,    45,    55,    51,    45,    45,    46,
      57,    54,    45,    52,    77,    79,    11,    12,    23,    24,
      46,    57,    53,    92,    57,    50,    50,    93,   100,    53,
      50,    93,    93,    93,    93,    53,    55,    83,    83,    55,
      62,    83,    51,    51,    87,    76,    51,    27,    28,    95,
      45,    50,    50,    44,    50,    83,    83,    93,    83,    51,
      51,    45,    51,    50,    83,    51,    95
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    62,    62,    62,    62,    62,    63,    63,
      64,    64,    66,    65,    67,    67,    68,    68,    70,    69,
      69,    71,    71,    73,    72,    72,    74,    74,    76,    75,
      77,    75,    78,    78,    79,    79,    80,    82,    81,    83,
      83,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    86,    86,    86,    86,    87,
      88,    89,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    90,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    94,    94,    95,    95,    95,
      96,    97,    98,    99,    99,    99,   100,   100,   100,   101,
     102,   102
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     0,     6,     1,     2,     1,     1,     0,     2,
       0,     1,     2,     0,     2,     0,     1,     2,     0,    12,
       0,     9,     1,     0,     1,     3,     2,     0,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       3,     3,     6,     2,     2,     2,     5,     4,     5,     3,
       2,     1,     4,     4,     1,     3,     5,     3,     4,     1,
       1,     4,     1,     1,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     5,     5,     5,
       5,     2,     3,     1,     1,     7,     8,     8,     7,     4,
       7,    11,     4,     4,     4,     4,     1,     3,     0,     3,
       2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: user_data_types_section global_var_section func_section main  */
#line 51 "S++.y"
                                                                      {printf("The program is correct!\n");}
#line 1360 "S++.tab.c"
    break;

  case 3: /* types: INT_TYPE  */
#line 54 "S++.y"
                {current_type=(yyvsp[0].string); (yyval.string)=(yyvsp[0].string);}
#line 1366 "S++.tab.c"
    break;

  case 4: /* types: FLOAT_TYPE  */
#line 55 "S++.y"
                  {current_type=(yyvsp[0].string); (yyval.string)=(yyvsp[0].string);}
#line 1372 "S++.tab.c"
    break;

  case 5: /* types: CHAR_TYPE  */
#line 56 "S++.y"
                  {current_type=(yyvsp[0].string); (yyval.string)=(yyvsp[0].string);}
#line 1378 "S++.tab.c"
    break;

  case 6: /* types: STRING_TYPE  */
#line 57 "S++.y"
                   {current_type=(yyvsp[0].string); (yyval.string)=(yyvsp[0].string);}
#line 1384 "S++.tab.c"
    break;

  case 7: /* types: BOOL_TYPE  */
#line 58 "S++.y"
                  {current_type=(yyvsp[0].string); (yyval.string)=(yyvsp[0].string);}
#line 1390 "S++.tab.c"
    break;

  case 12: /* $@1: %empty  */
#line 68 "S++.y"
                               {current_def_var=string((yyvsp[0].string)); current_def_func=string((yyvsp[0].string));}
#line 1396 "S++.tab.c"
    break;

  case 18: /* $@2: %empty  */
#line 79 "S++.y"
                    {current_def_var="global";}
#line 1402 "S++.tab.c"
    break;

  case 23: /* $@3: %empty  */
#line 87 "S++.y"
              {current_def_func="global";}
#line 1408 "S++.tab.c"
    break;

  case 28: /* $@4: %empty  */
#line 95 "S++.y"
                                                            {current_def_var=string((yyvsp[-6].string));}
#line 1414 "S++.tab.c"
    break;

  case 29: /* functions: DEF_FUNC STRING '(' list_param ')' '-' '>' types $@4 '{' list_statements '}'  */
#line 95 "S++.y"
                                                                                                                  {table.addFunc(string((yyvsp[-10].string)),string((yyvsp[-4].string)),parameters,current_def_func); parameters.clear();}
#line 1420 "S++.tab.c"
    break;

  case 30: /* $@5: %empty  */
#line 96 "S++.y"
                                              {current_def_var=string((yyvsp[-3].string));}
#line 1426 "S++.tab.c"
    break;

  case 31: /* functions: DEF_FUNC STRING '(' list_param ')' $@5 '{' list_statements '}'  */
#line 96 "S++.y"
                                                                                                     {table.addFunc(string((yyvsp[-7].string)),"none",parameters,current_def_func); parameters.clear();}
#line 1432 "S++.tab.c"
    break;

  case 36: /* param: types ID  */
#line 107 "S++.y"
                {parameters.push_back(string((yyvsp[-1].string)));}
#line 1438 "S++.tab.c"
    break;

  case 37: /* $@6: %empty  */
#line 110 "S++.y"
      {current_def_var="main";}
#line 1444 "S++.tab.c"
    break;

  case 55: /* decl: types ID  */
#line 134 "S++.y"
               { table.addVar(current_type, (yyvsp[0].string), "", current_def_var);  }
#line 1450 "S++.tab.c"
    break;

  case 57: /* decl: types ID ASSIGN expression  */
#line 136 "S++.y"
                                 { table.addVar(current_type, (yyvsp[-2].string), (yyvsp[0].string), current_def_var);}
#line 1456 "S++.tab.c"
    break;

  case 58: /* decl: CONST types ID ASSIGN expression  */
#line 137 "S++.y"
                                       {table.addVar(string((yyvsp[-4].string))+" "+current_type, (yyvsp[-2].string), (yyvsp[0].string), current_def_var);}
#line 1462 "S++.tab.c"
    break;

  case 64: /* value: NR  */
#line 151 "S++.y"
            {(yyval.string)=(yyvsp[0].string);}
#line 1468 "S++.tab.c"
    break;

  case 65: /* value: NR '.' NR  */
#line 152 "S++.y"
                 {current_value=string((yyvsp[-2].string))+"."+string((yyvsp[0].string)); (yyval.string)=current_value.c_str();}
#line 1474 "S++.tab.c"
    break;

  case 66: /* value: '<' '<' STRING '>' '>'  */
#line 153 "S++.y"
                            {current_value=string((yyvsp[-2].string)); (yyval.string)=current_value.c_str();}
#line 1480 "S++.tab.c"
    break;

  case 67: /* value: '<' CHAR '>'  */
#line 154 "S++.y"
                   {current_value=string((yyvsp[-1].string));(yyval.string)=current_value.c_str();}
#line 1486 "S++.tab.c"
    break;

  case 68: /* value: ID '[' NR ']'  */
#line 155 "S++.y"
                    {current_value=string((yyvsp[-3].string))+"["+string((yyvsp[-1].string))+"]";  (yyval.string)=current_value.c_str();}
#line 1492 "S++.tab.c"
    break;

  case 69: /* value: ID  */
#line 156 "S++.y"
         {current_value=(yyvsp[0].string); (yyval.string)=(yyvsp[0].string);}
#line 1498 "S++.tab.c"
    break;

  case 71: /* value: ID '-' '>' ID  */
#line 158 "S++.y"
                   {current_value=string((yyvsp[-3].string))+"->"+string((yyvsp[0].string)); (yyval.string)=current_value.c_str();}
#line 1504 "S++.tab.c"
    break;

  case 72: /* expression: arithmetic_expression  */
#line 161 "S++.y"
                                  {(yyval.string)=(yyvsp[0].string);}
#line 1510 "S++.tab.c"
    break;

  case 73: /* expression: boolean_expression  */
#line 162 "S++.y"
                             {(yyval.string)=(yyvsp[0].string);}
#line 1516 "S++.tab.c"
    break;

  case 74: /* arithmetic_expression: arithmetic_expression PLUS arithmetic_expression  */
#line 166 "S++.y"
                                                                        { current=string((yyvsp[-2].string))+" "+string((yyvsp[-1].string))+" "+string((yyvsp[0].string)); (yyval.string)=current.c_str();}
#line 1522 "S++.tab.c"
    break;

  case 75: /* arithmetic_expression: arithmetic_expression MINUS arithmetic_expression  */
#line 167 "S++.y"
                                                             {current=string((yyvsp[-2].string))+" "+string((yyvsp[-1].string))+" "+string((yyvsp[0].string)); (yyval.string)=current.c_str();}
#line 1528 "S++.tab.c"
    break;

  case 76: /* arithmetic_expression: arithmetic_expression MUL arithmetic_expression  */
#line 168 "S++.y"
                                                           {current=string((yyvsp[-2].string))+" "+string((yyvsp[-1].string))+" "+string((yyvsp[0].string)); (yyval.string)=current.c_str();}
#line 1534 "S++.tab.c"
    break;

  case 77: /* arithmetic_expression: arithmetic_expression DIV arithmetic_expression  */
#line 169 "S++.y"
                                                           {current=string((yyvsp[-2].string))+" "+string((yyvsp[-1].string))+" "+string((yyvsp[0].string)); (yyval.string)=current.c_str();}
#line 1540 "S++.tab.c"
    break;

  case 78: /* arithmetic_expression: arithmetic_expression MOD arithmetic_expression  */
#line 170 "S++.y"
                                                           {current=string((yyvsp[-2].string))+" "+string((yyvsp[-1].string))+" "+string((yyvsp[0].string)); (yyval.string)=current.c_str();}
#line 1546 "S++.tab.c"
    break;

  case 79: /* arithmetic_expression: value  */
#line 171 "S++.y"
                 {(yyval.string)=(yyvsp[0].string); }
#line 1552 "S++.tab.c"
    break;

  case 80: /* arithmetic_expression: '(' arithmetic_expression ')'  */
#line 172 "S++.y"
                                        {current="("+string((yyvsp[-1].string))+")"; (yyval.string)=current.c_str();}
#line 1558 "S++.tab.c"
    break;

  case 93: /* boolean_expression: BOOL_TRUE  */
#line 187 "S++.y"
                             {current_value=(yyvsp[0].string);}
#line 1564 "S++.tab.c"
    break;

  case 94: /* boolean_expression: BOOL_FALSE  */
#line 188 "S++.y"
                              {current_value=(yyvsp[0].string);}
#line 1570 "S++.tab.c"
    break;


#line 1574 "S++.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 224 "S++.y"

void yyerror(const char * s){
    printf("error: %s at line:%d\n",s,yylineno);
}

int main(int argc, char** argv){
    yyin=fopen(argv[1],"r");
    yyparse();
    table.printTable();
} 

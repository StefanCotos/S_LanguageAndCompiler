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
#include "S++.h"

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class symbolTable table;

string current_id;
string current_value;
string current_type;
string current_def="global";

#line 90 "S++.tab.c"

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
  YYSYMBOL_LOWER_EQUAL = 13,               /* LOWER_EQUAL  */
  YYSYMBOL_GREAT_EQUAL = 14,               /* GREAT_EQUAL  */
  YYSYMBOL_ASSIGN = 15,                    /* ASSIGN  */
  YYSYMBOL_IMPORT = 16,                    /* IMPORT  */
  YYSYMBOL_NR = 17,                        /* NR  */
  YYSYMBOL_EXPORT = 18,                    /* EXPORT  */
  YYSYMBOL_GIVE = 19,                      /* GIVE  */
  YYSYMBOL_CONST = 20,                     /* CONST  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_NOT = 23,                       /* NOT  */
  YYSYMBOL_IF_STATEMENT = 24,              /* IF_STATEMENT  */
  YYSYMBOL_ELSE_STATEMENT = 25,            /* ELSE_STATEMENT  */
  YYSYMBOL_ELSE_IF_STATEMENT = 26,         /* ELSE_IF_STATEMENT  */
  YYSYMBOL_WHILE_STATEMENT = 27,           /* WHILE_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 28,             /* FOR_STATEMENT  */
  YYSYMBOL_LOOP_STATEMENT = 29,            /* LOOP_STATEMENT  */
  YYSYMBOL_STOP = 30,                      /* STOP  */
  YYSYMBOL_PLUS = 31,                      /* PLUS  */
  YYSYMBOL_MINUS = 32,                     /* MINUS  */
  YYSYMBOL_MUL = 33,                       /* MUL  */
  YYSYMBOL_DIV = 34,                       /* DIV  */
  YYSYMBOL_MOD = 35,                       /* MOD  */
  YYSYMBOL_EVAL = 36,                      /* EVAL  */
  YYSYMBOL_TYPEOF = 37,                    /* TYPEOF  */
  YYSYMBOL_MAIN_START = 38,                /* MAIN_START  */
  YYSYMBOL_MAIN_STOP = 39,                 /* MAIN_STOP  */
  YYSYMBOL_DEF_FUNC = 40,                  /* DEF_FUNC  */
  YYSYMBOL_ID = 41,                        /* ID  */
  YYSYMBOL_STRING = 42,                    /* STRING  */
  YYSYMBOL_CHAR = 43,                      /* CHAR  */
  YYSYMBOL_RIGHT_EQUAL = 44,               /* RIGHT_EQUAL  */
  YYSYMBOL_45_ = 45,                       /* '{'  */
  YYSYMBOL_46_ = 46,                       /* '}'  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ')'  */
  YYSYMBOL_49_ = 49,                       /* '-'  */
  YYSYMBOL_50_ = 50,                       /* '>'  */
  YYSYMBOL_51_ = 51,                       /* ','  */
  YYSYMBOL_52_ = 52,                       /* ';'  */
  YYSYMBOL_53_ = 53,                       /* '['  */
  YYSYMBOL_54_ = 54,                       /* ']'  */
  YYSYMBOL_55_ = 55,                       /* '.'  */
  YYSYMBOL_56_ = 56,                       /* '<'  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_types = 59,                     /* types  */
  YYSYMBOL_user_data_types_section = 60,   /* user_data_types_section  */
  YYSYMBOL_user_data_types_def = 61,       /* user_data_types_def  */
  YYSYMBOL_user_data_types = 62,           /* user_data_types  */
  YYSYMBOL_list_class = 63,                /* list_class  */
  YYSYMBOL_class = 64,                     /* class  */
  YYSYMBOL_global_var_section = 65,        /* global_var_section  */
  YYSYMBOL_global_var = 66,                /* global_var  */
  YYSYMBOL_func_section = 67,              /* func_section  */
  YYSYMBOL_list_functions = 68,            /* list_functions  */
  YYSYMBOL_functions = 69,                 /* functions  */
  YYSYMBOL_list_param = 70,                /* list_param  */
  YYSYMBOL_parameters = 71,                /* parameters  */
  YYSYMBOL_param = 72,                     /* param  */
  YYSYMBOL_main = 73,                      /* main  */
  YYSYMBOL_list_statements = 74,           /* list_statements  */
  YYSYMBOL_statements = 75,                /* statements  */
  YYSYMBOL_declarations = 76,              /* declarations  */
  YYSYMBOL_decl = 77,                      /* decl  */
  YYSYMBOL_assign_statements = 78,         /* assign_statements  */
  YYSYMBOL_assignments = 79,               /* assignments  */
  YYSYMBOL_left_value = 80,                /* left_value  */
  YYSYMBOL_value = 81,                     /* value  */
  YYSYMBOL_expression = 82,                /* expression  */
  YYSYMBOL_arithmetic_expression = 83,     /* arithmetic_expression  */
  YYSYMBOL_boolean_expression = 84,        /* boolean_expression  */
  YYSYMBOL_if_statement = 85,              /* if_statement  */
  YYSYMBOL_else_statement = 86,            /* else_statement  */
  YYSYMBOL_while_statement = 87,           /* while_statement  */
  YYSYMBOL_for_statement = 88,             /* for_statement  */
  YYSYMBOL_loop_statement = 89,            /* loop_statement  */
  YYSYMBOL_func_call = 90,                 /* func_call  */
  YYSYMBOL_list_calls = 91,                /* list_calls  */
  YYSYMBOL_give = 92,                      /* give  */
  YYSYMBOL_export = 93                     /* export  */
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
#define YYLAST   279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  238

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
      47,    48,     2,     2,    51,    49,    55,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    52,
      56,     2,    50,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    44,    44,    47,    48,    49,    50,    51,    54,    55,
      58,    59,    61,    64,    65,    68,    69,    72,    73,    76,
      77,    80,    81,    84,    85,    88,    89,    92,    93,    96,
      97,   100,   103,   106,   107,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   124,   127,
     128,   129,   130,   133,   136,   139,   140,   141,   144,   145,
     146,   147,   148,   149,   150,   151,   154,   155,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   188,   189,   192,   193,   194,   197,
     200,   203,   205,   206,   207,   210,   211,   212,   215,   218,
     219
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
  "BOOL_FALSE", "CLASS", "EQUAL", "NOT_EQUAL", "LOWER_EQUAL",
  "GREAT_EQUAL", "ASSIGN", "IMPORT", "NR", "EXPORT", "GIVE", "CONST",
  "AND", "OR", "NOT", "IF_STATEMENT", "ELSE_STATEMENT",
  "ELSE_IF_STATEMENT", "WHILE_STATEMENT", "FOR_STATEMENT",
  "LOOP_STATEMENT", "STOP", "PLUS", "MINUS", "MUL", "DIV", "MOD", "EVAL",
  "TYPEOF", "MAIN_START", "MAIN_STOP", "DEF_FUNC", "ID", "STRING", "CHAR",
  "RIGHT_EQUAL", "'{'", "'}'", "'('", "')'", "'-'", "'>'", "','", "';'",
  "'['", "']'", "'.'", "'<'", "$accept", "program", "types",
  "user_data_types_section", "user_data_types_def", "user_data_types",
  "list_class", "class", "global_var_section", "global_var",
  "func_section", "list_functions", "functions", "list_param",
  "parameters", "param", "main", "list_statements", "statements",
  "declarations", "decl", "assign_statements", "assignments", "left_value",
  "value", "expression", "arithmetic_expression", "boolean_expression",
  "if_statement", "else_statement", "while_statement", "for_statement",
  "loop_statement", "func_call", "list_calls", "give", "export", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-72)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,   -17,    28,    71,   -72,     8,    -7,   -72,   -72,   -72,
     -72,   -72,   -72,    94,     5,    12,   -72,    71,    -9,   -72,
       9,    20,    11,   -72,    51,    39,    68,   -72,    12,   -72,
     -72,    86,     9,   -72,   -72,    34,   -72,    90,   121,     0,
      98,    66,   -72,   -72,   -72,   -72,   135,   112,   101,   -72,
     -72,   102,     0,   111,   113,    56,   114,     0,   -32,    96,
     -72,   100,   -72,   -72,    94,   124,    20,     0,   115,   122,
     123,   126,   125,   -20,   129,    66,   -72,   127,   -72,   -72,
     -72,   -72,   -72,   128,   -72,   119,   -72,   161,   164,   -72,
       0,     0,   132,   166,     0,    19,   130,   134,   144,     3,
       3,     3,     3,     3,     3,     3,     3,     3,   147,   141,
     -72,   139,     2,    37,   -72,   140,     0,     0,    20,    66,
     -72,   143,   -72,   -72,   -72,   -72,   -72,   -72,   148,   151,
     150,   149,   153,   154,   116,   104,   -72,   155,     3,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,    88,
      94,   -72,   198,    20,   -72,   -72,   100,   168,   169,   167,
     172,   -72,   -72,   -72,   -72,   -72,     0,   -72,     3,     3,
       3,     3,     3,     0,     0,     0,     0,     0,     0,   170,
     173,    66,   174,   -72,   171,   -72,   177,   178,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   180,    94,   175,    66,    66,   176,   -72,
     184,   -72,   185,   186,    20,    66,   117,   -72,   182,   187,
     189,   188,   -72,   191,   -72,    66,     0,    66,   192,   193,
     194,   -72,   197,   -72,    66,   200,   117,   -72
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       9,     0,     0,    18,     8,    10,     0,     1,     3,     4,
       5,     6,     7,     0,     0,    22,    17,    19,     0,    11,
       0,     0,    49,    51,     0,     0,     0,    21,    23,    20,
      48,     0,    13,    16,    15,    55,    52,     0,     0,     0,
       0,     0,     2,    24,    12,    14,     0,     0,     0,    92,
      93,    58,     0,     0,     0,    63,     0,     0,     0,    78,
      53,    66,    67,    64,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    35,     0,    36,    37,
      38,    39,    40,     0,    42,     0,    57,    50,     0,    90,
       0,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    29,     0,     0,    47,     0,     0,     0,     0,     0,
      43,     0,    32,    34,    54,    41,    56,    59,     0,     0,
       0,     0,   105,     0,    79,    91,    61,     0,     0,    68,
      69,    70,    71,    72,    80,    81,    82,    83,    31,     0,
       0,    45,     0,     0,   109,   108,     0,     0,     0,     0,
       0,    44,   103,   104,    65,    62,   107,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,   110,     0,     0,     0,   101,
     106,    73,    74,    75,    76,    77,    84,    85,    86,    87,
      88,    89,    60,     0,     0,     0,     0,     0,     0,    26,
       0,    46,     0,     0,     0,     0,    94,    99,     0,     0,
       0,     0,    95,     0,    25,     0,     0,     0,     0,     0,
       0,    98,     0,   100,     0,     0,    97,    96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -11,   -72,   232,   -72,   207,   -72,   -72,   226,
     -72,   216,   -10,   -72,    97,   -72,   -72,   -71,   -72,    48,
     -72,   -14,   -72,   -61,   -72,   -33,   107,   -54,   -72,    13,
     -72,   -72,   -72,   -40,    82,   -72,    99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    14,     3,     4,     5,    31,    32,    15,    16,
      26,    27,    28,   109,   110,   111,    42,    74,    75,    76,
      18,    77,    78,    24,    59,   132,   156,    62,    79,   222,
      80,    81,    82,    63,   133,    84,   114
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    83,    21,    96,   123,   113,    60,    36,    49,    50,
      33,    97,     8,     9,    10,    11,    12,    51,     1,    89,
      51,   121,    33,    52,    98,     6,   -55,    94,     7,    13,
     104,   105,   106,   107,   115,    83,    53,    54,    20,    53,
      54,    55,    56,    30,    55,    56,    22,    57,   160,    25,
     138,    17,    25,   108,   151,   152,    58,   128,   129,    58,
      37,    35,   157,   158,    38,    17,    39,   134,    34,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    83,
      34,    40,    65,    37,    66,    67,    13,    46,   153,   154,
      68,    13,   113,    69,    70,    71,    72,     8,     9,    10,
      11,    12,    53,    54,   159,    92,    41,    35,    73,    93,
     203,   104,   105,   106,   107,   173,   174,   175,   176,   196,
     197,   198,   199,   200,   201,   177,   178,    99,   100,   101,
     102,   103,    44,   181,   208,   212,   213,   182,    48,   108,
      47,    83,   220,   221,   219,    64,    61,   168,   169,   170,
     171,   172,    85,    86,   228,    87,   230,    88,    90,    61,
      91,    94,   116,   235,    95,   112,    83,    83,   122,   117,
     118,   119,   229,   126,    61,    83,   -56,   120,   135,   124,
     125,   127,   130,   131,   136,    83,   137,    83,   148,   149,
     150,   164,   155,   210,    83,   161,   162,    61,    61,   163,
     218,    61,   167,   165,   166,   179,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   184,   186,   187,   189,   188,
     202,   134,   206,   207,   204,   205,   209,   211,   214,   215,
     223,   216,   217,   224,   225,   226,   227,    19,   231,    45,
     233,   232,   234,    29,    43,   180,   236,   183,   190,   237,
       0,     0,   185,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,     0,   191,   192,   193,   194,   195
};

static const yytype_int16 yycheck[] =
{
      14,    41,    13,    57,    75,    66,    39,    21,     8,     9,
      20,    43,     3,     4,     5,     6,     7,    17,    10,    52,
      17,    41,    32,    23,    56,    42,    15,    47,     0,    20,
      11,    12,    13,    14,    67,    75,    36,    37,    45,    36,
      37,    41,    42,    52,    41,    42,    41,    47,   119,    40,
      47,     3,    40,    64,    52,    53,    56,    90,    91,    56,
      49,    41,   116,   117,    53,    17,    15,    48,    20,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,   119,
      32,    42,    16,    49,    18,    19,    20,    53,    51,    52,
      24,    20,   153,    27,    28,    29,    30,     3,     4,     5,
       6,     7,    36,    37,   118,    49,    38,    41,    42,    53,
     181,    11,    12,    13,    14,    11,    12,    13,    14,   173,
     174,   175,   176,   177,   178,    21,    22,    31,    32,    33,
      34,    35,    46,    45,   188,   206,   207,    49,    17,   150,
      50,   181,    25,    26,   215,    47,    39,    31,    32,    33,
      34,    35,    17,    41,   225,    54,   227,    55,    47,    52,
      47,    47,    47,   234,    57,    41,   206,   207,    39,    47,
      47,    45,   226,    54,    67,   215,    15,    52,    48,    52,
      52,    17,    50,    17,    50,   225,    42,   227,    41,    48,
      51,    41,    52,   204,   234,    52,    48,    90,    91,    48,
     214,    94,    48,    54,    51,    50,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    17,    48,    48,    46,    52,
      50,    48,    45,    45,    50,    54,    46,    52,    52,    45,
      48,    46,    46,    46,    45,    47,    45,     5,    46,    32,
      46,    48,    45,    17,    28,   138,    46,   150,   166,   236,
      -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   166,    -1,   168,   169,   170,   171,   172
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    58,    60,    61,    62,    42,     0,     3,     4,
       5,     6,     7,    20,    59,    65,    66,    76,    77,    61,
      45,    59,    41,    78,    80,    40,    67,    68,    69,    66,
      52,    63,    64,    69,    76,    41,    78,    49,    53,    15,
      42,    38,    73,    68,    46,    63,    53,    50,    17,     8,
       9,    17,    23,    36,    37,    41,    42,    47,    56,    81,
      82,    83,    84,    90,    47,    16,    18,    19,    24,    27,
      28,    29,    30,    42,    74,    75,    76,    78,    79,    85,
      87,    88,    89,    90,    92,    17,    41,    54,    55,    82,
      47,    47,    49,    53,    47,    83,    84,    43,    56,    31,
      32,    33,    34,    35,    11,    12,    13,    14,    59,    70,
      71,    72,    41,    80,    93,    82,    47,    47,    47,    45,
      52,    41,    39,    74,    52,    52,    54,    17,    82,    82,
      50,    17,    82,    91,    48,    48,    50,    42,    47,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    41,    48,
      51,    52,    53,    51,    52,    52,    83,    84,    84,    78,
      74,    52,    48,    48,    41,    54,    51,    48,    31,    32,
      33,    34,    35,    11,    12,    13,    14,    21,    22,    50,
      83,    45,    49,    71,    17,    93,    48,    48,    52,    46,
      91,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    50,    74,    50,    54,    45,    45,    84,    46,
      59,    52,    74,    74,    52,    45,    46,    46,    78,    74,
      25,    26,    86,    48,    46,    45,    47,    45,    74,    84,
      74,    46,    48,    46,    45,    74,    46,    86
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    59,    59,    59,    59,    59,    60,    60,
      61,    61,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    70,    70,    71,
      71,    72,    73,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    76,    77,
      77,    77,    77,    78,    79,    80,    80,    80,    81,    81,
      81,    81,    81,    81,    81,    81,    82,    82,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    86,    86,    86,    87,
      88,    89,    90,    90,    90,    91,    91,    91,    92,    93,
      93
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     5,     1,     2,     1,     1,     1,     0,     1,
       2,     1,     0,     1,     2,    11,     8,     1,     0,     1,
       3,     2,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     3,     3,     6,     2,     2,     2,
       5,     2,     3,     3,     2,     1,     4,     4,     1,     3,
       5,     3,     4,     1,     1,     4,     1,     1,     3,     3,
       3,     3,     3,     5,     5,     5,     5,     5,     1,     3,
       3,     3,     3,     3,     5,     5,     5,     5,     5,     5,
       2,     3,     1,     1,     7,     8,     8,     7,     4,     7,
      11,     4,     4,     4,     4,     1,     3,     0,     3,     2,
       3
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
#line 44 "S++.y"
                                                                      {printf("The program is correct!\n");}
#line 1338 "S++.tab.c"
    break;

  case 3: /* types: INT_TYPE  */
#line 47 "S++.y"
                {current_type=(yyvsp[0].string);}
#line 1344 "S++.tab.c"
    break;

  case 4: /* types: FLOAT_TYPE  */
#line 48 "S++.y"
                  {current_type=(yyvsp[0].string);}
#line 1350 "S++.tab.c"
    break;

  case 5: /* types: CHAR_TYPE  */
#line 49 "S++.y"
                  {current_type=(yyvsp[0].string);}
#line 1356 "S++.tab.c"
    break;

  case 6: /* types: STRING_TYPE  */
#line 50 "S++.y"
                   {current_type=(yyvsp[0].string);}
#line 1362 "S++.tab.c"
    break;

  case 7: /* types: BOOL_TYPE  */
#line 51 "S++.y"
                  {current_type=(yyvsp[0].string);}
#line 1368 "S++.tab.c"
    break;

  case 12: /* user_data_types: CLASS STRING '{' list_class '}'  */
#line 61 "S++.y"
                                                 {current_def=string((yyvsp[-3].string));}
#line 1374 "S++.tab.c"
    break;

  case 17: /* global_var_section: global_var  */
#line 72 "S++.y"
                               {current_def="global";}
#line 1380 "S++.tab.c"
    break;

  case 25: /* functions: DEF_FUNC STRING '(' list_param ')' '-' '>' types '{' list_statements '}'  */
#line 88 "S++.y"
                                                                                   {current_def=string((yyvsp[-9].string));}
#line 1386 "S++.tab.c"
    break;

  case 26: /* functions: DEF_FUNC STRING '(' list_param ')' '{' list_statements '}'  */
#line 89 "S++.y"
                                                                      {current_def=string((yyvsp[-6].string));}
#line 1392 "S++.tab.c"
    break;

  case 32: /* main: MAIN_START list_statements MAIN_STOP  */
#line 103 "S++.y"
                                           {current_def="main";}
#line 1398 "S++.tab.c"
    break;

  case 49: /* decl: types ID  */
#line 127 "S++.y"
               { table.addVar(current_type, (yyvsp[0].string), "", current_def);  }
#line 1404 "S++.tab.c"
    break;

  case 51: /* decl: types assign_statements  */
#line 129 "S++.y"
                              {table.addVar(current_type, current_id, current_value, current_def);}
#line 1410 "S++.tab.c"
    break;

  case 52: /* decl: CONST types assign_statements  */
#line 130 "S++.y"
                                    {table.addVar(string((yyvsp[-2].string))+" "+current_type, current_id, current_value, current_def);}
#line 1416 "S++.tab.c"
    break;

  case 55: /* left_value: ID  */
#line 139 "S++.y"
               {current_id=(yyvsp[0].string);}
#line 1422 "S++.tab.c"
    break;

  case 58: /* value: NR  */
#line 144 "S++.y"
            {current_value=(yyvsp[0].string);}
#line 1428 "S++.tab.c"
    break;

  case 59: /* value: NR '.' NR  */
#line 145 "S++.y"
                 {current_value=string((yyvsp[-2].string))+"."+string((yyvsp[0].string));}
#line 1434 "S++.tab.c"
    break;

  case 60: /* value: '<' '<' STRING '>' '>'  */
#line 146 "S++.y"
                            {current_value="<<"+string((yyvsp[-2].string))+">>";}
#line 1440 "S++.tab.c"
    break;

  case 62: /* value: ID '[' NR ']'  */
#line 148 "S++.y"
                    {current_value=string((yyvsp[-3].string))+"["+string((yyvsp[-1].string))+"]";}
#line 1446 "S++.tab.c"
    break;

  case 63: /* value: ID  */
#line 149 "S++.y"
         {current_value=(yyvsp[0].string);}
#line 1452 "S++.tab.c"
    break;

  case 65: /* value: ID '-' '>' ID  */
#line 151 "S++.y"
                   {current_value=string((yyvsp[-3].string))+"->"+string((yyvsp[0].string));}
#line 1458 "S++.tab.c"
    break;

  case 92: /* boolean_expression: BOOL_TRUE  */
#line 184 "S++.y"
                             {current_value=(yyvsp[0].string);}
#line 1464 "S++.tab.c"
    break;

  case 93: /* boolean_expression: BOOL_FALSE  */
#line 185 "S++.y"
                              {current_value=(yyvsp[0].string);}
#line 1470 "S++.tab.c"
    break;


#line 1474 "S++.tab.c"

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

#line 221 "S++.y"

void yyerror(const char * s){
    printf("error: %s at line:%d\n",s,yylineno);
}

int main(int argc, char** argv){
    yyin=fopen(argv[1],"r");
    yyparse();
    table.printTable();
} 

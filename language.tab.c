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
#line 1 "language.y"

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

#line 86 "language.tab.c"

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

#include "language.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DBGIN = 3,                      /* DBGIN  */
  YYSYMBOL_DEND = 4,                       /* DEND  */
  YYSYMBOL_GBGIN = 5,                      /* GBGIN  */
  YYSYMBOL_GEND = 6,                       /* GEND  */
  YYSYMBOL_GFUNCBGIN = 7,                  /* GFUNCBGIN  */
  YYSYMBOL_GFUNCEND = 8,                   /* GFUNCEND  */
  YYSYMBOL_BGIN = 9,                       /* BGIN  */
  YYSYMBOL_END = 10,                       /* END  */
  YYSYMBOL_ASSIGN = 11,                    /* ASSIGN  */
  YYSYMBOL_NR = 12,                        /* NR  */
  YYSYMBOL_CLASS = 13,                     /* CLASS  */
  YYSYMBOL_BEGINCLASS = 14,                /* BEGINCLASS  */
  YYSYMBOL_ENDCLASS = 15,                  /* ENDCLASS  */
  YYSYMBOL_CONST = 16,                     /* CONST  */
  YYSYMBOL_IF = 17,                        /* IF  */
  YYSYMBOL_ELSE = 18,                      /* ELSE  */
  YYSYMBOL_FOR = 19,                       /* FOR  */
  YYSYMBOL_WHILE = 20,                     /* WHILE  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_NOT = 23,                       /* NOT  */
  YYSYMBOL_EQUAL = 24,                     /* EQUAL  */
  YYSYMBOL_GRE = 25,                       /* GRE  */
  YYSYMBOL_LOW = 26,                       /* LOW  */
  YYSYMBOL_EGRE = 27,                      /* EGRE  */
  YYSYMBOL_ELOW = 28,                      /* ELOW  */
  YYSYMBOL_MUL = 29,                       /* MUL  */
  YYSYMBOL_DIV = 30,                       /* DIV  */
  YYSYMBOL_PLUS = 31,                      /* PLUS  */
  YYSYMBOL_MINUS = 32,                     /* MINUS  */
  YYSYMBOL_ID = 33,                        /* ID  */
  YYSYMBOL_TYPE = 34,                      /* TYPE  */
  YYSYMBOL_35_ = 35,                       /* '('  */
  YYSYMBOL_36_ = 36,                       /* ')'  */
  YYSYMBOL_37_ = 37,                       /* '{'  */
  YYSYMBOL_38_ = 38,                       /* '}'  */
  YYSYMBOL_39_ = 39,                       /* ';'  */
  YYSYMBOL_40_ = 40,                       /* ','  */
  YYSYMBOL_41_ = 41,                       /* '['  */
  YYSYMBOL_42_ = 42,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_progr = 44,                     /* progr  */
  YYSYMBOL_sections = 45,                  /* sections  */
  YYSYMBOL_user_data_types = 46,           /* user_data_types  */
  YYSYMBOL_global_variables = 47,          /* global_variables  */
  YYSYMBOL_global_functions = 48,          /* global_functions  */
  YYSYMBOL_user_declarations = 49,         /* user_declarations  */
  YYSYMBOL_user_decl = 50,                 /* user_decl  */
  YYSYMBOL_51_1 = 51,                      /* $@1  */
  YYSYMBOL_members = 52,                   /* members  */
  YYSYMBOL_methods = 53,                   /* methods  */
  YYSYMBOL_methods_decl = 54,              /* methods_decl  */
  YYSYMBOL_55_2 = 55,                      /* $@2  */
  YYSYMBOL_56_3 = 56,                      /* $@3  */
  YYSYMBOL_list_method_param = 57,         /* list_method_param  */
  YYSYMBOL_method_param = 58,              /* method_param  */
  YYSYMBOL_method_block = 59,              /* method_block  */
  YYSYMBOL_method_instructions = 60,       /* method_instructions  */
  YYSYMBOL_declarations = 61,              /* declarations  */
  YYSYMBOL_decl = 62,                      /* decl  */
  YYSYMBOL_func_declarations = 63,         /* func_declarations  */
  YYSYMBOL_func_decl = 64,                 /* func_decl  */
  YYSYMBOL_65_4 = 65,                      /* $@4  */
  YYSYMBOL_66_5 = 66,                      /* $@5  */
  YYSYMBOL_list_param = 67,                /* list_param  */
  YYSYMBOL_param = 68,                     /* param  */
  YYSYMBOL_func_block = 69,                /* func_block  */
  YYSYMBOL_instructions = 70,              /* instructions  */
  YYSYMBOL_entry_point = 71,               /* entry_point  */
  YYSYMBOL_list = 72,                      /* list  */
  YYSYMBOL_statement = 73,                 /* statement  */
  YYSYMBOL_condition = 74,                 /* condition  */
  YYSYMBOL_call_list = 75                  /* call_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 19 "language.y"

     // Declare a global variable to store the ID from user_decl
     char* sharedID = NULL;
     char* methodSharedId = NULL;

#line 201 "language.tab.c"


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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   223

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  217

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


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
      35,    36,     2,     2,    40,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    44,    47,    48,    49,    50,    51,    52,
      53,    57,    58,    59,    64,    65,    68,    72,    72,    89,
      93,   102,   103,   105,   105,   108,   108,   110,   113,   114,
     117,   120,   121,   124,   125,   126,   127,   134,   135,   138,
     139,   143,   149,   150,   152,   152,   152,   160,   160,   167,
     174,   175,   178,   181,   182,   185,   186,   187,   188,   189,
     190,   191,   192,   196,   200,   201,   204,   205,   206,   207,
     208,   209,   210,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   226,   227,   228,   229
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
  "\"end of file\"", "error", "\"invalid token\"", "DBGIN", "DEND",
  "GBGIN", "GEND", "GFUNCBGIN", "GFUNCEND", "BGIN", "END", "ASSIGN", "NR",
  "CLASS", "BEGINCLASS", "ENDCLASS", "CONST", "IF", "ELSE", "FOR", "WHILE",
  "AND", "OR", "NOT", "EQUAL", "GRE", "LOW", "EGRE", "ELOW", "MUL", "DIV",
  "PLUS", "MINUS", "ID", "TYPE", "'('", "')'", "'{'", "'}'", "';'", "','",
  "'['", "']'", "$accept", "progr", "sections", "user_data_types",
  "global_variables", "global_functions", "user_declarations", "user_decl",
  "$@1", "members", "methods", "methods_decl", "$@2", "$@3",
  "list_method_param", "method_param", "method_block",
  "method_instructions", "declarations", "decl", "func_declarations",
  "func_decl", "$@4", "$@5", "list_param", "param", "func_block",
  "instructions", "entry_point", "list", "statement", "condition",
  "call_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-175)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     122,    -6,    72,    38,    79,    89,    81,    39,    85,  -175,
    -175,    64,     5,    63,    69,    78,    -2,    66,    93,    -3,
      95,    83,    98,   116,    -5,     6,   115,  -175,  -175,    85,
    -175,  -175,   139,  -175,   117,  -175,   124,   118,  -175,   119,
    -175,   120,  -175,   121,  -175,    15,    79,    15,    -4,    16,
    -175,   123,  -175,  -175,   146,  -175,   152,   153,  -175,   128,
    -175,  -175,    15,   114,    15,    88,   127,    92,  -175,  -175,
    -175,  -175,   -16,  -175,  -175,   133,   156,   129,   155,   136,
    -175,   140,   141,   142,   143,   144,    94,    15,    15,    79,
      15,    79,  -175,    21,   145,   138,  -175,  -175,   164,   147,
      96,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
     163,    56,  -175,  -175,  -175,   148,   149,    49,   150,  -175,
      22,  -175,   169,   136,    79,    79,  -175,   108,  -175,   151,
     154,  -175,    -1,   157,    42,   158,    74,  -175,  -175,   159,
     160,  -175,   165,  -175,    40,    16,  -175,  -175,   162,  -175,
     167,   168,   170,     0,   161,    51,   171,  -175,   172,   173,
    -175,  -175,   109,  -175,    15,    74,    15,    41,    16,  -175,
    -175,   174,  -175,   176,   166,   110,  -175,  -175,    99,   175,
     101,  -175,  -175,   112,  -175,  -175,    22,  -175,   178,   173,
     184,    15,   190,  -175,    46,    22,  -175,    74,    65,    74,
    -175,    48,   191,    74,   193,  -175,   194,   179,  -175,   195,
     197,    74,    74,   201,   202,  -175,  -175
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    44,     0,     0,     0,     4,     8,    10,
       2,     0,     0,     0,     0,     0,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     1,     3,     5,
       6,     9,     0,    11,     0,    14,     0,    40,    12,     0,
      37,     0,    13,     0,    42,     0,     0,     0,     0,     0,
      63,     0,    64,     7,    17,    15,     0,     0,    38,    45,
      43,    74,     0,    73,     0,     0,     0,     0,    67,    66,
      84,    85,     0,    65,    16,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,     0,     0,     0,    41,    39,    47,     0,
       0,    50,    79,    80,    81,    82,    83,    78,    75,    76,
      69,     0,    72,    86,    87,     0,     0,     0,     0,    49,
       0,    52,     0,     0,     0,     0,    19,     0,    18,     0,
       0,    21,     0,     0,     0,     0,     0,    51,    70,     0,
      23,    20,     0,    22,     0,     0,    36,    48,     0,    31,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
      34,    33,     0,    32,     0,     0,     0,     0,     0,    58,
      46,     0,    53,    25,     0,     0,    28,    35,     0,     0,
       0,    56,    55,     0,    54,    27,     0,    30,     0,     0,
       0,     0,     0,    57,     0,     0,    29,     0,     0,     0,
      26,     0,     0,     0,     0,    24,    59,     0,    62,     0,
       0,     0,     0,     0,     0,    60,    61
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,  -175,  -175,   181,    29,  -175,   206,  -175,  -175,
    -175,    68,  -175,  -175,  -175,    30,  -174,  -132,  -175,   204,
    -175,   203,  -175,  -175,  -175,   100,  -175,  -152,   215,  -175,
     -24,   -47,  -126
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,     8,     9,    12,    13,    75,    95,
     117,   118,   159,   186,   175,   176,   134,   135,    16,    17,
      19,    20,    79,   120,   100,   101,   155,   156,    10,    25,
      26,    65,    72
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      67,    51,   148,   171,    38,    42,    48,    11,    68,    33,
     144,   167,   194,   179,    14,    80,    50,    86,    11,   162,
      92,   201,    66,    21,    93,    22,    23,    61,    70,    69,
      49,    18,    15,   113,   145,   168,    30,    31,    62,    24,
     108,   109,   183,   111,     2,   202,     3,   204,    63,    71,
      64,   207,   160,   181,   114,   132,   133,   147,    53,   213,
     214,   200,   148,   205,   128,   110,   170,   112,   150,   148,
     151,   152,    18,   161,   182,   132,   133,    87,    88,   132,
     133,   132,   133,   129,   153,   154,    87,    88,    14,    27,
       4,   150,     3,   151,   152,   125,    21,    32,    22,    23,
     138,   139,    35,    36,   203,    40,    15,   153,   154,    87,
      88,    37,    24,    87,    88,    87,    88,   178,    45,   180,
      87,    88,    87,    88,    89,     1,    41,     2,    91,     3,
     107,     4,   122,    46,    44,   190,   123,   192,    81,    82,
      83,    84,    85,   140,   198,   177,   188,   141,   193,    93,
     189,    47,    93,    54,    52,    59,    55,    56,    58,    57,
      60,    74,    73,    76,    78,    77,    90,    94,    96,    98,
      99,    97,   116,   102,   103,   104,   105,   106,   115,   119,
     121,   124,   127,   136,   142,   130,   173,   126,    29,   131,
     146,   185,   195,   143,   169,   157,   158,   149,   197,   187,
     140,   163,   164,   165,   199,   166,   206,   174,   208,   211,
     172,   212,   209,   184,   191,   210,   215,   216,    34,   196,
      39,    28,    43,   137
};

static const yytype_uint8 yycheck[] =
{
      47,    25,   134,   155,     6,     8,    11,    13,    12,     4,
      11,    11,   186,   165,    16,    62,    10,    64,    13,   145,
      36,   195,    46,    17,    40,    19,    20,    12,    12,    33,
      35,    34,    34,    12,    35,    35,     7,     8,    23,    33,
      87,    88,   168,    90,     5,   197,     7,   199,    33,    33,
      35,   203,    12,    12,    33,    33,    34,    15,    29,   211,
     212,    15,   194,    15,    15,    89,    15,    91,    17,   201,
      19,    20,    34,    33,    33,    33,    34,    21,    22,    33,
      34,    33,    34,    34,    33,    34,    21,    22,    16,     0,
       9,    17,     7,    19,    20,    39,    17,    33,    19,    20,
     124,   125,    39,    34,    39,    39,    34,    33,    34,    21,
      22,    33,    33,    21,    22,    21,    22,   164,    35,   166,
      21,    22,    21,    22,    36,     3,    33,     5,    36,     7,
      36,     9,    36,    35,    39,    36,    40,    36,    24,    25,
      26,    27,    28,    35,   191,    36,    36,    39,    36,    40,
      40,    35,    40,    14,    39,    35,    39,    33,    39,    41,
      39,    15,    39,    11,    36,    12,    39,    34,    12,    14,
      34,    42,    34,    33,    33,    33,    33,    33,    33,    15,
      33,    18,    33,    14,    33,   117,    14,    39,     7,    39,
      33,    15,    14,    39,    33,    36,    36,    39,    14,    33,
      35,    39,    35,    35,    14,    35,    15,    34,    15,    14,
      39,    14,    18,    39,    39,    36,    15,    15,    12,   189,
      16,     6,    19,   123
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     7,     9,    44,    45,    46,    47,    48,
      71,    13,    49,    50,    16,    34,    61,    62,    34,    63,
      64,    17,    19,    20,    33,    72,    73,     0,    71,    47,
      48,    48,    33,     4,    50,    39,    34,    33,     6,    62,
      39,    33,     8,    64,    39,    35,    35,    35,    11,    35,
      10,    73,    39,    48,    14,    39,    33,    41,    39,    35,
      39,    12,    23,    33,    35,    74,    73,    74,    12,    33,
      12,    33,    75,    39,    15,    51,    11,    12,    36,    65,
      74,    24,    25,    26,    27,    28,    74,    21,    22,    36,
      39,    36,    36,    40,    34,    52,    12,    42,    14,    34,
      67,    68,    33,    33,    33,    33,    33,    36,    74,    74,
      73,    74,    73,    12,    33,    33,    34,    53,    54,    15,
      66,    33,    36,    40,    18,    39,    39,    33,    15,    34,
      54,    39,    33,    34,    59,    60,    14,    68,    73,    73,
      35,    39,    33,    39,    11,    35,    33,    15,    60,    39,
      17,    19,    20,    33,    34,    69,    70,    36,    36,    55,
      12,    33,    75,    39,    35,    35,    35,    11,    35,    33,
      15,    70,    39,    14,    34,    57,    58,    36,    74,    70,
      74,    12,    33,    75,    39,    15,    56,    33,    36,    40,
      36,    39,    36,    36,    59,    14,    58,    14,    74,    14,
      15,    59,    70,    39,    70,    15,    15,    70,    15,    18,
      36,    14,    14,    70,    70,    15,    15
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    45,    45,    45,    45,
      45,    46,    47,    48,    49,    49,    50,    51,    50,    52,
      52,    53,    53,    55,    54,    56,    54,    54,    57,    57,
      58,    59,    59,    60,    60,    60,    60,    61,    61,    62,
      62,    62,    63,    63,    64,    65,    64,    66,    64,    64,
      67,    67,    68,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    71,    72,    72,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    75,    75,    75,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     3,     1,     2,
       1,     3,     3,     3,     2,     3,     4,     0,     7,     3,
       4,     2,     3,     0,     9,     0,     8,     6,     1,     3,
       2,     2,     3,     3,     3,     4,     2,     2,     3,     5,
       2,     5,     2,     3,     0,     0,     9,     0,     8,     6,
       1,     3,     2,     2,     3,     3,     3,     4,     2,     7,
      11,    11,     7,     3,     2,     3,     3,     3,     4,     5,
       7,     8,     5,     1,     1,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     3
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
  case 2: /* progr: entry_point  */
#line 43 "language.y"
                     {printf("The programme is correct!\n");}
#line 1293 "language.tab.c"
    break;

  case 3: /* progr: sections entry_point  */
#line 44 "language.y"
                              {printf("The programme is correct!\n");}
#line 1299 "language.tab.c"
    break;

  case 16: /* user_decl: CLASS ID BEGINCLASS ENDCLASS  */
#line 68 "language.y"
                                         {if (!clslist.existClass((yyvsp[-2].string))) {
                                                  clslist.addClass((yyvsp[-2].string));
                                             }
                                        }
#line 1308 "language.tab.c"
    break;

  case 17: /* $@1: %empty  */
#line 72 "language.y"
                                {sharedID = strdup((yyvsp[-1].string)); 
                                 if (!clslist.existClass((yyvsp[-1].string))) {
                                   clslist.addClass((yyvsp[-1].string));
                              };
                              }
#line 1318 "language.tab.c"
    break;

  case 18: /* user_decl: CLASS ID BEGINCLASS $@1 members methods ENDCLASS  */
#line 78 "language.y"
                              {  
                                   if (!clslist.existClass((yyvsp[-5].string))) {
                                        clslist.addClass((yyvsp[-5].string));
                                   }
                              }
#line 1328 "language.tab.c"
    break;

  case 19: /* members: TYPE ID ';'  */
#line 89 "language.y"
                      {
          char* classID = sharedID;
          clslist.addVars(classID, (yyvsp[-2].string), (yyvsp[-1].string));
        }
#line 1337 "language.tab.c"
    break;

  case 20: /* members: members TYPE ID ';'  */
#line 93 "language.y"
                              {
          char* classID = sharedID;
          clslist.addVars(classID, (yyvsp[-2].string), (yyvsp[-1].string));
        }
#line 1346 "language.tab.c"
    break;

  case 23: /* $@2: %empty  */
#line 105 "language.y"
                           {methodSharedId = strdup((yyvsp[-1].string)); clslist.addMethods(sharedID,(yyvsp[-2].string),(yyvsp[-1].string));}
#line 1352 "language.tab.c"
    break;

  case 25: /* $@3: %empty  */
#line 108 "language.y"
                                            {methodSharedId = strdup((yyvsp[-3].string)); clslist.addMethods(sharedID,(yyvsp[-4].string),(yyvsp[-3].string));}
#line 1358 "language.tab.c"
    break;

  case 27: /* methods_decl: TYPE ID '(' ')' BEGINCLASS ENDCLASS  */
#line 110 "language.y"
                                                     {clslist.addMethods(sharedID,(yyvsp[-5].string),(yyvsp[-4].string));}
#line 1364 "language.tab.c"
    break;

  case 30: /* method_param: TYPE ID  */
#line 117 "language.y"
                       {clslist.getMethods(sharedID)->addParameter(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1370 "language.tab.c"
    break;

  case 36: /* method_instructions: TYPE ID  */
#line 127 "language.y"
                   {
          clslist.getMethods(sharedID)->addVar(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1377 "language.tab.c"
    break;

  case 39: /* decl: TYPE ID '[' NR ']'  */
#line 138 "language.y"
                          { ids.addArray((yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-1].string)); }
#line 1383 "language.tab.c"
    break;

  case 40: /* decl: TYPE ID  */
#line 139 "language.y"
                    { if(!ids.existsVar((yyvsp[0].string))) {
                          ids.addVar((yyvsp[-1].string),(yyvsp[0].string));
                     }
                    }
#line 1392 "language.tab.c"
    break;

  case 41: /* decl: CONST TYPE ID ASSIGN NR  */
#line 143 "language.y"
                                    {ids.addConst((yyvsp[-3].string), (yyvsp[-2].string));}
#line 1398 "language.tab.c"
    break;

  case 45: /* $@4: %empty  */
#line 152 "language.y"
                         {
                         methodSharedId = strdup((yyvsp[-1].string));
                         if(!mthlist.existMethod((yyvsp[-1].string)))
                         {
                              mthlist.addMethod((yyvsp[-2].string),(yyvsp[-1].string));    
                         }
          }
#line 1410 "language.tab.c"
    break;

  case 47: /* $@5: %empty  */
#line 160 "language.y"
                                        {methodSharedId = strdup((yyvsp[-3].string));
                         if(!mthlist.existMethod((yyvsp[-3].string)))
                         {
                              mthlist.addMethod((yyvsp[-4].string),(yyvsp[-3].string));    
                         }
                         }
#line 1421 "language.tab.c"
    break;

  case 49: /* func_decl: TYPE ID '(' ')' BEGINCLASS ENDCLASS  */
#line 167 "language.y"
                                                 {methodSharedId = strdup((yyvsp[-4].string));
                         if(!mthlist.existMethod((yyvsp[-4].string)))
                         {
                              mthlist.addMethod((yyvsp[-5].string),(yyvsp[-4].string));    
                         }}
#line 1431 "language.tab.c"
    break;

  case 52: /* param: TYPE ID  */
#line 178 "language.y"
                {mthlist.addParameter(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1437 "language.tab.c"
    break;

  case 58: /* instructions: TYPE ID  */
#line 188 "language.y"
                   {mthlist.addVar(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1443 "language.tab.c"
    break;

  case 59: /* instructions: IF '(' condition ')' BEGINCLASS instructions ENDCLASS  */
#line 189 "language.y"
                                                                  {  }
#line 1449 "language.tab.c"
    break;

  case 60: /* instructions: IF '(' condition ')' BEGINCLASS instructions ENDCLASS ELSE BEGINCLASS instructions ENDCLASS  */
#line 190 "language.y"
                                                                                                       {  }
#line 1455 "language.tab.c"
    break;

  case 61: /* instructions: FOR '(' instructions ';' condition ';' instructions ')' BEGINCLASS instructions ENDCLASS  */
#line 191 "language.y"
                                                                                                    {  }
#line 1461 "language.tab.c"
    break;

  case 62: /* instructions: WHILE '(' condition ')' BEGINCLASS instructions ENDCLASS  */
#line 192 "language.y"
                                                                    {  }
#line 1467 "language.tab.c"
    break;

  case 69: /* statement: IF '(' condition ')' statement  */
#line 207 "language.y"
                                          {  }
#line 1473 "language.tab.c"
    break;

  case 70: /* statement: IF '(' condition ')' statement ELSE statement  */
#line 208 "language.y"
                                                         {  }
#line 1479 "language.tab.c"
    break;

  case 71: /* statement: FOR '(' statement ';' condition ';' statement ')'  */
#line 209 "language.y"
                                                             {   }
#line 1485 "language.tab.c"
    break;

  case 72: /* statement: WHILE '(' condition ')' statement  */
#line 210 "language.y"
                                             {     }
#line 1491 "language.tab.c"
    break;


#line 1495 "language.tab.c"

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

#line 231 "language.y"

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

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
#include <stdlib.h>
#include "IdList.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class IdList ids;
class ClassList clslist;
class MethodList mthlist;

#line 87 "language.tab.c"

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
  YYSYMBOL_PINC = 33,                      /* PINC  */
  YYSYMBOL_MINC = 34,                      /* MINC  */
  YYSYMBOL_TYPEOF = 35,                    /* TYPEOF  */
  YYSYMBOL_ID = 36,                        /* ID  */
  YYSYMBOL_TYPE = 37,                      /* TYPE  */
  YYSYMBOL_38_ = 38,                       /* '('  */
  YYSYMBOL_39_ = 39,                       /* ')'  */
  YYSYMBOL_40_ = 40,                       /* '{'  */
  YYSYMBOL_41_ = 41,                       /* '}'  */
  YYSYMBOL_42_ = 42,                       /* ';'  */
  YYSYMBOL_43_ = 43,                       /* ','  */
  YYSYMBOL_44_ = 44,                       /* '['  */
  YYSYMBOL_45_ = 45,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_progr = 47,                     /* progr  */
  YYSYMBOL_sections = 48,                  /* sections  */
  YYSYMBOL_if_statement = 49,              /* if_statement  */
  YYSYMBOL_if_else_statement = 50,         /* if_else_statement  */
  YYSYMBOL_while_statement = 51,           /* while_statement  */
  YYSYMBOL_for_statement = 52,             /* for_statement  */
  YYSYMBOL_for_initializer = 53,           /* for_initializer  */
  YYSYMBOL_for_update = 54,                /* for_update  */
  YYSYMBOL_condition = 55,                 /* condition  */
  YYSYMBOL_block = 56,                     /* block  */
  YYSYMBOL_statements = 57,                /* statements  */
  YYSYMBOL_user_data_types = 58,           /* user_data_types  */
  YYSYMBOL_global_variables = 59,          /* global_variables  */
  YYSYMBOL_global_functions = 60,          /* global_functions  */
  YYSYMBOL_user_declarations = 61,         /* user_declarations  */
  YYSYMBOL_user_decl = 62,                 /* user_decl  */
  YYSYMBOL_63_1 = 63,                      /* $@1  */
  YYSYMBOL_class_lines = 64,               /* class_lines  */
  YYSYMBOL_members = 65,                   /* members  */
  YYSYMBOL_methods = 66,                   /* methods  */
  YYSYMBOL_methods_decl = 67,              /* methods_decl  */
  YYSYMBOL_68_2 = 68,                      /* $@2  */
  YYSYMBOL_69_3 = 69,                      /* $@3  */
  YYSYMBOL_m_block = 70,                   /* m_block  */
  YYSYMBOL_content = 71,                   /* content  */
  YYSYMBOL_without_content = 72,           /* without_content  */
  YYSYMBOL_list_method_param = 73,         /* list_method_param  */
  YYSYMBOL_method_param = 74,              /* method_param  */
  YYSYMBOL_method_block = 75,              /* method_block  */
  YYSYMBOL_method_instructions = 76,       /* method_instructions  */
  YYSYMBOL_declarations = 77,              /* declarations  */
  YYSYMBOL_decl = 78,                      /* decl  */
  YYSYMBOL_func_declarations = 79,         /* func_declarations  */
  YYSYMBOL_func_decl = 80,                 /* func_decl  */
  YYSYMBOL_81_4 = 81,                      /* $@4  */
  YYSYMBOL_82_5 = 82,                      /* $@5  */
  YYSYMBOL_f_block = 83,                   /* f_block  */
  YYSYMBOL_f_content = 84,                 /* f_content  */
  YYSYMBOL_f_without_content = 85,         /* f_without_content  */
  YYSYMBOL_list_param = 86,                /* list_param  */
  YYSYMBOL_param = 87,                     /* param  */
  YYSYMBOL_func_block = 88,                /* func_block  */
  YYSYMBOL_instructions = 89,              /* instructions  */
  YYSYMBOL_entry_point = 90,               /* entry_point  */
  YYSYMBOL_list = 91,                      /* list  */
  YYSYMBOL_statement = 92,                 /* statement  */
  YYSYMBOL_var_oper = 93,                  /* var_oper  */
  YYSYMBOL_func_oper = 94,                 /* func_oper  */
  YYSYMBOL_call_list = 95                  /* call_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 20 "language.y"

     // Declare a global variable to store the ID from user_decl
     char* sharedID = NULL;
     char* methodSharedId = NULL;

#line 222 "language.tab.c"


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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  232

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


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
      38,    39,     2,     2,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    42,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    46,    46,    47,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    63,    65,    67,    69,    71,
      72,    73,    76,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   103,   104,   107,   108,   111,
     112,   113,   118,   119,   122,   130,   130,   147,   148,   149,
     154,   158,   167,   168,   170,   170,   172,   172,   176,   177,
     179,   181,   183,   184,   187,   190,   191,   194,   195,   196,
     197,   204,   205,   208,   209,   217,   228,   229,   231,   231,
     231,   243,   243,   255,   256,   258,   259,   261,   262,   265,
     268,   269,   272,   273,   274,   275,   278,   279,   283,   284,
     287,   290,   296,   305,   306,   307,   308,   311,   314,   317,
     319,   320,   321,   322
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
  "PLUS", "MINUS", "PINC", "MINC", "TYPEOF", "ID", "TYPE", "'('", "')'",
  "'{'", "'}'", "';'", "','", "'['", "']'", "$accept", "progr", "sections",
  "if_statement", "if_else_statement", "while_statement", "for_statement",
  "for_initializer", "for_update", "condition", "block", "statements",
  "user_data_types", "global_variables", "global_functions",
  "user_declarations", "user_decl", "$@1", "class_lines", "members",
  "methods", "methods_decl", "$@2", "$@3", "m_block", "content",
  "without_content", "list_method_param", "method_param", "method_block",
  "method_instructions", "declarations", "decl", "func_declarations",
  "func_decl", "$@4", "$@5", "f_block", "f_content", "f_without_content",
  "list_param", "param", "func_block", "instructions", "entry_point",
  "list", "statement", "var_oper", "func_oper", "call_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-187)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     124,    -6,    63,    27,     6,   -23,    43,    70,    65,   113,
    -187,  -187,  -187,  -187,   125,   116,  -187,  -187,    34,    62,
      97,   103,   106,    -2,   108,   115,    -3,   111,  -187,   114,
       0,  -187,  -187,  -187,  -187,    10,   112,    -4,    76,    -4,
    -187,  -187,   116,  -187,  -187,   141,  -187,   117,  -187,   120,
     118,  -187,   119,  -187,   122,  -187,   123,  -187,   127,     7,
      12,  -187,  -187,  -187,   126,  -187,   110,   121,   128,   146,
     129,    63,   130,  -187,   143,  -187,   153,   154,  -187,   131,
    -187,   133,  -187,  -187,  -187,  -187,   -22,  -187,    16,    19,
      21,    32,    35,    37,    38,    42,    44,    46,   159,    47,
      -4,   159,  -187,   137,   163,   132,  -187,   139,  -187,  -187,
      48,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,    84,   160,  -187,  -187,   138,  -187,   145,   164,   147,
     148,   140,  -187,  -187,   169,   150,   -21,  -187,  -187,  -187,
    -187,    90,  -187,   159,   151,    64,  -187,   152,   148,   155,
     156,  -187,    52,  -187,  -187,  -187,  -187,   169,   139,  -187,
    -187,  -187,   157,   158,   161,  -187,    73,   165,  -187,  -187,
       1,   166,    54,   162,  -187,  -187,  -187,   159,  -187,   168,
    -187,    49,    12,  -187,  -187,   167,  -187,  -187,   175,   170,
      75,  -187,  -187,  -187,    78,  -187,    57,  -187,  -187,  -187,
    -187,   175,   168,  -187,  -187,     2,   171,    61,   172,  -187,
    -187,    50,    12,  -187,  -187,   173,  -187,  -187,  -187,    85,
    -187,  -187
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    88,     0,     0,     0,     0,     0,     0,
      11,    12,    13,    14,     4,     8,    10,     2,     0,     0,
       0,     0,     0,     0,     0,     0,    88,     0,   107,     0,
       0,   113,   114,   115,   116,     0,     0,     0,     0,     0,
       1,     3,     5,     6,     9,     0,    49,     0,    52,     0,
      84,    50,     0,    81,     0,    51,     0,    86,     0,     0,
       0,   110,   111,   106,     0,   108,    23,    24,     0,     0,
       0,    19,     0,     7,    55,    53,     0,     0,    82,    89,
      87,     0,   118,   117,   120,   121,     0,   109,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,     0,     0,     0,    91,     0,   112,   119,
       0,    44,    42,    28,    26,    32,    30,    36,    34,    40,
      38,    41,    43,    25,    27,    29,    31,    33,    35,    37,
      39,     0,    15,    21,    20,     0,    17,     0,     0,    57,
      58,     0,    85,    83,     0,     0,     0,    97,   122,   123,
      45,     0,    47,     0,     0,     0,    56,     0,    59,     0,
       0,    62,     0,    92,    93,    94,    99,     0,     0,    46,
      48,    16,     0,     0,    64,    60,     0,     0,    63,    96,
       0,     0,     0,     0,    90,    98,    22,     0,    66,     0,
      61,     0,     0,   105,    95,     0,   100,    18,     0,     0,
       0,    72,   103,   102,     0,   101,     0,    67,    68,    69,
      74,     0,     0,   104,    71,     0,     0,     0,     0,    65,
      73,     0,     0,    80,    70,     0,    75,    78,    77,     0,
      76,    79
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -187,  -187,  -187,   192,   193,   194,   195,  -187,  -187,   -37,
    -100,  -187,  -187,   182,    -5,  -187,   180,  -187,  -187,  -187,
      69,   -63,  -187,  -187,   -10,  -187,  -187,  -187,    -1,  -187,
      -7,   174,   -20,  -187,   187,  -187,  -187,    51,  -187,  -187,
    -187,    53,  -187,    40,   207,  -187,   -35,  -187,  -187,  -186
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     8,     9,    31,    32,    33,    34,    70,   173,    68,
     132,   151,    14,    15,    16,    19,    20,   103,   138,   139,
     140,   141,   189,   198,   207,   208,   209,   200,   201,   217,
     218,    23,    24,    26,    27,   107,   144,   163,   164,   165,
     146,   147,   182,   183,    17,    35,    36,    61,    62,    86
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      64,   136,    72,    52,    51,    55,   204,    18,    66,    43,
      44,    59,   191,   221,    21,    37,    28,   109,   167,    82,
      63,   110,   168,     5,    84,     6,     7,     5,   111,     6,
       7,   113,    67,   115,    25,    22,   229,    73,    60,   192,
     222,    29,    30,    83,   117,    29,    30,   119,    85,   121,
     123,    52,   112,   171,   125,   114,   127,   116,   129,   133,
     148,   202,   227,   135,    25,    40,    46,   179,   118,   194,
      45,   120,   214,   122,   124,    18,   224,   160,   126,    21,
     128,    38,   130,   134,   149,   203,   228,   197,   180,   181,
     180,   181,    21,   215,   216,   160,   152,   215,   216,   150,
      22,     5,   174,     6,     7,   169,   175,     5,    39,     6,
       7,   174,    69,    22,   211,   190,   170,   213,   212,    29,
      30,   110,     4,     3,   231,    29,    30,     1,   110,     2,
       2,     3,     3,     4,    88,    89,    90,    91,    92,    48,
      49,     5,    50,     6,     7,    93,    94,    95,    96,    97,
      53,    54,    58,    57,    65,    74,    76,    99,   102,    75,
      79,    78,    77,    81,   104,    80,   105,    98,    87,   101,
     106,   100,   108,   131,   137,   142,   145,   143,   153,   156,
     154,   155,   161,   162,   157,   159,   166,   172,   176,   206,
     186,   177,    10,    11,    12,    13,    42,   187,   178,    47,
     188,   219,   193,   174,   196,   199,   210,   223,   158,   205,
     225,   220,    71,    56,   226,   230,    41,     0,   184,     0,
       0,   185,   195
};

static const yytype_int16 yycheck[] =
{
      35,   101,    39,    23,     6,     8,   192,    13,    12,    14,
      15,    11,    11,    11,    16,    38,    10,    39,    39,    12,
      10,    43,    43,    17,    12,    19,    20,    17,    12,    19,
      20,    12,    36,    12,    37,    37,   222,    42,    38,    38,
      38,    35,    36,    36,    12,    35,    36,    12,    36,    12,
      12,    71,    36,   153,    12,    36,    12,    36,    12,    12,
      12,    12,    12,   100,    37,     0,     4,    15,    36,    15,
      36,    36,    15,    36,    36,    13,    15,   140,    36,    16,
      36,    38,    36,    36,    36,    36,    36,   187,    36,    37,
      36,    37,    16,    36,    37,   158,   131,    36,    37,    15,
      37,    17,    38,    19,    20,    15,    42,    17,    38,    19,
      20,    38,    36,    37,    39,    42,   151,    39,    43,    35,
      36,    43,     9,     7,    39,    35,    36,     3,    43,     5,
       5,     7,     7,     9,    24,    25,    26,    27,    28,    42,
      37,    17,    36,    19,    20,    24,    25,    26,    27,    28,
      42,    36,    38,    42,    42,    14,    36,    11,    15,    42,
      38,    42,    44,    36,    11,    42,    12,    39,    42,    39,
      39,    42,    39,    14,    37,    12,    37,    45,    18,    15,
      42,    36,    42,    14,    37,    37,    36,    36,    36,    14,
      33,    36,     0,     0,     0,     0,    14,    39,    42,    19,
      39,   211,    36,    38,    42,    37,    36,    36,   139,    42,
     217,   212,    38,    26,    42,    42,     9,    -1,   167,    -1,
      -1,   168,   182
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     7,     9,    17,    19,    20,    47,    48,
      49,    50,    51,    52,    58,    59,    60,    90,    13,    61,
      62,    16,    37,    77,    78,    37,    79,    80,    10,    35,
      36,    49,    50,    51,    52,    91,    92,    38,    38,    38,
       0,    90,    59,    60,    60,    36,     4,    62,    42,    37,
      36,     6,    78,    42,    36,     8,    80,    42,    38,    11,
      38,    93,    94,    10,    92,    42,    12,    36,    55,    36,
      53,    77,    55,    60,    14,    42,    36,    44,    42,    38,
      42,    36,    12,    36,    12,    36,    95,    42,    24,    25,
      26,    27,    28,    24,    25,    26,    27,    28,    39,    11,
      42,    39,    15,    63,    11,    12,    39,    81,    39,    39,
      43,    12,    36,    12,    36,    12,    36,    12,    36,    12,
      36,    12,    36,    12,    36,    12,    36,    12,    36,    12,
      36,    14,    56,    12,    36,    55,    56,    37,    64,    65,
      66,    67,    12,    45,    82,    37,    86,    87,    12,    36,
      15,    57,    92,    18,    42,    36,    15,    37,    66,    37,
      67,    42,    14,    83,    84,    85,    36,    39,    43,    15,
      92,    56,    36,    54,    38,    42,    36,    36,    42,    15,
      36,    37,    88,    89,    83,    87,    33,    39,    39,    68,
      42,    11,    38,    36,    15,    89,    42,    56,    69,    37,
      73,    74,    12,    36,    95,    42,    14,    70,    71,    72,
      36,    39,    43,    39,    15,    36,    37,    75,    76,    70,
      74,    11,    38,    36,    15,    76,    42,    12,    36,    95,
      42,    39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    49,    50,    51,    52,    53,
      53,    53,    54,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    56,    57,    57,    58,
      59,    60,    61,    61,    62,    63,    62,    64,    64,    64,
      65,    65,    66,    66,    68,    67,    69,    67,    70,    70,
      71,    72,    73,    73,    74,    75,    75,    76,    76,    76,
      76,    77,    77,    78,    78,    78,    79,    79,    80,    81,
      80,    82,    80,    83,    83,    84,    85,    86,    86,    87,
      88,    88,    89,    89,    89,    89,    90,    90,    91,    91,
      92,    92,    92,    92,    92,    92,    92,    93,    93,    94,
      95,    95,    95,    95
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     3,     1,     2,
       1,     1,     1,     1,     1,     5,     7,     5,     9,     1,
       3,     3,     2,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     2,     3,
       3,     3,     2,     3,     4,     0,     6,     1,     1,     2,
       3,     4,     2,     3,     0,     7,     0,     6,     1,     1,
       3,     2,     1,     3,     2,     2,     3,     3,     3,     4,
       2,     2,     3,     5,     2,     5,     2,     3,     0,     0,
       7,     0,     6,     1,     1,     3,     2,     1,     3,     2,
       2,     3,     3,     3,     4,     2,     3,     2,     2,     3,
       2,     2,     4,     1,     1,     1,     1,     2,     2,     3,
       1,     1,     3,     3
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
#line 46 "language.y"
                     {printf("The programme is correct!\n");}
#line 1338 "language.tab.c"
    break;

  case 3: /* progr: sections entry_point  */
#line 47 "language.y"
                              {printf("The programme is correct!\n");}
#line 1344 "language.tab.c"
    break;

  case 54: /* user_decl: CLASS ID BEGINCLASS ENDCLASS  */
#line 122 "language.y"
                                         {if (!clslist.existClass((yyvsp[-2].string))) {
                                                  clslist.addClass((yyvsp[-2].string));
                                             }
                                        else 
                                        {
                                             yyerror("Redefine a class error!");
                                        }
                                        }
#line 1357 "language.tab.c"
    break;

  case 55: /* $@1: %empty  */
#line 130 "language.y"
                                {sharedID = strdup((yyvsp[-1].string)); 
                                 if (!clslist.existClass((yyvsp[-1].string))) {
                                   clslist.addClass((yyvsp[-1].string));
                              }
                              else 
                              {
                                   yyerror("Redefine a class error!");
                              }
                              }
#line 1371 "language.tab.c"
    break;

  case 56: /* user_decl: CLASS ID BEGINCLASS $@1 class_lines ENDCLASS  */
#line 140 "language.y"
                              {  
                                   if (!clslist.existClass((yyvsp[-4].string))) {
                                        clslist.addClass((yyvsp[-4].string));
                                   }
                              }
#line 1381 "language.tab.c"
    break;

  case 60: /* members: TYPE ID ';'  */
#line 154 "language.y"
                      {
          char* classID = sharedID;
          clslist.addVars(classID, (yyvsp[-2].string), (yyvsp[-1].string));
        }
#line 1390 "language.tab.c"
    break;

  case 61: /* members: members TYPE ID ';'  */
#line 158 "language.y"
                              {
          char* classID = sharedID;
          clslist.addVars(classID, (yyvsp[-2].string), (yyvsp[-1].string));
        }
#line 1399 "language.tab.c"
    break;

  case 64: /* $@2: %empty  */
#line 170 "language.y"
                           {methodSharedId = strdup((yyvsp[-1].string)); clslist.addMethods(sharedID,(yyvsp[-2].string),(yyvsp[-1].string));}
#line 1405 "language.tab.c"
    break;

  case 66: /* $@3: %empty  */
#line 172 "language.y"
                                 {methodSharedId = strdup((yyvsp[-2].string)); clslist.addMethods(sharedID,(yyvsp[-3].string),(yyvsp[-2].string));}
#line 1411 "language.tab.c"
    break;

  case 74: /* method_param: TYPE ID  */
#line 187 "language.y"
                       {clslist.getMethods(sharedID)->addParameter(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1417 "language.tab.c"
    break;

  case 80: /* method_instructions: TYPE ID  */
#line 197 "language.y"
                   {
          clslist.getMethods(sharedID)->addVar(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1424 "language.tab.c"
    break;

  case 83: /* decl: TYPE ID '[' NR ']'  */
#line 208 "language.y"
                          { ids.addArray((yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-1].string)); }
#line 1430 "language.tab.c"
    break;

  case 84: /* decl: TYPE ID  */
#line 209 "language.y"
                    { if(!ids.existsVar((yyvsp[0].string))) {
                          ids.addVar((yyvsp[-1].string),(yyvsp[0].string));
                     }
                     else 
                     {
                         yyerror("The variable already exist!");    
                     }
                    }
#line 1443 "language.tab.c"
    break;

  case 85: /* decl: CONST TYPE ID ASSIGN NR  */
#line 217 "language.y"
                                    {
               if(!ids.existsConst((yyvsp[-3].string)))
                    ids.addConst((yyvsp[-3].string), (yyvsp[-2].string));
               else 
                    yyerror("The const variable already exist!");    
               }
#line 1454 "language.tab.c"
    break;

  case 89: /* $@4: %empty  */
#line 231 "language.y"
                         {
                         methodSharedId = strdup((yyvsp[-1].string));
                         if(!mthlist.existMethod((yyvsp[-1].string)))
                         {
                              mthlist.addMethod((yyvsp[-2].string),(yyvsp[-1].string));    
                         }
                         else 
                         {
                              yyerror("Redefine a method!");
                         }
          }
#line 1470 "language.tab.c"
    break;

  case 91: /* $@5: %empty  */
#line 243 "language.y"
                             {methodSharedId = strdup((yyvsp[-2].string));
                              if(!mthlist.existMethod((yyvsp[-2].string)))
                              {
                                   mthlist.addMethod((yyvsp[-3].string),(yyvsp[-2].string));    
                              }
                              else
                              {
                                   yyerror("Redefine a method!");
                              }
                         }
#line 1485 "language.tab.c"
    break;

  case 99: /* param: TYPE ID  */
#line 265 "language.y"
                {mthlist.addParameter(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1491 "language.tab.c"
    break;

  case 105: /* instructions: TYPE ID  */
#line 275 "language.y"
                   {mthlist.addVar(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1497 "language.tab.c"
    break;

  case 110: /* statement: ID var_oper  */
#line 287 "language.y"
                       {if(!ids.existsVar((yyvsp[-1].string))) {
                         yyerror("The variable was not declared");
}}
#line 1505 "language.tab.c"
    break;

  case 111: /* statement: ID func_oper  */
#line 290 "language.y"
                        {
                         if(!mthlist.existMethod((yyvsp[-1].string)))
                         {
                              yyerror("The method was not declared");
                         }
         }
#line 1516 "language.tab.c"
    break;

  case 112: /* statement: TYPEOF '(' ID ')'  */
#line 296 "language.y"
                             {
               if(!ids.existsVar((yyvsp[-1].string)) && !ids.existsConst((yyvsp[-1].string)) && !ids.existsArray((yyvsp[-1].string))) {
                         yyerror("The variable was not declared");
               }
               else 
               {
                    ids.getType((yyvsp[-1].string));
               }
         }
#line 1530 "language.tab.c"
    break;

  case 117: /* var_oper: ASSIGN ID  */
#line 311 "language.y"
                     {if(!ids.existsVar((yyvsp[0].string))) {
                         yyerror("The variable was not declared");
}}
#line 1538 "language.tab.c"
    break;


#line 1542 "language.tab.c"

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

#line 324 "language.y"

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
}

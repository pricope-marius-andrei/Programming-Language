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
class IdList local_list;
class ClassList clslist;
class MethodList mthlist;

#line 88 "language.tab.c"

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
  YYSYMBOL_class_oper = 93,                /* class_oper  */
  YYSYMBOL_func_oper = 94,                 /* func_oper  */
  YYSYMBOL_call_list = 95                  /* call_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 21 "language.y"

     // Declare a global variable to store the ID from user_decl
     char* sharedID = NULL;
     char* methodSharedId = NULL;

#line 223 "language.tab.c"


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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   246

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  248

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
       0,    47,    47,    48,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    64,    66,    68,    70,    72,
      73,    74,    77,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   104,   105,   108,   109,   112,
     113,   114,   119,   120,   123,   131,   131,   148,   149,   150,
     155,   159,   168,   169,   171,   171,   173,   173,   177,   178,
     180,   182,   184,   185,   188,   191,   192,   195,   196,   197,
     198,   205,   206,   209,   210,   211,   219,   230,   231,   233,
     233,   233,   245,   245,   257,   258,   260,   261,   263,   264,
     267,   270,   271,   274,   275,   276,   277,   280,   281,   285,
     286,   289,   299,   304,   310,   319,   325,   331,   340,   344,
     345,   346,   347,   350,   351,   354,   356,   357,   358,   359
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
  "list", "statement", "class_oper", "func_oper", "call_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     131,    60,    95,   -25,    -2,   -15,   -14,    32,    78,   106,
    -120,  -120,  -120,  -120,   107,   115,  -120,  -120,    92,     7,
     104,   100,   111,     0,   123,   113,    -1,   124,  -120,   130,
     132,    11,   133,  -120,  -120,  -120,  -120,     9,   126,    15,
      94,    15,  -120,  -120,   115,  -120,  -120,   157,  -120,   134,
    -120,   136,    -6,  -120,   135,  -120,   137,  -120,   138,  -120,
     142,   143,    18,   162,    19,  -120,  -120,   163,  -120,   139,
    -120,   117,   128,   144,   171,   145,    95,   146,  -120,   169,
    -120,   175,   176,   177,  -120,   151,  -120,   180,   153,  -120,
    -120,   155,  -120,  -120,    36,   182,  -120,    20,    29,    30,
      31,    38,    40,    41,    46,    47,    49,   181,    50,    15,
     181,  -120,   159,   185,  -120,   154,  -120,   161,   188,  -120,
      19,  -120,    51,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,    81,   183,  -120,  -120,   160,  -120,
     167,   189,   168,   170,   164,  -120,  -120,   194,   173,    96,
    -120,  -120,   118,  -120,  -120,  -120,    89,  -120,   181,   174,
      42,  -120,   178,   170,   179,   184,  -120,    54,  -120,  -120,
    -120,  -120,   194,   161,  -120,  -120,  -120,  -120,   186,   172,
     190,  -120,    85,   187,  -120,  -120,     2,   191,    57,   192,
    -120,  -120,  -120,   181,  -120,   193,  -120,    52,    19,  -120,
    -120,   195,  -120,  -120,   198,   196,   119,  -120,  -120,  -120,
     120,  -120,    66,  -120,  -120,  -120,  -120,   198,   193,  -120,
    -120,    10,   197,    84,   199,  -120,  -120,    56,    19,  -120,
    -120,   200,  -120,  -120,  -120,   121,  -120,  -120
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
      11,    12,    13,    14,     4,     8,    10,     2,     0,     0,
       0,     0,     0,     0,     0,     0,    89,     0,   108,     0,
       0,     0,     0,   119,   120,   121,   122,     0,     0,     0,
       0,     0,     1,     3,     5,     6,     9,     0,    49,     0,
      52,     0,    85,    50,     0,    81,     0,    51,     0,    87,
       0,     0,     0,   123,     0,   118,   116,   111,   107,     0,
     109,    23,    24,     0,     0,     0,    19,     0,     7,    55,
      53,     0,     0,     0,    82,    90,    88,     0,     0,   115,
     114,     0,   126,   127,     0,     0,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,    84,     0,    92,     0,     0,   117,
       0,   125,     0,   112,    44,    42,    28,    26,    32,    30,
      36,    34,    40,    38,    41,    43,    25,    27,    29,    31,
      33,    35,    37,    39,     0,    15,    21,    20,     0,    17,
       0,     0,    57,    58,     0,    86,    83,     0,     0,     0,
      98,   113,     0,   128,   129,    45,     0,    47,     0,     0,
       0,    56,     0,    59,     0,     0,    62,     0,    93,    94,
      95,   100,     0,     0,   124,    46,    48,    16,     0,     0,
      64,    60,     0,     0,    63,    97,     0,     0,     0,     0,
      91,    99,    22,     0,    66,     0,    61,     0,     0,   106,
      96,     0,   101,    18,     0,     0,     0,    72,   104,   103,
       0,   102,     0,    67,    68,    69,    74,     0,     0,   105,
      71,     0,     0,     0,     0,    65,    73,     0,     0,    80,
      70,     0,    75,    78,    77,     0,    76,    79
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,   213,   216,   217,   218,  -120,  -120,   -38,
    -108,  -120,  -120,   206,    -5,  -120,   202,  -120,  -120,  -120,
      70,   -40,  -120,  -120,    -4,  -120,  -120,  -120,     3,  -120,
      -9,   203,   -19,  -120,   209,  -120,  -120,    58,  -120,  -120,
    -120,    45,  -120,    48,   227,  -120,   -37,  -120,  -120,  -119
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     8,     9,    33,    34,    35,    36,    75,   189,    73,
     145,   166,    14,    15,    16,    19,    20,   112,   151,   152,
     153,   154,   205,   214,   223,   224,   225,   216,   217,   233,
     234,    23,    24,    26,    27,   117,   157,   178,   179,   180,
     159,   160,   198,   199,    17,    37,    38,    65,    66,    94
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      69,   162,   149,    77,    54,    82,    53,    57,    28,    45,
      46,    48,    25,   207,    29,     5,    21,     6,     7,    68,
      18,   237,    62,    39,    40,    29,     5,    71,     6,     7,
      89,    92,   124,    30,    31,    32,    25,    22,    83,    78,
     208,   126,   128,   130,    30,    31,    32,    63,   238,    64,
     132,    72,   134,   136,    90,    93,   125,    54,   138,   140,
     187,   142,   146,   163,   218,   127,   129,   131,   243,   195,
      41,   148,   210,    18,   133,   121,   135,   137,    42,   122,
     190,   230,   139,   141,   191,   143,   147,   164,   219,   220,
     196,   197,   244,   196,   197,   213,   165,    29,     5,   240,
       6,     7,   231,   232,   185,    29,     5,   167,     6,     7,
      21,    21,     2,   175,     3,     4,    30,    31,    32,   245,
     231,   232,     3,   190,    30,    31,    32,   206,    47,   186,
      74,    22,    22,   175,     1,   182,     2,    51,     3,   183,
       4,    97,    98,    99,   100,   101,    50,    52,     5,    56,
       6,     7,   102,   103,   104,   105,   106,   184,   227,   229,
     247,   122,   228,   122,   122,    55,    59,    60,    70,    67,
      61,    79,    81,    91,    95,    85,    80,    84,    87,    88,
      86,    96,   108,   107,   111,   110,   113,   109,   114,   115,
     116,   118,   119,   120,   123,   144,   150,   155,   158,   156,
     161,   168,   169,   170,   171,   172,   176,   174,   177,   181,
     188,   203,   222,    10,   192,   193,    11,    12,    13,   202,
      44,    49,   173,   235,   241,   190,   194,   209,   201,   204,
     215,   236,   226,   239,   212,    58,    43,   221,     0,     0,
     200,   242,   246,    76,     0,     0,   211
};

static const yytype_int16 yycheck[] =
{
      37,   120,   110,    41,    23,    11,     6,     8,    10,    14,
      15,     4,    37,    11,    16,    17,    16,    19,    20,    10,
      13,    11,    11,    38,    38,    16,    17,    12,    19,    20,
      12,    12,    12,    35,    36,    37,    37,    37,    44,    44,
      38,    12,    12,    12,    35,    36,    37,    36,    38,    38,
      12,    36,    12,    12,    36,    36,    36,    76,    12,    12,
     168,    12,    12,    12,    12,    36,    36,    36,    12,    15,
      38,   109,    15,    13,    36,    39,    36,    36,     0,    43,
      38,    15,    36,    36,    42,    36,    36,    36,    36,   208,
      36,    37,    36,    36,    37,   203,    15,    16,    17,    15,
      19,    20,    36,    37,    15,    16,    17,   144,    19,    20,
      16,    16,     5,   153,     7,     9,    35,    36,    37,   238,
      36,    37,     7,    38,    35,    36,    37,    42,    36,   166,
      36,    37,    37,   173,     3,    39,     5,    37,     7,    43,
       9,    24,    25,    26,    27,    28,    42,    36,    17,    36,
      19,    20,    24,    25,    26,    27,    28,    39,    39,    39,
      39,    43,    43,    43,    43,    42,    42,    37,    42,    36,
      38,    14,    36,    11,    11,    38,    42,    42,    36,    36,
      42,    42,    11,    39,    15,    39,    11,    42,    12,    12,
      39,    11,    39,    38,    12,    14,    37,    12,    37,    45,
      12,    18,    42,    36,    15,    37,    42,    37,    14,    36,
      36,    39,    14,     0,    36,    36,     0,     0,     0,    33,
      14,    19,   152,   227,   233,    38,    42,    36,   183,    39,
      37,   228,    36,    36,    42,    26,     9,    42,    -1,    -1,
     182,    42,    42,    40,    -1,    -1,   198
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     7,     9,    17,    19,    20,    47,    48,
      49,    50,    51,    52,    58,    59,    60,    90,    13,    61,
      62,    16,    37,    77,    78,    37,    79,    80,    10,    16,
      35,    36,    37,    49,    50,    51,    52,    91,    92,    38,
      38,    38,     0,    90,    59,    60,    60,    36,     4,    62,
      42,    37,    36,     6,    78,    42,    36,     8,    80,    42,
      37,    38,    11,    36,    38,    93,    94,    36,    10,    92,
      42,    12,    36,    55,    36,    53,    77,    55,    60,    14,
      42,    36,    11,    44,    42,    38,    42,    36,    36,    12,
      36,    11,    12,    36,    95,    11,    42,    24,    25,    26,
      27,    28,    24,    25,    26,    27,    28,    39,    11,    42,
      39,    15,    63,    11,    12,    12,    39,    81,    11,    39,
      38,    39,    43,    12,    12,    36,    12,    36,    12,    36,
      12,    36,    12,    36,    12,    36,    12,    36,    12,    36,
      12,    36,    12,    36,    14,    56,    12,    36,    55,    56,
      37,    64,    65,    66,    67,    12,    45,    82,    37,    86,
      87,    12,    95,    12,    36,    15,    57,    92,    18,    42,
      36,    15,    37,    66,    37,    67,    42,    14,    83,    84,
      85,    36,    39,    43,    39,    15,    92,    56,    36,    54,
      38,    42,    36,    36,    42,    15,    36,    37,    88,    89,
      83,    87,    33,    39,    39,    68,    42,    11,    38,    36,
      15,    89,    42,    56,    69,    37,    73,    74,    12,    36,
      95,    42,    14,    70,    71,    72,    36,    39,    43,    39,
      15,    36,    37,    75,    76,    70,    74,    11,    38,    36,
      15,    76,    42,    12,    36,    95,    42,    39
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
      76,    77,    77,    78,    78,    78,    78,    79,    79,    80,
      81,    80,    82,    80,    83,    83,    84,    85,    86,    86,
      87,    88,    88,    89,    89,    89,    89,    90,    90,    91,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    93,    94,    95,    95,    95,    95
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
       2,     2,     3,     5,     4,     2,     5,     2,     3,     0,
       0,     7,     0,     6,     1,     1,     3,     2,     1,     3,
       2,     2,     3,     3,     3,     4,     2,     3,     2,     2,
       3,     2,     4,     5,     3,     3,     2,     4,     2,     1,
       1,     1,     1,     1,     5,     3,     1,     1,     3,     3
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
#line 47 "language.y"
                     {printf("The programme is correct!\n");}
#line 1346 "language.tab.c"
    break;

  case 3: /* progr: sections entry_point  */
#line 48 "language.y"
                              {printf("The programme is correct!\n");}
#line 1352 "language.tab.c"
    break;

  case 54: /* user_decl: CLASS ID BEGINCLASS ENDCLASS  */
#line 123 "language.y"
                                         {if (!clslist.existClass((yyvsp[-2].string))) {
                                                  clslist.addClass((yyvsp[-2].string));
                                             }
                                        else 
                                        {
                                             yyerror("Redefine a class error!");
                                        }
                                        }
#line 1365 "language.tab.c"
    break;

  case 55: /* $@1: %empty  */
#line 131 "language.y"
                                {sharedID = strdup((yyvsp[-1].string)); 
                                 if (!clslist.existClass((yyvsp[-1].string))) {
                                   clslist.addClass((yyvsp[-1].string));
                              }
                              else 
                              {
                                   yyerror("Redefine a class error!");
                              }
                              }
#line 1379 "language.tab.c"
    break;

  case 56: /* user_decl: CLASS ID BEGINCLASS $@1 class_lines ENDCLASS  */
#line 141 "language.y"
                              {  
                                   if (!clslist.existClass((yyvsp[-4].string))) {
                                        clslist.addClass((yyvsp[-4].string));
                                   }
                              }
#line 1389 "language.tab.c"
    break;

  case 60: /* members: TYPE ID ';'  */
#line 155 "language.y"
                      {
          char* classID = sharedID;
          clslist.addVars(classID, (yyvsp[-2].string), (yyvsp[-1].string));
        }
#line 1398 "language.tab.c"
    break;

  case 61: /* members: members TYPE ID ';'  */
#line 159 "language.y"
                              {
          char* classID = sharedID;
          clslist.addVars(classID, (yyvsp[-2].string), (yyvsp[-1].string));
        }
#line 1407 "language.tab.c"
    break;

  case 64: /* $@2: %empty  */
#line 171 "language.y"
                           {methodSharedId = strdup((yyvsp[-1].string)); clslist.addMethods(sharedID,(yyvsp[-2].string),(yyvsp[-1].string));}
#line 1413 "language.tab.c"
    break;

  case 66: /* $@3: %empty  */
#line 173 "language.y"
                                 {methodSharedId = strdup((yyvsp[-2].string)); clslist.addMethods(sharedID,(yyvsp[-3].string),(yyvsp[-2].string));}
#line 1419 "language.tab.c"
    break;

  case 74: /* method_param: TYPE ID  */
#line 188 "language.y"
                       {clslist.getMethods(sharedID)->addParameter(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1425 "language.tab.c"
    break;

  case 80: /* method_instructions: TYPE ID  */
#line 198 "language.y"
                   {
          clslist.getMethods(sharedID)->addVar(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1432 "language.tab.c"
    break;

  case 83: /* decl: TYPE ID '[' NR ']'  */
#line 209 "language.y"
                               { ids.addArray((yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-1].string)); }
#line 1438 "language.tab.c"
    break;

  case 84: /* decl: TYPE ID ASSIGN NR  */
#line 210 "language.y"
                              {ids.addVar((yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[0].string));}
#line 1444 "language.tab.c"
    break;

  case 85: /* decl: TYPE ID  */
#line 211 "language.y"
                    { if(!ids.existsVar((yyvsp[0].string))) {
                          ids.addVar((yyvsp[-1].string),(yyvsp[0].string));
                     }
                     else 
                     {
                         yyerror("The variable already exist!");    
                     }
                    }
#line 1457 "language.tab.c"
    break;

  case 86: /* decl: CONST TYPE ID ASSIGN NR  */
#line 219 "language.y"
                                    {
               if(!ids.existsConst((yyvsp[-3].string)))
                    ids.addConst((yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[0].string));
               else 
                    yyerror("The const variable already exist!");    
               }
#line 1468 "language.tab.c"
    break;

  case 90: /* $@4: %empty  */
#line 233 "language.y"
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
#line 1484 "language.tab.c"
    break;

  case 92: /* $@5: %empty  */
#line 245 "language.y"
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
#line 1499 "language.tab.c"
    break;

  case 100: /* param: TYPE ID  */
#line 267 "language.y"
                {mthlist.addParameter(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1505 "language.tab.c"
    break;

  case 106: /* instructions: TYPE ID  */
#line 277 "language.y"
                   {mthlist.addVar(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1511 "language.tab.c"
    break;

  case 111: /* statement: TYPE ID  */
#line 289 "language.y"
                   {if(local_list.existsVar((yyvsp[0].string)))
                         yyerror("The variable was already declared");
                    else 
                         {
                              if(!local_list.existsVar((yyvsp[0].string)))
                                   local_list.addVar((yyvsp[-1].string), (yyvsp[0].string));
                              else 
                                   yyerror("The variable was already declared");
                         }
                    }
#line 1526 "language.tab.c"
    break;

  case 112: /* statement: TYPE ID ASSIGN NR  */
#line 299 "language.y"
                              {if(local_list.existsVar((yyvsp[-2].string)))
                                   yyerror("The variable was already declared");
                               else
                                    local_list.addVar((yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[0].string));
                              }
#line 1536 "language.tab.c"
    break;

  case 113: /* statement: CONST TYPE ID ASSIGN NR  */
#line 304 "language.y"
                                    {
                                        if(!ids.existsConst((yyvsp[-3].string)))
                                             ids.addConst((yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[0].string));
                                        else 
                                             yyerror("The const variable already exist!");    
                                   }
#line 1547 "language.tab.c"
    break;

  case 114: /* statement: ID ASSIGN ID  */
#line 310 "language.y"
                         {
                              if (!ids.existsVar((yyvsp[-2].string))) {
                                   yyerror("The destination variable was not declared");
                              }
                              if (!ids.existsVar((yyvsp[0].string))) {
                                   yyerror("The source variable was not declared");
                              }
                              ids.updateVarValueID((yyvsp[-2].string), (yyvsp[0].string));
                         }
#line 1561 "language.tab.c"
    break;

  case 115: /* statement: ID ASSIGN NR  */
#line 319 "language.y"
                         {
                              if (!ids.existsVar((yyvsp[-2].string))) {
                                   yyerror("The variable was not declared");
                              }
                                   ids.updateVarValueNR((yyvsp[-2].string), (yyvsp[0].string));
                              }
#line 1572 "language.tab.c"
    break;

  case 116: /* statement: ID func_oper  */
#line 325 "language.y"
                         {
                         if(!mthlist.existMethod((yyvsp[-1].string)))
                         {
                              yyerror("The method was not declared");
                         }
         }
#line 1583 "language.tab.c"
    break;

  case 117: /* statement: TYPEOF '(' ID ')'  */
#line 331 "language.y"
                             {
               if(!ids.existsVar((yyvsp[-1].string)) && !ids.existsConst((yyvsp[-1].string)) && !ids.existsArray((yyvsp[-1].string))) {
                         yyerror("The variable was not declared");
               }
               else 
               {
                    ids.getType((yyvsp[-1].string));
               }
         }
#line 1597 "language.tab.c"
    break;

  case 118: /* statement: ID class_oper  */
#line 340 "language.y"
                         {
          if(!clslist.existClass((yyvsp[-1].string)))
               yyerror("The class was not declared");
         }
#line 1606 "language.tab.c"
    break;


#line 1610 "language.tab.c"

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

#line 361 "language.y"

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
     printf("\nClasses :\n");
     clslist.printClasses();
     printf("Global methods :\n");
     mthlist.printMethods();
}

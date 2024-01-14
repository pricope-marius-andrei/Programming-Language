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
class IdList user_var_list;
class ClassList clslist;
class MethodList mthlist;

#line 89 "language.tab.c"

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
  YYSYMBOL_NEW = 36,                       /* NEW  */
  YYSYMBOL_ACCESS_FIELD = 37,              /* ACCESS_FIELD  */
  YYSYMBOL_ID = 38,                        /* ID  */
  YYSYMBOL_TYPE = 39,                      /* TYPE  */
  YYSYMBOL_40_ = 40,                       /* '('  */
  YYSYMBOL_41_ = 41,                       /* ')'  */
  YYSYMBOL_42_ = 42,                       /* '{'  */
  YYSYMBOL_43_ = 43,                       /* '}'  */
  YYSYMBOL_44_ = 44,                       /* ';'  */
  YYSYMBOL_45_ = 45,                       /* ','  */
  YYSYMBOL_46_ = 46,                       /* '['  */
  YYSYMBOL_47_ = 47,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_progr = 49,                     /* progr  */
  YYSYMBOL_sections = 50,                  /* sections  */
  YYSYMBOL_if_statement = 51,              /* if_statement  */
  YYSYMBOL_if_else_statement = 52,         /* if_else_statement  */
  YYSYMBOL_while_statement = 53,           /* while_statement  */
  YYSYMBOL_for_statement = 54,             /* for_statement  */
  YYSYMBOL_for_initializer = 55,           /* for_initializer  */
  YYSYMBOL_for_update = 56,                /* for_update  */
  YYSYMBOL_condition = 57,                 /* condition  */
  YYSYMBOL_block = 58,                     /* block  */
  YYSYMBOL_statements = 59,                /* statements  */
  YYSYMBOL_user_data_types = 60,           /* user_data_types  */
  YYSYMBOL_global_variables = 61,          /* global_variables  */
  YYSYMBOL_global_functions = 62,          /* global_functions  */
  YYSYMBOL_user_declarations = 63,         /* user_declarations  */
  YYSYMBOL_user_decl = 64,                 /* user_decl  */
  YYSYMBOL_65_1 = 65,                      /* $@1  */
  YYSYMBOL_class_lines = 66,               /* class_lines  */
  YYSYMBOL_members = 67,                   /* members  */
  YYSYMBOL_methods = 68,                   /* methods  */
  YYSYMBOL_methods_decl = 69,              /* methods_decl  */
  YYSYMBOL_70_2 = 70,                      /* $@2  */
  YYSYMBOL_71_3 = 71,                      /* $@3  */
  YYSYMBOL_m_block = 72,                   /* m_block  */
  YYSYMBOL_content = 73,                   /* content  */
  YYSYMBOL_without_content = 74,           /* without_content  */
  YYSYMBOL_list_method_param = 75,         /* list_method_param  */
  YYSYMBOL_method_param = 76,              /* method_param  */
  YYSYMBOL_method_block = 77,              /* method_block  */
  YYSYMBOL_method_instructions = 78,       /* method_instructions  */
  YYSYMBOL_declarations = 79,              /* declarations  */
  YYSYMBOL_decl = 80,                      /* decl  */
  YYSYMBOL_func_declarations = 81,         /* func_declarations  */
  YYSYMBOL_func_decl = 82,                 /* func_decl  */
  YYSYMBOL_83_4 = 83,                      /* $@4  */
  YYSYMBOL_84_5 = 84,                      /* $@5  */
  YYSYMBOL_f_block = 85,                   /* f_block  */
  YYSYMBOL_f_content = 86,                 /* f_content  */
  YYSYMBOL_f_without_content = 87,         /* f_without_content  */
  YYSYMBOL_list_param = 88,                /* list_param  */
  YYSYMBOL_param = 89,                     /* param  */
  YYSYMBOL_func_block = 90,                /* func_block  */
  YYSYMBOL_instructions = 91,              /* instructions  */
  YYSYMBOL_entry_point = 92,               /* entry_point  */
  YYSYMBOL_list = 93,                      /* list  */
  YYSYMBOL_statement = 94,                 /* statement  */
  YYSYMBOL_func_oper = 95,                 /* func_oper  */
  YYSYMBOL_call_list = 96                  /* call_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 22 "language.y"

     // Declare a global variable to store the ID from user_decl
     char* sharedID = NULL;
     char* methodSharedId = NULL;
     char* def_class = NULL;

#line 226 "language.tab.c"


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
#define YYLAST   247

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  252

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      40,    41,     2,     2,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    51,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    67,    69,    71,    73,    75,
      76,    77,    80,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   107,   108,   111,   112,   115,
     116,   117,   122,   123,   126,   134,   134,   151,   152,   153,
     158,   162,   171,   172,   174,   174,   176,   176,   180,   181,
     183,   185,   187,   188,   191,   194,   195,   198,   199,   200,
     201,   208,   209,   212,   213,   214,   215,   223,   234,   235,
     237,   237,   237,   249,   249,   261,   262,   264,   265,   267,
     268,   271,   274,   275,   278,   279,   280,   281,   284,   285,
     289,   290,   295,   306,   312,   317,   322,   328,   337,   343,
     349,   369,   381,   393,   394,   395,   396,   399,   401,   402,
     403,   404
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
  "PLUS", "MINUS", "PINC", "MINC", "TYPEOF", "NEW", "ACCESS_FIELD", "ID",
  "TYPE", "'('", "')'", "'{'", "'}'", "';'", "','", "'['", "']'",
  "$accept", "progr", "sections", "if_statement", "if_else_statement",
  "while_statement", "for_statement", "for_initializer", "for_update",
  "condition", "block", "statements", "user_data_types",
  "global_variables", "global_functions", "user_declarations", "user_decl",
  "$@1", "class_lines", "members", "methods", "methods_decl", "$@2", "$@3",
  "m_block", "content", "without_content", "list_method_param",
  "method_param", "method_block", "method_instructions", "declarations",
  "decl", "func_declarations", "func_decl", "$@4", "$@5", "f_block",
  "f_content", "f_without_content", "list_param", "param", "func_block",
  "instructions", "entry_point", "list", "statement", "func_oper",
  "call_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-164)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     137,    -4,    87,   -29,    -2,   -18,    -5,    36,    21,    69,
    -164,  -164,  -164,  -164,    70,    97,  -164,  -164,    77,   116,
      73,    84,    90,     0,    89,   105,    -1,    91,  -164,   113,
     115,    13,   136,  -164,  -164,  -164,  -164,     9,   109,     8,
     100,     8,  -164,  -164,    97,  -164,  -164,   150,  -164,   135,
    -164,   138,    -6,  -164,   139,  -164,   140,  -164,   141,  -164,
     143,   144,    18,   146,   167,    20,  -164,   175,  -164,   145,
    -164,   123,   134,   147,   176,   148,    87,   149,  -164,   178,
    -164,   180,    22,   182,  -164,   154,  -164,   185,   156,  -164,
    -164,  -164,   162,  -164,  -164,   -14,    31,  -164,    33,    42,
      43,    47,    50,    51,    52,    53,    54,    55,   186,    56,
       8,   186,  -164,   160,   189,  -164,  -164,   155,  -164,   164,
     192,  -164,   165,  -164,    58,  -164,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,    67,   188,  -164,
    -164,   163,  -164,   170,   194,   171,   172,   168,  -164,  -164,
     199,   177,   122,  -164,  -164,    20,  -164,  -164,  -164,    92,
    -164,   186,   179,   101,  -164,   181,   172,   183,   174,  -164,
      80,  -164,  -164,  -164,  -164,   199,   164,   124,  -164,  -164,
    -164,   187,   173,   184,  -164,   126,   190,  -164,  -164,     2,
     191,    83,   193,  -164,  -164,  -164,  -164,   186,  -164,   195,
    -164,    61,    20,  -164,  -164,   196,  -164,  -164,   202,   197,
     127,  -164,  -164,  -164,   130,  -164,    86,  -164,  -164,  -164,
    -164,   202,   195,  -164,  -164,    12,   198,    98,   200,  -164,
    -164,    62,    20,  -164,  -164,   201,  -164,  -164,  -164,   132,
    -164,  -164
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
      11,    12,    13,    14,     4,     8,    10,     2,     0,     0,
       0,     0,     0,     0,     0,     0,    90,     0,   109,     0,
       0,     0,     0,   123,   124,   125,   126,     0,     0,     0,
       0,     0,     1,     3,     5,     6,     9,     0,    49,     0,
      52,     0,    86,    50,     0,    81,     0,    51,     0,    88,
       0,     0,     0,     0,   121,     0,   119,   112,   108,     0,
     110,    23,    24,     0,     0,     0,    19,     0,     7,    55,
      53,     0,     0,     0,    82,    91,    89,     0,     0,   118,
     117,   113,     0,   128,   129,     0,     0,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,     0,     0,    84,    85,     0,    93,     0,
       0,   120,     0,   127,     0,   114,   115,    44,    42,    28,
      26,    32,    30,    36,    34,    40,    38,    41,    43,    25,
      27,    29,    31,    33,    35,    37,    39,     0,    15,    21,
      20,     0,    17,     0,     0,    57,    58,     0,    87,    83,
       0,     0,     0,    99,   116,     0,   130,   131,    45,     0,
      47,     0,     0,     0,    56,     0,    59,     0,     0,    62,
       0,    94,    95,    96,   101,     0,     0,     0,    46,    48,
      16,     0,     0,    64,    60,     0,     0,    63,    98,     0,
       0,     0,     0,    92,   100,   122,    22,     0,    66,     0,
      61,     0,     0,   107,    97,     0,   102,    18,     0,     0,
       0,    72,   105,   104,     0,   103,     0,    67,    68,    69,
      74,     0,     0,   106,    71,     0,     0,     0,     0,    65,
      73,     0,     0,    80,    70,     0,    75,    78,    77,     0,
      76,    79
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,  -164,  -164,   222,   223,   224,   226,  -164,  -164,   -38,
    -110,  -164,  -164,   213,    -3,  -164,   209,  -164,  -164,  -164,
      76,   -42,  -164,  -164,     1,  -164,  -164,  -164,     6,  -164,
       4,   203,   -19,  -164,   207,  -164,  -164,    57,  -164,  -164,
    -164,    60,  -164,    38,   238,  -164,   -37,  -164,  -163
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     8,     9,    33,    34,    35,    36,    75,   192,    73,
     148,   169,    14,    15,    16,    19,    20,   113,   154,   155,
     156,   157,   209,   218,   227,   228,   229,   220,   221,   237,
     238,    23,    24,    26,    27,   119,   160,   181,   182,   183,
     162,   163,   201,   202,    17,    37,    38,    66,    95
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      69,   152,   187,    77,    54,    82,    53,    57,    28,    18,
      25,    45,    46,   211,    29,     5,    21,     6,     7,    68,
      71,    42,    39,   241,    62,    29,     5,   123,     6,     7,
      89,   124,    93,    30,   115,    40,    31,    32,    25,    22,
      83,    78,   212,   125,    30,   127,    72,    31,    32,   224,
      63,    64,   242,    65,   129,   131,    90,    54,    94,   133,
     116,   190,   135,   137,   139,   141,   143,   145,   149,   126,
     166,   128,   151,   222,   247,     2,    41,     3,     4,   249,
     130,   132,   168,    29,     5,   134,     6,     7,   136,   138,
     140,   142,   144,   146,   150,   198,   167,   217,   214,   223,
     248,   234,    30,    21,     3,    31,    32,   188,    29,     5,
     170,     6,     7,   244,   178,    47,    21,    50,   199,   200,
      48,   199,   200,    51,   235,   236,    22,    30,    52,    18,
      31,    32,   189,    55,   178,    59,   235,   236,    74,    22,
       1,   193,     2,    56,     3,   194,     4,    98,    99,   100,
     101,   102,    60,    70,     5,    61,     6,     7,   103,   104,
     105,   106,   107,   185,    79,   205,   193,   186,   231,   124,
     210,   233,   232,   251,    67,   124,    81,   124,    92,    80,
      85,    87,    88,    84,    91,    86,    96,   109,   108,    97,
     111,   114,   110,   112,   117,   118,   120,   121,   122,   153,
     147,   158,   159,   161,   164,   165,   171,   172,   173,   174,
     175,   177,   179,   180,   207,   184,   226,   191,   197,   195,
     206,   196,    10,    11,    12,   208,    13,    44,    49,   213,
     193,   176,   239,    58,   219,   230,   243,   216,   240,   215,
     225,   245,   203,    76,   246,   250,   204,    43
};

static const yytype_uint8 yycheck[] =
{
      37,   111,   165,    41,    23,    11,     6,     8,    10,    13,
      39,    14,    15,    11,    16,    17,    16,    19,    20,    10,
      12,     0,    40,    11,    11,    16,    17,    41,    19,    20,
      12,    45,    12,    35,    12,    40,    38,    39,    39,    39,
      46,    44,    40,    12,    35,    12,    38,    38,    39,   212,
      37,    38,    40,    40,    12,    12,    38,    76,    38,    12,
      38,   171,    12,    12,    12,    12,    12,    12,    12,    38,
      12,    38,   110,    12,    12,     5,    40,     7,     9,   242,
      38,    38,    15,    16,    17,    38,    19,    20,    38,    38,
      38,    38,    38,    38,    38,    15,    38,   207,    15,    38,
      38,    15,    35,    16,     7,    38,    39,    15,    16,    17,
     147,    19,    20,    15,   156,    38,    16,    44,    38,    39,
       4,    38,    39,    39,    38,    39,    39,    35,    38,    13,
      38,    39,   169,    44,   176,    44,    38,    39,    38,    39,
       3,    40,     5,    38,     7,    44,     9,    24,    25,    26,
      27,    28,    39,    44,    17,    40,    19,    20,    24,    25,
      26,    27,    28,    41,    14,    41,    40,    45,    41,    45,
      44,    41,    45,    41,    38,    45,    38,    45,    11,    44,
      40,    38,    38,    44,    38,    44,    11,    11,    41,    44,
      41,    11,    44,    15,    12,    41,    11,    41,    36,    39,
      14,    12,    47,    39,    12,    40,    18,    44,    38,    15,
      39,    39,    44,    14,    41,    38,    14,    38,    44,    38,
      33,    38,     0,     0,     0,    41,     0,    14,    19,    38,
      40,   155,   231,    26,    39,    38,    38,    44,   232,   201,
      44,   237,   185,    40,    44,    44,   186,     9
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     7,     9,    17,    19,    20,    49,    50,
      51,    52,    53,    54,    60,    61,    62,    92,    13,    63,
      64,    16,    39,    79,    80,    39,    81,    82,    10,    16,
      35,    38,    39,    51,    52,    53,    54,    93,    94,    40,
      40,    40,     0,    92,    61,    62,    62,    38,     4,    64,
      44,    39,    38,     6,    80,    44,    38,     8,    82,    44,
      39,    40,    11,    37,    38,    40,    95,    38,    10,    94,
      44,    12,    38,    57,    38,    55,    79,    57,    62,    14,
      44,    38,    11,    46,    44,    40,    44,    38,    38,    12,
      38,    38,    11,    12,    38,    96,    11,    44,    24,    25,
      26,    27,    28,    24,    25,    26,    27,    28,    41,    11,
      44,    41,    15,    65,    11,    12,    38,    12,    41,    83,
      11,    41,    36,    41,    45,    12,    38,    12,    38,    12,
      38,    12,    38,    12,    38,    12,    38,    12,    38,    12,
      38,    12,    38,    12,    38,    12,    38,    14,    58,    12,
      38,    57,    58,    39,    66,    67,    68,    69,    12,    47,
      84,    39,    88,    89,    12,    40,    12,    38,    15,    59,
      94,    18,    44,    38,    15,    39,    68,    39,    69,    44,
      14,    85,    86,    87,    38,    41,    45,    96,    15,    94,
      58,    38,    56,    40,    44,    38,    38,    44,    15,    38,
      39,    90,    91,    85,    89,    41,    33,    41,    41,    70,
      44,    11,    40,    38,    15,    91,    44,    58,    71,    39,
      75,    76,    12,    38,    96,    44,    14,    72,    73,    74,
      38,    41,    45,    41,    15,    38,    39,    77,    78,    72,
      76,    11,    40,    38,    15,    78,    44,    12,    38,    96,
      44,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    49,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    51,    52,    53,    54,    55,
      55,    55,    56,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    58,    58,    59,    59,    60,
      61,    62,    63,    63,    64,    65,    64,    66,    66,    66,
      67,    67,    68,    68,    70,    69,    71,    69,    72,    72,
      73,    74,    75,    75,    76,    77,    77,    78,    78,    78,
      78,    79,    79,    80,    80,    80,    80,    80,    81,    81,
      82,    83,    82,    84,    82,    85,    85,    86,    87,    88,
      88,    89,    90,    90,    91,    91,    91,    91,    92,    92,
      93,    93,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    95,    96,    96,
      96,    96
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
       2,     2,     3,     5,     4,     4,     2,     5,     2,     3,
       0,     0,     7,     0,     6,     1,     1,     3,     2,     1,
       3,     2,     2,     3,     3,     3,     4,     2,     3,     2,
       2,     3,     2,     3,     4,     4,     5,     3,     3,     2,
       4,     2,     7,     1,     1,     1,     1,     3,     1,     1,
       3,     3
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
#line 50 "language.y"
                     {printf("The programme is correct!\n");}
#line 1356 "language.tab.c"
    break;

  case 3: /* progr: sections entry_point  */
#line 51 "language.y"
                              {printf("The programme is correct!\n");}
#line 1362 "language.tab.c"
    break;

  case 54: /* user_decl: CLASS ID BEGINCLASS ENDCLASS  */
#line 126 "language.y"
                                         {if (!clslist.existClass((yyvsp[-2].string))) {
                                                  clslist.addClass((yyvsp[-2].string));
                                             }
                                        else 
                                        {
                                             yyerror("Redefine a class error!");
                                        }
                                        }
#line 1375 "language.tab.c"
    break;

  case 55: /* $@1: %empty  */
#line 134 "language.y"
                                {sharedID = strdup((yyvsp[-1].string)); 
                                 if (!clslist.existClass((yyvsp[-1].string))) {
                                   clslist.addClass((yyvsp[-1].string));
                              }
                              else 
                              {
                                   yyerror("Redefine a class error!");
                              }
                              }
#line 1389 "language.tab.c"
    break;

  case 56: /* user_decl: CLASS ID BEGINCLASS $@1 class_lines ENDCLASS  */
#line 144 "language.y"
                              {  
                                   if (!clslist.existClass((yyvsp[-4].string))) {
                                        clslist.addClass((yyvsp[-4].string));
                                   }
                              }
#line 1399 "language.tab.c"
    break;

  case 60: /* members: TYPE ID ';'  */
#line 158 "language.y"
                      {
          char* classID = sharedID;
          clslist.addVars(classID, (yyvsp[-2].string), (yyvsp[-1].string));
        }
#line 1408 "language.tab.c"
    break;

  case 61: /* members: members TYPE ID ';'  */
#line 162 "language.y"
                              {
          char* classID = sharedID;
          clslist.addVars(classID, (yyvsp[-2].string), (yyvsp[-1].string));
        }
#line 1417 "language.tab.c"
    break;

  case 64: /* $@2: %empty  */
#line 174 "language.y"
                           {methodSharedId = strdup((yyvsp[-1].string)); clslist.addMethods(sharedID,(yyvsp[-2].string),(yyvsp[-1].string));}
#line 1423 "language.tab.c"
    break;

  case 66: /* $@3: %empty  */
#line 176 "language.y"
                                 {methodSharedId = strdup((yyvsp[-2].string)); clslist.addMethods(sharedID,(yyvsp[-3].string),(yyvsp[-2].string));}
#line 1429 "language.tab.c"
    break;

  case 74: /* method_param: TYPE ID  */
#line 191 "language.y"
                       {clslist.getMethods(sharedID)->addParameter(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1435 "language.tab.c"
    break;

  case 80: /* method_instructions: TYPE ID  */
#line 201 "language.y"
                   {
          clslist.getMethods(sharedID)->addVar(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1442 "language.tab.c"
    break;

  case 83: /* decl: TYPE ID '[' NR ']'  */
#line 212 "language.y"
                               { ids.addArray((yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-1].string)); }
#line 1448 "language.tab.c"
    break;

  case 84: /* decl: TYPE ID ASSIGN NR  */
#line 213 "language.y"
                              {ids.addVar((yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[0].string));}
#line 1454 "language.tab.c"
    break;

  case 85: /* decl: TYPE ID ASSIGN ID  */
#line 214 "language.y"
                              {ids.addVar((yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[0].string));}
#line 1460 "language.tab.c"
    break;

  case 86: /* decl: TYPE ID  */
#line 215 "language.y"
                    { if(!ids.existsVar((yyvsp[0].string))) {
                          ids.addVar((yyvsp[-1].string),(yyvsp[0].string));
                     }
                     else 
                     {
                         yyerror("The variable already exist!");    
                     }
                    }
#line 1473 "language.tab.c"
    break;

  case 87: /* decl: CONST TYPE ID ASSIGN NR  */
#line 223 "language.y"
                                    {
               if(!ids.existsConst((yyvsp[-3].string)))
                    ids.addConst((yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[0].string));
               else 
                    yyerror("The const variable already exist!");  
          }
#line 1484 "language.tab.c"
    break;

  case 91: /* $@4: %empty  */
#line 237 "language.y"
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
#line 1500 "language.tab.c"
    break;

  case 93: /* $@5: %empty  */
#line 249 "language.y"
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
#line 1515 "language.tab.c"
    break;

  case 101: /* param: TYPE ID  */
#line 271 "language.y"
                {mthlist.addParameter(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1521 "language.tab.c"
    break;

  case 107: /* instructions: TYPE ID  */
#line 281 "language.y"
                   {mthlist.addVar(methodSharedId,(yyvsp[-1].string),(yyvsp[0].string));}
#line 1527 "language.tab.c"
    break;

  case 112: /* statement: TYPE ID  */
#line 295 "language.y"
                   { //declare new local variables
               if(ids.existsVar((yyvsp[0].string)))
                    yyerror("The variable was already declared");
               else 
               {
                    if(!local_list.existsVar((yyvsp[0].string)))
                         local_list.addVar((yyvsp[-1].string), (yyvsp[0].string));
                    else 
                         yyerror("The variable was already declared");
               }
          }
#line 1543 "language.tab.c"
    break;

  case 113: /* statement: ID ACCESS_FIELD ID  */
#line 306 "language.y"
                              { //access members from the class
               if(!user_var_list.existsVar((yyvsp[-2].string)))
               {
                   yyerror("The variable was not declared"); 
               }
          }
#line 1554 "language.tab.c"
    break;

  case 114: /* statement: TYPE ID ASSIGN NR  */
#line 312 "language.y"
                              {if(local_list.existsVar((yyvsp[-2].string)))
                                   yyerror("The variable was already declared");
                               else
                                    local_list.addVar((yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[0].string));
                              }
#line 1564 "language.tab.c"
    break;

  case 115: /* statement: TYPE ID ASSIGN ID  */
#line 317 "language.y"
                              {if(local_list.existsVar((yyvsp[-2].string)))
                                   yyerror("The variable was already declared");
                               else
                                    local_list.addVar((yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[0].string));
                              }
#line 1574 "language.tab.c"
    break;

  case 116: /* statement: CONST TYPE ID ASSIGN NR  */
#line 322 "language.y"
                                    {
                                        if(!ids.existsConst((yyvsp[-3].string)))
                                             ids.addConst((yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[0].string));
                                        else 
                                             yyerror("The const variable already exist!");    
                                   }
#line 1585 "language.tab.c"
    break;

  case 117: /* statement: ID ASSIGN ID  */
#line 328 "language.y"
                         {
                              if (!ids.existsVar((yyvsp[-2].string))) {
                                   yyerror("The destination variable was not declared");
                              }
                              if (!ids.existsVar((yyvsp[0].string))) {
                                   yyerror("The source variable was not declared");
                              }
                              ids.updateVarValueID((yyvsp[-2].string), (yyvsp[0].string));
                         }
#line 1599 "language.tab.c"
    break;

  case 118: /* statement: ID ASSIGN NR  */
#line 337 "language.y"
                         {
                              if (!ids.existsVar((yyvsp[-2].string))) {
                                   yyerror("The variable was not declared");
                              }
                                   ids.updateVarValueNR((yyvsp[-2].string), (yyvsp[0].string));
                              }
#line 1610 "language.tab.c"
    break;

  case 119: /* statement: ID func_oper  */
#line 343 "language.y"
                        { //method calls
               if(!mthlist.existMethod((yyvsp[-1].string)))
               {
                    yyerror("The method was not declared");
               }
         }
#line 1621 "language.tab.c"
    break;

  case 120: /* statement: TYPEOF '(' ID ')'  */
#line 349 "language.y"
                             { //TypeOf function

               int ok = 1;
               if(ids.existsVar((yyvsp[-1].string)) || ids.existsConst((yyvsp[-1].string)) || ids.existsArray((yyvsp[-1].string))) {
                    ok = 0;
                    ids.getType((yyvsp[-1].string));
               }

               if(user_var_list.existsVar((yyvsp[-1].string))) {
                    ok = 0;
                    user_var_list.getType((yyvsp[-1].string));
               }

               if(ids.existsVar((yyvsp[-1].string)) || ids.existsConst((yyvsp[-1].string)) || ids.existsArray((yyvsp[-1].string))) {
                    ok = 0;
                    local_list.getType((yyvsp[-1].string));
               }
               if(ok == 1)
                    yyerror("The variable was not declared");
         }
#line 1646 "language.tab.c"
    break;

  case 121: /* statement: ID ID  */
#line 369 "language.y"
                {
               if(!clslist.existClass((yyvsp[-1].string)))
                    yyerror("The class was not declared");
               if(!user_var_list.existsVar((yyvsp[0].string)))
               {
                    user_var_list.addVar((yyvsp[-1].string),(yyvsp[0].string));
               }
               else 
               {
                    yyerror("The variable was already declared");
               }
          }
#line 1663 "language.tab.c"
    break;

  case 122: /* statement: ID ID ASSIGN NEW '(' call_list ')'  */
#line 381 "language.y"
                                              {
               if(!clslist.existClass((yyvsp[-6].string)))
                    yyerror("The class was not declared");
               if(!user_var_list.existsVar((yyvsp[-5].string)))
               {
                    user_var_list.addVar((yyvsp[-6].string),(yyvsp[-5].string));
               }
               else 
               {
                    yyerror("The variable was already declared");
               }
         }
#line 1680 "language.tab.c"
    break;


#line 1684 "language.tab.c"

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

#line 406 "language.y"

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
     printf("Local variables and constants :\n");
     local_list.printVarsAndConstants();
     user_var_list.printVarsAndConstants();
}

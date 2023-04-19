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
#line 1 "p2c_yacc.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "p2c.h"

#line 78 "p2c_yacc.c"

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

#include "p2c_yacc.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PROG = 3,                       /* PROG  */
  YYSYMBOL_PROC = 4,                       /* PROC  */
  YYSYMBOL_BG = 5,                         /* BG  */
  YYSYMBOL_END = 6,                        /* END  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_BOOL = 8,                       /* BOOL  */
  YYSYMBOL_TRUE = 9,                       /* TRUE  */
  YYSYMBOL_LP = 10,                        /* LP  */
  YYSYMBOL_RP = 11,                        /* RP  */
  YYSYMBOL_LSP = 12,                       /* LSP  */
  YYSYMBOL_RSP = 13,                       /* RSP  */
  YYSYMBOL_FALSE = 14,                     /* FALSE  */
  YYSYMBOL_CC = 15,                        /* CC  */
  YYSYMBOL_DOT = 16,                       /* DOT  */
  YYSYMBOL_SEMI = 17,                      /* SEMI  */
  YYSYMBOL_VAR = 18,                       /* VAR  */
  YYSYMBOL_ARRAY = 19,                     /* ARRAY  */
  YYSYMBOL_OF = 20,                        /* OF  */
  YYSYMBOL_DOTDOT = 21,                    /* DOTDOT  */
  YYSYMBOL_IF = 22,                        /* IF  */
  YYSYMBOL_THEN = 23,                      /* THEN  */
  YYSYMBOL_READ = 24,                      /* READ  */
  YYSYMBOL_WRITE = 25,                     /* WRITE  */
  YYSYMBOL_WHILE = 26,                     /* WHILE  */
  YYSYMBOL_DO = 27,                        /* DO  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_ASSIGN = 29,                    /* ASSIGN  */
  YYSYMBOL_COMMA = 30,                     /* COMMA  */
  YYSYMBOL_COLON = 31,                     /* COLON  */
  YYSYMBOL_ID = 32,                        /* ID  */
  YYSYMBOL_NUM = 33,                       /* NUM  */
  YYSYMBOL_OR = 34,                        /* OR  */
  YYSYMBOL_AND = 35,                       /* AND  */
  YYSYMBOL_NOT = 36,                       /* NOT  */
  YYSYMBOL_EQ = 37,                        /* EQ  */
  YYSYMBOL_NE = 38,                        /* NE  */
  YYSYMBOL_LT = 39,                        /* LT  */
  YYSYMBOL_GT = 40,                        /* GT  */
  YYSYMBOL_LE = 41,                        /* LE  */
  YYSYMBOL_GE = 42,                        /* GE  */
  YYSYMBOL_ADD = 43,                       /* ADD  */
  YYSYMBOL_MINUS = 44,                     /* MINUS  */
  YYSYMBOL_DIV = 45,                       /* DIV  */
  YYSYMBOL_TIMES = 46,                     /* TIMES  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_prog = 48,                      /* prog  */
  YYSYMBOL_block = 49,                     /* block  */
  YYSYMBOL_vardecs = 50,                   /* vardecs  */
  YYSYMBOL_morevd = 51,                    /* morevd  */
  YYSYMBOL_vardec = 52,                    /* vardec  */
  YYSYMBOL_moreid = 53,                    /* moreid  */
  YYSYMBOL_type = 54,                      /* type  */
  YYSYMBOL_arrtype = 55,                   /* arrtype  */
  YYSYMBOL_inrange = 56,                   /* inrange  */
  YYSYMBOL_simtype = 57,                   /* simtype  */
  YYSYMBOL_prodecs = 58,                   /* prodecs  */
  YYSYMBOL_proc = 59,                      /* proc  */
  YYSYMBOL_stmts = 60,                     /* stmts  */
  YYSYMBOL_comstmt = 61,                   /* comstmt  */
  YYSYMBOL_morestm = 62,                   /* morestm  */
  YYSYMBOL_stmt = 63,                      /* stmt  */
  YYSYMBOL_simstmt = 64,                   /* simstmt  */
  YYSYMBOL_assiStmt = 65,                  /* assiStmt  */
  YYSYMBOL_proStmt = 66,                   /* proStmt  */
  YYSYMBOL_readStmt = 67,                  /* readStmt  */
  YYSYMBOL_moreInput = 68,                 /* moreInput  */
  YYSYMBOL_input = 69,                     /* input  */
  YYSYMBOL_writeStmt = 70,                 /* writeStmt  */
  YYSYMBOL_moreOutputVal = 71,             /* moreOutputVal  */
  YYSYMBOL_outputVal = 72,                 /* outputVal  */
  YYSYMBOL_structStmt = 73,                /* structStmt  */
  YYSYMBOL_ifStmt = 74,                    /* ifStmt  */
  YYSYMBOL_whileStmt = 75,                 /* whileStmt  */
  YYSYMBOL_expression = 76,                /* expression  */
  YYSYMBOL_simpExpression = 77,            /* simpExpression  */
  YYSYMBOL_moreAddOp = 78,                 /* moreAddOp  */
  YYSYMBOL_term = 79,                      /* term  */
  YYSYMBOL_moreMulOp = 80,                 /* moreMulOp  */
  YYSYMBOL_factor = 81,                    /* factor  */
  YYSYMBOL_relOp = 82,                     /* relOp  */
  YYSYMBOL_sign = 83,                      /* sign  */
  YYSYMBOL_addOp = 84,                     /* addOp  */
  YYSYMBOL_mulOp = 85,                     /* mulOp  */
  YYSYMBOL_variable = 86,                  /* variable  */
  YYSYMBOL_indexedVar = 87,                /* indexedVar  */
  YYSYMBOL_constant = 88                   /* constant  */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   106

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  138

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    20,    20,    21,    24,    27,    28,    31,    32,    35,
      38,    39,    42,    43,    46,    49,    52,    53,    56,    57,
      60,    63,    66,    69,    70,    73,    74,    77,    78,    79,
      80,    83,    86,    89,    92,    93,    96,    99,   102,   103,
     106,   109,   110,   111,   114,   115,   118,   121,   122,   125,
     128,   129,   132,   135,   136,   139,   140,   141,   142,   145,
     146,   147,   148,   149,   150,   153,   154,   155,   158,   159,
     160,   163,   164,   165,   168,   169,   172,   175,   176,   177,
     178
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
  "\"end of file\"", "error", "\"invalid token\"", "PROG", "PROC", "BG",
  "END", "INT", "BOOL", "TRUE", "LP", "RP", "LSP", "RSP", "FALSE", "CC",
  "DOT", "SEMI", "VAR", "ARRAY", "OF", "DOTDOT", "IF", "THEN", "READ",
  "WRITE", "WHILE", "DO", "ELSE", "ASSIGN", "COMMA", "COLON", "ID", "NUM",
  "OR", "AND", "NOT", "EQ", "NE", "LT", "GT", "LE", "GE", "ADD", "MINUS",
  "DIV", "TIMES", "$accept", "prog", "block", "vardecs", "morevd",
  "vardec", "moreid", "type", "arrtype", "inrange", "simtype", "prodecs",
  "proc", "stmts", "comstmt", "morestm", "stmt", "simstmt", "assiStmt",
  "proStmt", "readStmt", "moreInput", "input", "writeStmt",
  "moreOutputVal", "outputVal", "structStmt", "ifStmt", "whileStmt",
  "expression", "simpExpression", "moreAddOp", "term", "moreMulOp",
  "factor", "relOp", "sign", "addOp", "mulOp", "variable", "indexedVar",
  "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-79)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-75)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      13,   -11,    28,    16,   -79,    12,     5,    23,    47,    29,
      36,   -79,    30,    55,    44,    31,    33,     5,    48,    18,
     -79,   -79,    47,    29,     3,   -79,    50,    12,     4,    56,
      58,     4,     0,   -79,    52,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,    41,   -79,   -79,   -79,   -79,   -79,    59,
     -79,   -79,   -79,     5,   -79,   -79,   -79,    51,   -22,    -1,
      40,     4,    46,     4,    18,    69,     4,    43,   -79,    18,
     -79,    37,   -79,   -79,   -79,     4,   -79,     4,   -79,   -79,
      66,   -79,    -1,     2,   -20,   -79,   -79,    53,   -79,    54,
     -79,    18,    67,    52,   -79,   -79,    60,    72,    61,   -79,
     -79,    68,   -79,   -79,   -79,   -79,   -79,    -1,   -79,   -79,
     -79,   -79,    -1,    40,    71,     4,    75,   -79,   -79,   -79,
      57,    73,    18,   -79,     2,   -20,    53,   -79,    54,   -79,
     -79,    49,   -79,   -79,   -79,   -79,   -79,   -79
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     0,     1,     6,     0,     0,    19,    11,
       0,     2,     0,     0,     0,     0,     0,     8,     0,     0,
       4,    21,    19,    11,     0,     5,     0,     6,    67,     0,
       0,    67,    32,    41,    24,    25,    27,    28,    29,    30,
      26,    42,    43,     0,    75,    18,    10,    16,    17,     0,
       9,    13,    12,     8,    20,    65,    66,     0,    47,     0,
       0,    67,     0,    67,     0,     0,    67,     0,     7,     0,
      59,    61,    64,    62,    63,    67,    78,    67,    79,    80,
      74,    77,     0,    51,    54,    55,    56,    35,    36,    39,
      40,     0,     0,    24,    22,    31,     0,     0,    44,    60,
      48,     0,    58,    70,    68,    69,    49,     0,    73,    72,
      71,    52,     0,     0,     0,    67,     0,    46,    76,    23,
       0,     0,     0,    57,    51,    54,    35,    33,    39,    37,
      15,     0,    45,    50,    53,    34,    38,    14
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -79,   -79,    64,   -79,    34,    82,    74,   -79,   -79,   -79,
     -39,    76,   -79,   -79,    81,     6,   -64,   -79,   -79,   -79,
     -79,   -31,   -17,   -79,   -28,   -14,   -79,   -79,   -79,   -25,
      27,   -21,    -3,   -19,   -78,   -79,   -79,   -79,   -79,   -58,
     -79,   -79
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     7,     8,    25,    26,    16,    50,    51,    97,
      52,    13,    14,    20,    33,    65,    34,    35,    36,    37,
      38,   114,    87,    39,   116,    89,    40,    41,    42,    90,
      58,   106,    83,   111,    84,    75,    59,   107,   112,    43,
      44,    86
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      93,    85,    88,    57,   102,    98,    62,    70,    76,    77,
      47,    48,    63,    78,    79,   108,     1,    71,    72,    73,
      74,     3,    49,    19,    85,   109,   110,   117,     4,   -74,
       6,    80,    81,     5,   125,    82,   103,     9,    92,    11,
      28,    95,    29,    30,    31,   104,   105,    55,    56,    85,
      32,    12,   101,    17,    85,    88,    47,    48,   132,    15,
      19,    22,    18,    23,    24,    27,    60,    53,    61,    64,
      66,    67,    80,    91,    69,    94,    96,    99,    63,   123,
     118,   120,   127,   113,   115,   121,   129,    68,    10,   122,
     130,    54,   137,   131,    21,   135,   126,    46,    45,   119,
     136,   128,   100,   133,   124,     0,   134
};

static const yytype_int16 yycheck[] =
{
      64,    59,    60,    28,    82,    69,    31,    29,     9,    10,
       7,     8,    12,    14,    15,    35,     3,    39,    40,    41,
      42,    32,    19,     5,    82,    45,    46,    91,     0,    29,
      18,    32,    33,    17,   112,    36,    34,    32,    63,    16,
      22,    66,    24,    25,    26,    43,    44,    43,    44,   107,
      32,     4,    77,    17,   112,   113,     7,     8,   122,    30,
       5,    17,    32,    32,    31,    17,    10,    17,    10,    17,
      29,    12,    32,    27,    23,     6,    33,    40,    12,    11,
      13,    21,    11,    30,    30,    13,    11,    53,     6,    28,
      33,    27,   131,    20,    13,   126,   113,    23,    22,    93,
     128,   115,    75,   124,   107,    -1,   125
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    48,    32,     0,    17,    18,    49,    50,    32,
      52,    16,     4,    58,    59,    30,    53,    17,    32,     5,
      60,    61,    17,    32,    31,    51,    52,    17,    22,    24,
      25,    26,    32,    61,    63,    64,    65,    66,    67,    70,
      73,    74,    75,    86,    87,    58,    53,     7,     8,    19,
      54,    55,    57,    17,    49,    43,    44,    76,    77,    83,
      10,    10,    76,    12,    17,    62,    29,    12,    51,    23,
      29,    39,    40,    41,    42,    82,     9,    10,    14,    15,
      32,    33,    36,    79,    81,    86,    88,    69,    86,    72,
      76,    27,    76,    63,     6,    76,    33,    56,    63,    40,
      77,    76,    81,    34,    43,    44,    78,    84,    35,    45,
      46,    80,    85,    30,    68,    30,    71,    63,    13,    62,
      21,    13,    28,    11,    79,    81,    69,    11,    72,    11,
      33,    20,    63,    78,    80,    68,    71,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    48,    49,    50,    50,    51,    51,    52,
      53,    53,    54,    54,    55,    56,    57,    57,    58,    58,
      59,    60,    61,    62,    62,    63,    63,    64,    64,    64,
      64,    65,    66,    67,    68,    68,    69,    70,    71,    71,
      72,    73,    73,    73,    74,    74,    75,    76,    76,    77,
      78,    78,    79,    80,    80,    81,    81,    81,    81,    82,
      82,    82,    82,    82,    82,    83,    83,    83,    84,    84,
      84,    85,    85,    85,    86,    86,    87,    88,    88,    88,
      88
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     0,     3,     4,     0,     3,     0,     4,
       3,     0,     1,     1,     6,     3,     1,     1,     3,     0,
       4,     1,     4,     3,     0,     1,     1,     1,     1,     1,
       1,     3,     1,     5,     3,     0,     1,     5,     3,     0,
       1,     1,     1,     1,     4,     6,     4,     1,     3,     3,
       3,     0,     2,     3,     0,     1,     1,     3,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1
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
  case 2: /* prog: PROG ID SEMI block DOT  */
#line 20 "p2c_yacc.y"
                                       {printf("prog => PROG ID SEMI block DOT \n********Parsed OK!**********\n");}
#line 1246 "p2c_yacc.c"
    break;

  case 3: /* prog: %empty  */
#line 21 "p2c_yacc.y"
                        {printf("********Parsing failed! \n");}
#line 1252 "p2c_yacc.c"
    break;

  case 4: /* block: vardecs prodecs stmts  */
#line 24 "p2c_yacc.y"
                                      {printf("block=>vardecs prodecs stmts \n");}
#line 1258 "p2c_yacc.c"
    break;

  case 5: /* vardecs: VAR vardec SEMI morevd  */
#line 27 "p2c_yacc.y"
                                       {printf("vardecs => VAR vardec SEMI morevd \n");}
#line 1264 "p2c_yacc.c"
    break;

  case 6: /* vardecs: %empty  */
#line 28 "p2c_yacc.y"
                        {printf("vardecs => Null \n");}
#line 1270 "p2c_yacc.c"
    break;

  case 7: /* morevd: vardec SEMI morevd  */
#line 31 "p2c_yacc.y"
                                        {printf("morevd => vardec SEMI morevd \n");}
#line 1276 "p2c_yacc.c"
    break;

  case 8: /* morevd: %empty  */
#line 32 "p2c_yacc.y"
                        {printf("morevd => Null \n");}
#line 1282 "p2c_yacc.c"
    break;

  case 9: /* vardec: ID moreid COLON type  */
#line 35 "p2c_yacc.y"
                                     {printf("vardec => ID moreid COLON type\n");}
#line 1288 "p2c_yacc.c"
    break;

  case 10: /* moreid: COMMA ID moreid  */
#line 38 "p2c_yacc.y"
                                {printf("moreid	=>	COMMA ID moreid \n");}
#line 1294 "p2c_yacc.c"
    break;

  case 11: /* moreid: %empty  */
#line 39 "p2c_yacc.y"
                        {printf("moreid => Null \n");}
#line 1300 "p2c_yacc.c"
    break;

  case 12: /* type: simtype  */
#line 42 "p2c_yacc.y"
                        {printf("type => simtype \n");}
#line 1306 "p2c_yacc.c"
    break;

  case 13: /* type: arrtype  */
#line 43 "p2c_yacc.y"
                                {printf("type => arrtype \n");}
#line 1312 "p2c_yacc.c"
    break;

  case 14: /* arrtype: ARRAY LSP inrange RSP OF simtype  */
#line 46 "p2c_yacc.y"
                                                 {printf("arrtype => ARRAY LSP inrange RSP OF simtype \n");}
#line 1318 "p2c_yacc.c"
    break;

  case 15: /* inrange: NUM DOTDOT NUM  */
#line 49 "p2c_yacc.y"
                               {printf("inrange => NUM DOTDOT NUM \n");}
#line 1324 "p2c_yacc.c"
    break;

  case 16: /* simtype: INT  */
#line 52 "p2c_yacc.y"
                    {printf("simtype => INT \n");}
#line 1330 "p2c_yacc.c"
    break;

  case 17: /* simtype: BOOL  */
#line 53 "p2c_yacc.y"
                             {printf("simtype => BOOL \n");}
#line 1336 "p2c_yacc.c"
    break;

  case 18: /* prodecs: proc SEMI prodecs  */
#line 56 "p2c_yacc.y"
                                        {printf("prodecs => proc SEMI prodecs \n");}
#line 1342 "p2c_yacc.c"
    break;

  case 19: /* prodecs: %empty  */
#line 57 "p2c_yacc.y"
                        {printf("prodecs => Null \n");}
#line 1348 "p2c_yacc.c"
    break;

  case 20: /* proc: PROC ID SEMI block  */
#line 60 "p2c_yacc.y"
                                        {printf("proc => PROC ID SEMI block \n");}
#line 1354 "p2c_yacc.c"
    break;

  case 21: /* stmts: comstmt  */
#line 63 "p2c_yacc.y"
                        {printf("stmts => comstmt \n");}
#line 1360 "p2c_yacc.c"
    break;

  case 22: /* comstmt: BG stmt morestm END  */
#line 66 "p2c_yacc.y"
                                        {printf("comstmt => BG stmt morestm	END \n");}
#line 1366 "p2c_yacc.c"
    break;

  case 23: /* morestm: SEMI stmt morestm  */
#line 69 "p2c_yacc.y"
                                        {printf("morestm => SEMI stmt morestm \n");}
#line 1372 "p2c_yacc.c"
    break;

  case 24: /* morestm: %empty  */
#line 70 "p2c_yacc.y"
                        {printf("morestm => Null \n");}
#line 1378 "p2c_yacc.c"
    break;

  case 25: /* stmt: simstmt  */
#line 73 "p2c_yacc.y"
                        {printf("stmt => simstmt \n");}
#line 1384 "p2c_yacc.c"
    break;

  case 26: /* stmt: structStmt  */
#line 74 "p2c_yacc.y"
                             {printf("stmt => structStmt \n");}
#line 1390 "p2c_yacc.c"
    break;

  case 27: /* simstmt: assiStmt  */
#line 77 "p2c_yacc.y"
                         {printf("simstmt => assiStmt \n");}
#line 1396 "p2c_yacc.c"
    break;

  case 28: /* simstmt: proStmt  */
#line 78 "p2c_yacc.y"
                          {printf("simstmt => proStmt \n");}
#line 1402 "p2c_yacc.c"
    break;

  case 29: /* simstmt: readStmt  */
#line 79 "p2c_yacc.y"
                           {printf("simstmt => readStmt \n");}
#line 1408 "p2c_yacc.c"
    break;

  case 30: /* simstmt: writeStmt  */
#line 80 "p2c_yacc.y"
                            {printf("simstmt => writeStmt \n");}
#line 1414 "p2c_yacc.c"
    break;

  case 31: /* assiStmt: variable ASSIGN expression  */
#line 83 "p2c_yacc.y"
                                           {printf("assiStmt => variable ASSIGN expression \n");}
#line 1420 "p2c_yacc.c"
    break;

  case 32: /* proStmt: ID  */
#line 86 "p2c_yacc.y"
                   {printf("proStmt => ID \n");}
#line 1426 "p2c_yacc.c"
    break;

  case 33: /* readStmt: READ LP input moreInput RP  */
#line 89 "p2c_yacc.y"
                                           {printf("readStmt => READ LP input moreInput RP \n");}
#line 1432 "p2c_yacc.c"
    break;

  case 34: /* moreInput: COMMA input moreInput  */
#line 92 "p2c_yacc.y"
                                      {printf("moreInput => COMMA input moreInput \n");}
#line 1438 "p2c_yacc.c"
    break;

  case 35: /* moreInput: %empty  */
#line 93 "p2c_yacc.y"
                        {printf("moreInput => Null \n");}
#line 1444 "p2c_yacc.c"
    break;

  case 36: /* input: variable  */
#line 96 "p2c_yacc.y"
                         {printf("input => variable \n");}
#line 1450 "p2c_yacc.c"
    break;

  case 37: /* writeStmt: WRITE LP outputVal moreOutputVal RP  */
#line 99 "p2c_yacc.y"
                                                    {printf("writeStmt => WRITE LP outputVal moreOutputVal RP \n");}
#line 1456 "p2c_yacc.c"
    break;

  case 38: /* moreOutputVal: COMMA outputVal moreOutputVal  */
#line 102 "p2c_yacc.y"
                                              {printf("moreOutputVal => COMMA outputVal moreOutputVal \n");}
#line 1462 "p2c_yacc.c"
    break;

  case 39: /* moreOutputVal: %empty  */
#line 103 "p2c_yacc.y"
                        {printf("moreOutputVal => Null \n");}
#line 1468 "p2c_yacc.c"
    break;

  case 40: /* outputVal: expression  */
#line 106 "p2c_yacc.y"
                           {printf("outputVal => expression \n");}
#line 1474 "p2c_yacc.c"
    break;

  case 41: /* structStmt: comstmt  */
#line 109 "p2c_yacc.y"
                        {printf("structStmt => comstmt \n");}
#line 1480 "p2c_yacc.c"
    break;

  case 42: /* structStmt: ifStmt  */
#line 110 "p2c_yacc.y"
                         {printf("structStmt => ifStmt \n");}
#line 1486 "p2c_yacc.c"
    break;

  case 43: /* structStmt: whileStmt  */
#line 111 "p2c_yacc.y"
                            {printf("structStmt => whileStmt \n");}
#line 1492 "p2c_yacc.c"
    break;

  case 44: /* ifStmt: IF expression THEN stmt  */
#line 114 "p2c_yacc.y"
                                        {printf("ifStmt => IF expression THEN stmt \n");}
#line 1498 "p2c_yacc.c"
    break;

  case 45: /* ifStmt: IF expression THEN stmt ELSE stmt  */
#line 115 "p2c_yacc.y"
                                                    {printf("ifStmt => IF expression THEN stmt ELSE stmt \n");}
#line 1504 "p2c_yacc.c"
    break;

  case 46: /* whileStmt: WHILE expression DO stmt  */
#line 118 "p2c_yacc.y"
                                         {printf("whileStmt => WHILE expression DO stmt \n");}
#line 1510 "p2c_yacc.c"
    break;

  case 47: /* expression: simpExpression  */
#line 121 "p2c_yacc.y"
                               {printf("expression => simpExpression \n");}
#line 1516 "p2c_yacc.c"
    break;

  case 48: /* expression: simpExpression relOp simpExpression  */
#line 122 "p2c_yacc.y"
                                                      {printf("expression => simpExpression relOp simpExpression \n");}
#line 1522 "p2c_yacc.c"
    break;

  case 49: /* simpExpression: sign term moreAddOp  */
#line 125 "p2c_yacc.y"
                                    {printf("simpExpression => sign term moreAddOp \n");}
#line 1528 "p2c_yacc.c"
    break;

  case 50: /* moreAddOp: addOp term moreAddOp  */
#line 128 "p2c_yacc.y"
                                     {printf("moreAddOp => addOp term moreAddOp \n");}
#line 1534 "p2c_yacc.c"
    break;

  case 51: /* moreAddOp: %empty  */
#line 129 "p2c_yacc.y"
                        {printf("moreAddOp => Null \n");}
#line 1540 "p2c_yacc.c"
    break;

  case 52: /* term: factor moreMulOp  */
#line 132 "p2c_yacc.y"
                                 {printf("term => factor moreMulOp \n");}
#line 1546 "p2c_yacc.c"
    break;

  case 53: /* moreMulOp: mulOp factor moreMulOp  */
#line 135 "p2c_yacc.y"
                                       {printf("moreMulOp => mulOp factor moreMulOp \n");}
#line 1552 "p2c_yacc.c"
    break;

  case 54: /* moreMulOp: %empty  */
#line 136 "p2c_yacc.y"
                        {printf("moreMulOp => Null \n");}
#line 1558 "p2c_yacc.c"
    break;

  case 55: /* factor: variable  */
#line 139 "p2c_yacc.y"
                         {printf("factor => variable \n");}
#line 1564 "p2c_yacc.c"
    break;

  case 56: /* factor: constant  */
#line 140 "p2c_yacc.y"
                           {printf("factor => constant \n");}
#line 1570 "p2c_yacc.c"
    break;

  case 57: /* factor: LP expression RP  */
#line 141 "p2c_yacc.y"
                                   {printf("factor => RLP expression RP \n");}
#line 1576 "p2c_yacc.c"
    break;

  case 58: /* factor: NOT factor  */
#line 142 "p2c_yacc.y"
                             {printf("factor => NOT factor \n");}
#line 1582 "p2c_yacc.c"
    break;

  case 59: /* relOp: ASSIGN  */
#line 145 "p2c_yacc.y"
                       {printf("relOp => ASSIGN \n");}
#line 1588 "p2c_yacc.c"
    break;

  case 60: /* relOp: LT GT  */
#line 146 "p2c_yacc.y"
                        {printf("relOp => LT GT \n");}
#line 1594 "p2c_yacc.c"
    break;

  case 61: /* relOp: LT  */
#line 147 "p2c_yacc.y"
                     {printf("relOp => LT \n");}
#line 1600 "p2c_yacc.c"
    break;

  case 62: /* relOp: LE  */
#line 148 "p2c_yacc.y"
                     {printf("relOp => LE \n");}
#line 1606 "p2c_yacc.c"
    break;

  case 63: /* relOp: GE  */
#line 149 "p2c_yacc.y"
                     {printf("relOp => GE \n");}
#line 1612 "p2c_yacc.c"
    break;

  case 64: /* relOp: GT  */
#line 150 "p2c_yacc.y"
                     {printf("relOp => GT \n");}
#line 1618 "p2c_yacc.c"
    break;

  case 65: /* sign: ADD  */
#line 153 "p2c_yacc.y"
                    {printf("sign => ADD \n");}
#line 1624 "p2c_yacc.c"
    break;

  case 66: /* sign: MINUS  */
#line 154 "p2c_yacc.y"
                        {printf("sign => MINUS \n");}
#line 1630 "p2c_yacc.c"
    break;

  case 67: /* sign: %empty  */
#line 155 "p2c_yacc.y"
                  {printf("sign => Null \n");}
#line 1636 "p2c_yacc.c"
    break;

  case 68: /* addOp: ADD  */
#line 158 "p2c_yacc.y"
                    {printf("addOp => ADD \n");}
#line 1642 "p2c_yacc.c"
    break;

  case 69: /* addOp: MINUS  */
#line 159 "p2c_yacc.y"
                        {printf("addOp => MINUS \n");}
#line 1648 "p2c_yacc.c"
    break;

  case 70: /* addOp: OR  */
#line 160 "p2c_yacc.y"
                     {printf("addOp => OR \n");}
#line 1654 "p2c_yacc.c"
    break;

  case 71: /* mulOp: TIMES  */
#line 163 "p2c_yacc.y"
                      {printf("mulOp => TIMES \n");}
#line 1660 "p2c_yacc.c"
    break;

  case 72: /* mulOp: DIV  */
#line 164 "p2c_yacc.y"
                      {printf("mulOp => DIV \n");}
#line 1666 "p2c_yacc.c"
    break;

  case 73: /* mulOp: AND  */
#line 165 "p2c_yacc.y"
                      {printf("mulOp => AND \n");}
#line 1672 "p2c_yacc.c"
    break;

  case 74: /* variable: ID  */
#line 168 "p2c_yacc.y"
                   {printf("variable => ID \n");}
#line 1678 "p2c_yacc.c"
    break;

  case 75: /* variable: indexedVar  */
#line 169 "p2c_yacc.y"
                             {printf("variable => indexedVar \n");}
#line 1684 "p2c_yacc.c"
    break;

  case 76: /* indexedVar: ID LSP expression RSP  */
#line 172 "p2c_yacc.y"
                                      {printf("indexedVar => expression \n");}
#line 1690 "p2c_yacc.c"
    break;

  case 77: /* constant: NUM  */
#line 175 "p2c_yacc.y"
                    {printf("constant => NUM \n");}
#line 1696 "p2c_yacc.c"
    break;

  case 78: /* constant: TRUE  */
#line 176 "p2c_yacc.y"
                       {printf("constant => TRUE \n");}
#line 1702 "p2c_yacc.c"
    break;

  case 79: /* constant: FALSE  */
#line 177 "p2c_yacc.y"
                        {printf("constant => FALSE \n");}
#line 1708 "p2c_yacc.c"
    break;

  case 80: /* constant: CC  */
#line 178 "p2c_yacc.y"
                     {printf("constant => CC \n");}
#line 1714 "p2c_yacc.c"
    break;


#line 1718 "p2c_yacc.c"

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

#line 180 "p2c_yacc.y"


int yyerror(char *s)
{
	printf("%s\n",s);
        return 1;
}

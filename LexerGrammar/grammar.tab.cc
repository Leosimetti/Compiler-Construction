/* A Bison parser, made by GNU Bison 3.7.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





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

#include "grammar.tab.hh"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_ASSIGNMENT = 3,           /* TOKEN_ASSIGNMENT  */
  YYSYMBOL_TOKEN_FUNCTOR = 4,              /* TOKEN_FUNCTOR  */
  YYSYMBOL_TOKEN_EOF = 5,                  /* TOKEN_EOF  */
  YYSYMBOL_TOKEN_UNKNOWN = 6,              /* TOKEN_UNKNOWN  */
  YYSYMBOL_TOKEN_IDENTIFIER = 7,           /* TOKEN_IDENTIFIER  */
  YYSYMBOL_TOKEN_INT_LITERAL = 8,          /* TOKEN_INT_LITERAL  */
  YYSYMBOL_TOKEN_REAL_LITERAL = 9,         /* TOKEN_REAL_LITERAL  */
  YYSYMBOL_TOKEN_STRING_LITERAL = 10,      /* TOKEN_STRING_LITERAL  */
  YYSYMBOL_TOKEN_TRUE = 11,                /* TOKEN_TRUE  */
  YYSYMBOL_TOKEN_FALSE = 12,               /* TOKEN_FALSE  */
  YYSYMBOL_TOKEN_FUNC = 13,                /* TOKEN_FUNC  */
  YYSYMBOL_TOKEN_END = 14,                 /* TOKEN_END  */
  YYSYMBOL_TOKEN_IF = 15,                  /* TOKEN_IF  */
  YYSYMBOL_TOKEN_THEN = 16,                /* TOKEN_THEN  */
  YYSYMBOL_TOKEN_ELSE = 17,                /* TOKEN_ELSE  */
  YYSYMBOL_TOKEN_PRINT = 18,               /* TOKEN_PRINT  */
  YYSYMBOL_TOKEN_RETURN = 19,              /* TOKEN_RETURN  */
  YYSYMBOL_TOKEN_LOOP = 20,                /* TOKEN_LOOP  */
  YYSYMBOL_TOKEN_VAR = 21,                 /* TOKEN_VAR  */
  YYSYMBOL_TOKEN_WHILE = 22,               /* TOKEN_WHILE  */
  YYSYMBOL_TOKEN_FOR = 23,                 /* TOKEN_FOR  */
  YYSYMBOL_TOKEN_IN = 24,                  /* TOKEN_IN  */
  YYSYMBOL_TOKEN_AND = 25,                 /* TOKEN_AND  */
  YYSYMBOL_TOKEN_OR = 26,                  /* TOKEN_OR  */
  YYSYMBOL_TOKEN_XOR = 27,                 /* TOKEN_XOR  */
  YYSYMBOL_TOKEN_NOT = 28,                 /* TOKEN_NOT  */
  YYSYMBOL_TOKEN_IS = 29,                  /* TOKEN_IS  */
  YYSYMBOL_TOKEN_EMPTY = 30,               /* TOKEN_EMPTY  */
  YYSYMBOL_TOKEN_INT = 31,                 /* TOKEN_INT  */
  YYSYMBOL_TOKEN_REAL = 32,                /* TOKEN_REAL  */
  YYSYMBOL_TOKEN_BOOL = 33,                /* TOKEN_BOOL  */
  YYSYMBOL_TOKEN_STRING = 34,              /* TOKEN_STRING  */
  YYSYMBOL_TOKEN_LPAREN = 35,              /* TOKEN_LPAREN  */
  YYSYMBOL_TOKEN_RPAREN = 36,              /* TOKEN_RPAREN  */
  YYSYMBOL_TOKEN_LSQUARE = 37,             /* TOKEN_LSQUARE  */
  YYSYMBOL_TOKEN_RSQUARE = 38,             /* TOKEN_RSQUARE  */
  YYSYMBOL_TOKEN_LCURLY = 39,              /* TOKEN_LCURLY  */
  YYSYMBOL_TOKEN_RCURLY = 40,              /* TOKEN_RCURLY  */
  YYSYMBOL_TOKEN_SEMI = 41,                /* TOKEN_SEMI  */
  YYSYMBOL_TOKEN_COMMA = 42,               /* TOKEN_COMMA  */
  YYSYMBOL_TOKEN_DOT = 43,                 /* TOKEN_DOT  */
  YYSYMBOL_TOKEN_PLUS = 44,                /* TOKEN_PLUS  */
  YYSYMBOL_TOKEN_MINUS = 45,               /* TOKEN_MINUS  */
  YYSYMBOL_TOKEN_MULT = 46,                /* TOKEN_MULT  */
  YYSYMBOL_TOKEN_DIV = 47,                 /* TOKEN_DIV  */
  YYSYMBOL_TOKEN_EQUAL = 48,               /* TOKEN_EQUAL  */
  YYSYMBOL_TOKEN_NEQ = 49,                 /* TOKEN_NEQ  */
  YYSYMBOL_TOKEN_LESS = 50,                /* TOKEN_LESS  */
  YYSYMBOL_TOKEN_LEQ = 51,                 /* TOKEN_LEQ  */
  YYSYMBOL_TOKEN_GREAT = 52,               /* TOKEN_GREAT  */
  YYSYMBOL_TOKEN_GEQ = 53,                 /* TOKEN_GEQ  */
  YYSYMBOL_TOKEN_INCREMENT = 54,           /* TOKEN_INCREMENT  */
  YYSYMBOL_TOKEN_READINT = 55,             /* TOKEN_READINT  */
  YYSYMBOL_TOKEN_READREAL = 56,            /* TOKEN_READREAL  */
  YYSYMBOL_TOKEN_READSTRING = 57,          /* TOKEN_READSTRING  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_Program = 59,                   /* Program  */
  YYSYMBOL_Body = 60,                      /* Body  */
  YYSYMBOL_Declaration = 61,               /* Declaration  */
  YYSYMBOL_Expression = 62,                /* Expression  */
  YYSYMBOL_Relation = 63,                  /* Relation  */
  YYSYMBOL_Factor = 64,                    /* Factor  */
  YYSYMBOL_Term = 65,                      /* Term  */
  YYSYMBOL_Unary = 66,                     /* Unary  */
  YYSYMBOL_Primary = 67,                   /* Primary  */
  YYSYMBOL_Tails = 68,                     /* Tails  */
  YYSYMBOL_Tail = 69,                      /* Tail  */
  YYSYMBOL_Statement = 70,                 /* Statement  */
  YYSYMBOL_Assignment = 71,                /* Assignment  */
  YYSYMBOL_Print = 72,                     /* Print  */
  YYSYMBOL_Expressions = 73,               /* Expressions  */
  YYSYMBOL_Return = 74,                    /* Return  */
  YYSYMBOL_If = 75,                        /* If  */
  YYSYMBOL_Loop = 76,                      /* Loop  */
  YYSYMBOL_LoopBody = 77,                  /* LoopBody  */
  YYSYMBOL_TypeIndicator = 78,             /* TypeIndicator  */
  YYSYMBOL_Literal = 79,                   /* Literal  */
  YYSYMBOL_ArrayLiteral = 80,              /* ArrayLiteral  */
  YYSYMBOL_TupleLiteral = 81,              /* TupleLiteral  */
  YYSYMBOL_TupleTail = 82,                 /* TupleTail  */
  YYSYMBOL_FunctionLiteral = 83,           /* FunctionLiteral  */
  YYSYMBOL_Parameters = 84,                /* Parameters  */
  YYSYMBOL_Identifiers = 85,               /* Identifiers  */
  YYSYMBOL_FunBody = 86                    /* FunBody  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 4 "grammar.yy"

    #include <fstream>
    #include "Lexer.h"
    #include <sstream>
    #include <iostream>
    int yylex (YYSTYPE *lvalp);
    void yyerror(const char *error);

#line 199 "grammar.tab.cc"

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   238

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  168

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    86,    86,    88,    89,    90,    91,    93,    94,    96,
      97,    98,    99,   101,   102,   103,   104,   105,   106,   107,
     109,   110,   111,   113,   114,   115,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   128,   129,   130,   131,
     133,   134,   136,   137,   138,   139,   141,   142,   143,   144,
     145,   147,   149,   151,   152,   154,   155,   157,   158,   160,
     161,   163,   165,   166,   167,   168,   169,   170,   171,   172,
     174,   175,   176,   177,   178,   179,   180,   181,   183,   184,
     186,   187,   188,   190,   191,   192,   194,   195,   197,   199,
     200,   201,   202
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
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_ASSIGNMENT",
  "TOKEN_FUNCTOR", "TOKEN_EOF", "TOKEN_UNKNOWN", "TOKEN_IDENTIFIER",
  "TOKEN_INT_LITERAL", "TOKEN_REAL_LITERAL", "TOKEN_STRING_LITERAL",
  "TOKEN_TRUE", "TOKEN_FALSE", "TOKEN_FUNC", "TOKEN_END", "TOKEN_IF",
  "TOKEN_THEN", "TOKEN_ELSE", "TOKEN_PRINT", "TOKEN_RETURN", "TOKEN_LOOP",
  "TOKEN_VAR", "TOKEN_WHILE", "TOKEN_FOR", "TOKEN_IN", "TOKEN_AND",
  "TOKEN_OR", "TOKEN_XOR", "TOKEN_NOT", "TOKEN_IS", "TOKEN_EMPTY",
  "TOKEN_INT", "TOKEN_REAL", "TOKEN_BOOL", "TOKEN_STRING", "TOKEN_LPAREN",
  "TOKEN_RPAREN", "TOKEN_LSQUARE", "TOKEN_RSQUARE", "TOKEN_LCURLY",
  "TOKEN_RCURLY", "TOKEN_SEMI", "TOKEN_COMMA", "TOKEN_DOT", "TOKEN_PLUS",
  "TOKEN_MINUS", "TOKEN_MULT", "TOKEN_DIV", "TOKEN_EQUAL", "TOKEN_NEQ",
  "TOKEN_LESS", "TOKEN_LEQ", "TOKEN_GREAT", "TOKEN_GEQ", "TOKEN_INCREMENT",
  "TOKEN_READINT", "TOKEN_READREAL", "TOKEN_READSTRING", "$accept",
  "Program", "Body", "Declaration", "Expression", "Relation", "Factor",
  "Term", "Unary", "Primary", "Tails", "Tail", "Statement", "Assignment",
  "Print", "Expressions", "Return", "If", "Loop", "LoopBody",
  "TypeIndicator", "Literal", "ArrayLiteral", "TupleLiteral", "TupleTail",
  "FunctionLiteral", "Parameters", "Identifiers", "FunBody", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
#endif

#define YYPACT_NINF (-135)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      45,    40,  -135,  -135,  -135,  -135,  -135,    16,   169,   169,
     104,    21,   169,    39,    14,   169,   155,     4,    14,    14,
    -135,  -135,  -135,    23,  -135,    45,    45,    82,   121,   -11,
      -8,    12,    45,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,   169,   169,    35,  -135,    40,   169,    45,    58,
      33,  -135,    60,    52,    44,    47,  -135,    50,     9,    73,
      70,    67,    74,  -135,    59,     7,  -135,    77,    89,  -135,
    -135,  -135,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,    92,  -135,    85,   102,
    -135,  -135,  -135,  -135,   116,   100,   108,  -135,    45,   169,
    -135,  -135,   169,  -135,    45,  -135,    92,    92,  -135,  -135,
     169,  -135,   139,  -135,    92,    92,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,   106,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,    58,  -135,    10,  -135,   109,   137,    73,  -135,
      32,    19,  -135,  -135,  -135,  -135,  -135,    45,  -135,  -135,
    -135,  -135,   169,  -135,   138,    32,  -135,  -135
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,    40,    70,    71,    74,    72,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,     0,     2,     3,     3,     9,    13,    20,
      23,    26,     3,    46,    47,    48,    49,    50,    30,    75,
      76,    77,     0,     0,     0,    36,    40,     0,     3,     0,
       0,    86,     0,    26,    53,     0,    56,     0,     0,     0,
       0,    29,     0,    78,     0,     0,    80,    27,    28,     1,
       4,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,     0,
      43,    42,    41,    92,     0,    89,     0,    87,     3,     0,
      52,    55,     0,     7,     3,    59,     0,     0,    31,    79,
       0,    83,     0,    81,     0,     0,    10,    11,    12,    18,
      19,    14,    15,    16,    17,    21,    22,    24,    25,     0,
      69,    66,    62,    63,    64,    65,    35,    67,    68,    45,
      44,    91,     0,    88,     0,    54,     0,     0,     0,    34,
       0,     0,    32,    33,    51,    90,    57,     3,     8,    61,
      60,    82,     0,    84,     0,     0,    58,    85
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,   -19,  -135,    -7,    61,   156,    53,  -135,     0,
     107,  -135,  -135,  -135,  -135,   -12,  -135,  -135,  -135,     6,
      81,  -135,    13,   115,  -134,  -135,  -135,    42,   125
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    53,
      45,    46,    32,    33,    34,    55,    35,    36,    37,   105,
     136,    38,    39,    40,   113,    41,    50,    96,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      31,    52,    54,    57,    64,    59,    70,    71,    62,    54,
     110,    65,   102,    87,    61,    85,   161,   163,    67,    68,
      47,     1,   162,    69,   156,    31,    31,   157,    58,    94,
      88,   167,    31,    81,    82,    54,    89,    47,    83,    84,
      93,    86,    90,    91,    66,    48,    60,   111,    31,   112,
     103,    49,     1,     2,     3,     4,     5,     6,     7,   111,
       8,   112,    48,     9,    10,    95,    11,    12,    13,    20,
      21,    22,   111,    14,   112,    42,    98,    43,   129,   144,
      15,    86,    16,    44,    17,   147,    99,   145,   100,    18,
      19,   101,    54,   104,   106,   146,   107,   109,    31,   137,
      20,    21,    22,   150,    31,   130,   114,    72,    73,    74,
     108,     1,     2,     3,     4,     5,     6,     7,   115,   137,
     137,   139,   131,   132,   133,   134,   135,   137,   137,    16,
     141,    17,    14,   116,   117,   118,   127,   128,   164,    15,
     140,    16,   142,    17,   143,    56,   151,   154,    18,    19,
     158,   159,   166,    92,   160,   165,     0,    31,     0,    20,
      21,    22,     1,     2,     3,     4,     5,     6,     7,    75,
      76,    77,    78,    79,    80,    97,     1,     2,     3,     4,
       5,     6,     7,    14,   155,     0,     0,   148,   149,     0,
      15,     0,    16,    63,    17,   152,   153,    14,     0,    18,
      19,   138,     0,     0,    15,     0,    16,     0,    17,     0,
      20,    21,    22,    18,    19,     0,     0,     0,     0,     0,
       0,   138,   138,     0,    20,    21,    22,     0,     0,   138,
     138,   119,   120,   121,   122,   123,   124,   125,   126
};

static const yytype_int16 yycheck[] =
{
       0,     8,     9,    10,    16,    12,    25,    26,    15,    16,
       3,     7,     3,    32,    14,     3,   150,   151,    18,    19,
       4,     7,     3,     0,    14,    25,    26,    17,     7,    48,
      42,   165,    32,    44,    45,    42,    43,     4,    46,    47,
      47,    29,     7,     8,    40,    29,     7,    40,    48,    42,
      41,    35,     7,     8,     9,    10,    11,    12,    13,    40,
      15,    42,    29,    18,    19,     7,    21,    22,    23,    55,
      56,    57,    40,    28,    42,    35,    16,    37,    85,    98,
      35,    29,    37,    43,    39,   104,    42,    99,    41,    44,
      45,    41,    99,    20,    24,   102,    29,    38,    98,    86,
      55,    56,    57,   110,   104,    13,    29,    25,    26,    27,
      36,     7,     8,     9,    10,    11,    12,    13,    29,   106,
     107,    36,    30,    31,    32,    33,    34,   114,   115,    37,
      14,    39,    28,    72,    73,    74,    83,    84,   157,    35,
      38,    37,    42,    39,    36,    41,     7,    41,    44,    45,
      41,    14,    14,    46,   148,   162,    -1,   157,    -1,    55,
      56,    57,     7,     8,     9,    10,    11,    12,    13,    48,
      49,    50,    51,    52,    53,    50,     7,     8,     9,    10,
      11,    12,    13,    28,   142,    -1,    -1,   106,   107,    -1,
      35,    -1,    37,    38,    39,   114,   115,    28,    -1,    44,
      45,    86,    -1,    -1,    35,    -1,    37,    -1,    39,    -1,
      55,    56,    57,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,   106,   107,    -1,    55,    56,    57,    -1,    -1,   114,
     115,    75,    76,    77,    78,    79,    80,    81,    82
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,     8,     9,    10,    11,    12,    13,    15,    18,
      19,    21,    22,    23,    28,    35,    37,    39,    44,    45,
      55,    56,    57,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    70,    71,    72,    74,    75,    76,    79,    80,
      81,    83,    35,    37,    43,    68,    69,     4,    29,    35,
      84,    86,    62,    67,    62,    73,    41,    62,     7,    62,
       7,    67,    62,    38,    73,     7,    40,    67,    67,     0,
      60,    60,    25,    26,    27,    48,    49,    50,    51,    52,
      53,    44,    45,    46,    47,     3,    29,    60,    73,    62,
       7,     8,    68,    62,    60,     7,    85,    86,    16,    42,
      41,    41,     3,    41,    20,    77,    24,    29,    36,    38,
       3,    40,    42,    82,    29,    29,    63,    63,    63,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    65,    62,
      13,    30,    31,    32,    33,    34,    78,    80,    81,    36,
      38,    14,    42,    36,    60,    73,    62,    60,    78,    78,
      62,     7,    78,    78,    41,    85,    14,    17,    41,    14,
      77,    82,     3,    82,    60,    62,    14,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    60,    60,    60,    60,    61,    61,    62,
      62,    62,    62,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    64,    65,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    67,    67,
      68,    68,    69,    69,    69,    69,    70,    70,    70,    70,
      70,    71,    72,    73,    73,    74,    74,    75,    75,    76,
      76,    77,    78,    78,    78,    78,    78,    78,    78,    78,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      81,    81,    81,    82,    82,    82,    83,    83,    84,    85,
      85,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     2,     3,     5,     1,
       3,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     2,     2,     2,
       1,     3,     4,     4,     4,     3,     2,     1,     1,     1,
       0,     2,     2,     2,     3,     3,     1,     1,     1,     1,
       1,     4,     3,     1,     3,     3,     2,     5,     7,     3,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     3,     5,     1,     3,     5,     2,     3,     3,     1,
       3,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
      yychar = yylex (&yylval);
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

#line 1290 "grammar.tab.cc"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 205 "grammar.yy"

std::string srcInput;
std::vector<Token> list;
std::vector<Token>::iterator it;
int main(int argc, char *argv[]) {
    
    if(argc==1) {
        printf("\nRun with source file: ./a.out <source_file>");
        exit(0);
    } else if(argc==2) { 
        srcInput = argv[1];
    } 
    
    //Reading the source code
    std::ifstream sourceFile;
    std::string sourceCode;
    sourceFile.open(srcInput);
    std::string str;

    while(getline(sourceFile, str)){
        sourceCode += (str + "\n"); // reading data
    }
    sourceFile.close();
    
    Lexer sas = Lexer(sourceCode);
    
    while (sas.getNextToken().type != YYEOF);
    list = sas.getTokenList();
    return yyparse();
}

void yyerror(const char *error){
    std::cout << error << std::endl;
}



int yylex (YYSTYPE *lvalp) {
  it = list.begin();
  unsigned int _type = (*it).type;
  std::string _value = (*it).value;
  unsigned int _lineNo = (*it).line;
  unsigned int _column = (*it).position;
  if (_type == YYEOF) {
    return YYEOF;
  }
  if (_type == YYUNDEF) {
    std::cout << _type << " Undefined token " << _value << std::endl;
    return _type;
  }
  list.erase(it);
  std::cout << _type << " - " << _value << " [ " << _lineNo << ", " << _column << " ] " << std::endl;
  return _type;
}

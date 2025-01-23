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
#line 1 "dart_parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semantic/semantic.h"  // Ensure this is the correct path

extern int yylex(void);  // Declare the lexer function

// Error reporting function
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}


#line 86 "dart_parser.tab.c"

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

#include "dart_parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VOID = 3,                       /* VOID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_DOUBLE = 5,                     /* DOUBLE  */
  YYSYMBOL_BOOL = 6,                       /* BOOL  */
  YYSYMBOL_STRING = 7,                     /* STRING  */
  YYSYMBOL_DYNAMIC = 8,                    /* DYNAMIC  */
  YYSYMBOL_IDENTIFIER = 9,                 /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 10,            /* STRING_LITERAL  */
  YYSYMBOL_CHAR_LITERAL = 11,              /* CHAR_LITERAL  */
  YYSYMBOL_NUMBER = 12,                    /* NUMBER  */
  YYSYMBOL_TRUE = 13,                      /* TRUE  */
  YYSYMBOL_FALSE = 14,                     /* FALSE  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_WHILE = 17,                     /* WHILE  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 20,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_DO = 22,                        /* DO  */
  YYSYMBOL_TRY = 23,                       /* TRY  */
  YYSYMBOL_CATCH = 24,                     /* CATCH  */
  YYSYMBOL_INCREMENT = 25,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 26,                 /* DECREMENT  */
  YYSYMBOL_PLUS = 27,                      /* PLUS  */
  YYSYMBOL_MINUS = 28,                     /* MINUS  */
  YYSYMBOL_MULT = 29,                      /* MULT  */
  YYSYMBOL_DIV = 30,                       /* DIV  */
  YYSYMBOL_MOD = 31,                       /* MOD  */
  YYSYMBOL_ERROR = 32,                     /* ERROR  */
  YYSYMBOL_EQ = 33,                        /* EQ  */
  YYSYMBOL_NEQ = 34,                       /* NEQ  */
  YYSYMBOL_GT = 35,                        /* GT  */
  YYSYMBOL_LT = 36,                        /* LT  */
  YYSYMBOL_GTE = 37,                       /* GTE  */
  YYSYMBOL_LTE = 38,                       /* LTE  */
  YYSYMBOL_ASSIGN = 39,                    /* ASSIGN  */
  YYSYMBOL_DEFAULT = 40,                   /* DEFAULT  */
  YYSYMBOL_CASE = 41,                      /* CASE  */
  YYSYMBOL_SWITCH = 42,                    /* SWITCH  */
  YYSYMBOL_AND = 43,                       /* AND  */
  YYSYMBOL_OR = 44,                        /* OR  */
  YYSYMBOL_NOT = 45,                       /* NOT  */
  YYSYMBOL_SEMICOLON = 46,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 47,                     /* COLON  */
  YYSYMBOL_COMMA = 48,                     /* COMMA  */
  YYSYMBOL_DOT = 49,                       /* DOT  */
  YYSYMBOL_LBRACE = 50,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 51,                    /* RBRACE  */
  YYSYMBOL_LPAREN = 52,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 53,                    /* RPAREN  */
  YYSYMBOL_LBRACKET = 54,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 55,                  /* RBRACKET  */
  YYSYMBOL_HASH = 56,                      /* HASH  */
  YYSYMBOL_MAIN = 57,                      /* MAIN  */
  YYSYMBOL_PRINT = 58,                     /* PRINT  */
  YYSYMBOL_FINAL = 59,                     /* FINAL  */
  YYSYMBOL_CONST = 60,                     /* CONST  */
  YYSYMBOL_VAR = 61,                       /* VAR  */
  YYSYMBOL_STATIC = 62,                    /* STATIC  */
  YYSYMBOL_QUESTION = 63,                  /* QUESTION  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_program = 65,                   /* program  */
  YYSYMBOL_statements = 66,                /* statements  */
  YYSYMBOL_statement = 67,                 /* statement  */
  YYSYMBOL_declaration = 68,               /* declaration  */
  YYSYMBOL_assignment = 69,                /* assignment  */
  YYSYMBOL_type = 70,                      /* type  */
  YYSYMBOL_if_statement = 71,              /* if_statement  */
  YYSYMBOL_optional_else = 72,             /* optional_else  */
  YYSYMBOL_while_loop = 73,                /* while_loop  */
  YYSYMBOL_for_loop = 74,                  /* for_loop  */
  YYSYMBOL_optional_declaration = 75,      /* optional_declaration  */
  YYSYMBOL_optional_expression = 76,       /* optional_expression  */
  YYSYMBOL_optional_assignment = 77,       /* optional_assignment  */
  YYSYMBOL_expression = 78,                /* expression  */
  YYSYMBOL_function_call = 79,             /* function_call  */
  YYSYMBOL_argument_list = 80              /* argument_list  */
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
#define YYLAST   316

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  136

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   318


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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    42,    43,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    60,    66,    72,    79,    86,
      95,   104,   112,   120,   128,   139,   140,   141,   142,   143,
     147,   151,   152,   156,   160,   164,   165,   169,   170,   174,
     175,   179,   182,   185,   188,   191,   194,   197,   200,   203,
     206,   209,   212,   215,   218,   224,   230,   231,   232
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
  "\"end of file\"", "error", "\"invalid token\"", "VOID", "INT",
  "DOUBLE", "BOOL", "STRING", "DYNAMIC", "IDENTIFIER", "STRING_LITERAL",
  "CHAR_LITERAL", "NUMBER", "TRUE", "FALSE", "IF", "ELSE", "WHILE", "FOR",
  "BREAK", "CONTINUE", "RETURN", "DO", "TRY", "CATCH", "INCREMENT",
  "DECREMENT", "PLUS", "MINUS", "MULT", "DIV", "MOD", "ERROR", "EQ", "NEQ",
  "GT", "LT", "GTE", "LTE", "ASSIGN", "DEFAULT", "CASE", "SWITCH", "AND",
  "OR", "NOT", "SEMICOLON", "COLON", "COMMA", "DOT", "LBRACE", "RBRACE",
  "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "HASH", "MAIN", "PRINT",
  "FINAL", "CONST", "VAR", "STATIC", "QUESTION", "$accept", "program",
  "statements", "statement", "declaration", "assignment", "type",
  "if_statement", "optional_else", "while_loop", "for_loop",
  "optional_declaration", "optional_expression", "optional_assignment",
  "expression", "function_call", "argument_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-84)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,   -51,    25,   -36,   -84,    -8,    -1,   244,   -84,   -84,
     -84,   -84,   -84,    52,    -2,     0,     1,     9,    11,    63,
       6,    93,    93,    93,     3,   -84,    13,    19,    57,   -84,
     -84,   -84,    21,    29,    44,    45,    46,    63,    63,    63,
      63,    28,   -84,   -84,    34,   -84,   -84,   -84,   -84,   -84,
      63,   113,   -84,    80,    83,    84,    85,   -84,   -84,   -84,
     -84,    66,   -84,    63,    63,    63,    63,   253,   253,   -34,
     179,   243,   -84,    60,   248,    63,    63,    63,    63,    63,
     -84,    63,    54,    69,    74,    75,    63,   253,   253,   253,
     253,    63,   -84,    72,    78,    63,   -84,   253,   253,   253,
     253,   253,   197,   100,    63,    63,    63,   253,   253,   244,
     244,   110,   253,    63,   -84,   253,   253,   253,   112,   130,
     148,   253,   142,   -84,   125,   -84,   107,   111,   -84,   115,
     244,   244,   178,   196,   -84,   -84
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,    25,    26,
      27,    28,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,    58,     0,
       0,    36,    13,    14,    42,    50,    49,    41,    51,    52,
       0,     0,    53,     0,     0,     0,     0,     2,     4,     6,
       7,    15,    11,     0,     0,     0,     0,    20,    56,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,    21,    22,    23,
      24,     0,    55,     0,     0,    38,    48,    43,    44,    45,
      46,    47,     0,     0,     0,     0,     0,    16,    57,     0,
       0,     0,    37,     0,     5,    17,    18,    19,     0,     0,
      40,    54,    32,    33,     0,    39,     0,     0,    30,     0,
       0,     0,     0,     0,    31,    34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -84,   -84,   -83,   -23,   121,    47,    16,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -35,    -7,   -84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    24,    25,    26,    27,    28,    29,   128,    30,
      31,    73,   111,   126,    51,    52,    69
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      32,    58,    67,    68,    70,    71,     3,     8,     9,    10,
      11,    12,    13,     1,    91,    74,     5,    32,    14,    92,
      15,    16,    17,    18,    19,     4,   118,   119,    87,    88,
      89,    90,     8,     9,    10,    11,    12,    54,    55,    56,
      97,    98,    99,   100,   101,     6,   102,   132,   133,     7,
      39,   107,    40,    41,    57,    42,   108,    43,    53,    59,
     112,    20,    21,    22,    23,    60,    61,    62,    63,   115,
     116,   117,    44,    45,    46,    47,    48,    49,   121,    33,
      34,    35,    36,    64,    65,    66,    38,    21,    22,    23,
      82,    37,    83,    84,    85,    58,    58,     8,     9,    10,
      11,    12,    32,    32,    38,    86,    95,   103,   104,    58,
      58,    32,    32,   105,   106,    50,     8,     9,    10,    11,
      12,    13,   109,    32,    32,    32,    32,    14,   110,    15,
      16,    17,    18,    19,     8,     9,    10,    11,    12,    13,
      75,    76,    77,    78,    79,    14,   114,    15,    16,    17,
      18,    19,    33,    34,    35,    36,   120,   124,   127,    80,
     129,   130,    72,   122,    37,   131,     0,   125,     0,     0,
      20,    21,    22,    23,     0,     0,    81,     0,     0,     0,
       0,   123,     8,     9,    10,    11,    12,    13,    20,    21,
      22,    23,     0,    14,     0,    15,    16,    17,    18,    19,
       8,     9,    10,    11,    12,    13,    75,    76,    77,    78,
      79,    14,     0,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,   134,
       0,     0,    93,     0,     0,     0,    20,    21,    22,    23,
       0,     0,    81,     0,   113,     0,     0,   135,     8,     9,
      10,    11,    12,    13,    20,    21,    22,    23,     0,    14,
      81,    15,    16,    17,    18,    19,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    75,    76,    77,    78,    79,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,     0,
       0,    96,    20,    21,    22,    23,    81,     0,     0,     0,
       0,    81,     0,     0,     0,     0,    81
};

static const yytype_int16 yycheck[] =
{
       7,    24,    37,    38,    39,    40,    57,     4,     5,     6,
       7,     8,     9,     3,    48,    50,    52,    24,    15,    53,
      17,    18,    19,    20,    21,     0,   109,   110,    63,    64,
      65,    66,     4,     5,     6,     7,     8,    21,    22,    23,
      75,    76,    77,    78,    79,    53,    81,   130,   131,    50,
      52,    86,    52,    52,    51,    46,    91,    46,    52,    46,
      95,    58,    59,    60,    61,    46,     9,    46,    39,   104,
     105,   106,     9,    10,    11,    12,    13,    14,   113,    27,
      28,    29,    30,    39,    39,    39,    52,    59,    60,    61,
      10,    39,     9,     9,     9,   118,   119,     4,     5,     6,
       7,     8,   109,   110,    52,    39,    46,    53,    39,   132,
     133,   118,   119,    39,    39,    52,     4,     5,     6,     7,
       8,     9,    50,   130,   131,   132,   133,    15,    50,    17,
      18,    19,    20,    21,     4,     5,     6,     7,     8,     9,
      27,    28,    29,    30,    31,    15,    46,    17,    18,    19,
      20,    21,    27,    28,    29,    30,    46,     9,    16,    46,
      53,    50,    41,    51,    39,    50,    -1,   120,    -1,    -1,
      58,    59,    60,    61,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    51,     4,     5,     6,     7,     8,     9,    58,    59,
      60,    61,    -1,    15,    -1,    17,    18,    19,    20,    21,
       4,     5,     6,     7,     8,     9,    27,    28,    29,    30,
      31,    15,    -1,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    51,
      -1,    -1,    53,    -1,    -1,    -1,    58,    59,    60,    61,
      -1,    -1,    63,    -1,    47,    -1,    -1,    51,     4,     5,
       6,     7,     8,     9,    58,    59,    60,    61,    -1,    15,
      63,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    27,    28,    29,    30,    31,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    53,    58,    59,    60,    61,    63,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    65,    57,     0,    52,    53,    50,     4,     5,
       6,     7,     8,     9,    15,    17,    18,    19,    20,    21,
      58,    59,    60,    61,    66,    67,    68,    69,    70,    71,
      73,    74,    79,    27,    28,    29,    30,    39,    52,    52,
      52,    52,    46,    46,     9,    10,    11,    12,    13,    14,
      52,    78,    79,    52,    70,    70,    70,    51,    67,    46,
      46,     9,    46,    39,    39,    39,    39,    78,    78,    80,
      78,    78,    68,    75,    78,    27,    28,    29,    30,    31,
      46,    63,    10,     9,     9,     9,    39,    78,    78,    78,
      78,    48,    53,    53,    53,    46,    53,    78,    78,    78,
      78,    78,    78,    53,    39,    39,    39,    78,    78,    50,
      50,    76,    78,    47,    46,    78,    78,    78,    66,    66,
      46,    78,    51,    51,     9,    69,    77,    16,    72,    53,
      50,    50,    66,    66,    51,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    68,    68,    68,
      69,    69,    69,    69,    69,    70,    70,    70,    70,    70,
      71,    72,    72,    73,    74,    75,    75,    76,    76,    77,
      77,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    79,    80,    80,    80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     1,     2,     5,     2,     2,     1,     1,
       1,     2,     3,     2,     2,     2,     4,     5,     5,     5,
       3,     4,     4,     4,     4,     1,     1,     1,     1,     1,
       8,     4,     0,     7,    11,     1,     0,     1,     0,     1,
       0,     1,     1,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     5,     4,     1,     3,     0
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
  case 15: /* declaration: type IDENTIFIER  */
#line 60 "dart_parser.y"
                    {
        if (insert_symbol((yyvsp[0].str), (yyvsp[-1].type))) {
            printf("Error: Variable '%s' already declared\n", (yyvsp[0].str));
            exit(1);
        }
    }
#line 1279 "dart_parser.tab.c"
    break;

  case 16: /* declaration: type IDENTIFIER ASSIGN expression  */
#line 66 "dart_parser.y"
                                        {
        if (insert_symbol((yyvsp[-2].str), (yyvsp[-3].type))) {
            printf("Error: Variable '%s' already declared\n", (yyvsp[-2].str));
            exit(1);
        }
    }
#line 1290 "dart_parser.tab.c"
    break;

  case 17: /* declaration: FINAL type IDENTIFIER ASSIGN expression  */
#line 72 "dart_parser.y"
                                              {
        if (insert_symbol((yyvsp[-2].str), (yyvsp[-3].type))) {
            printf("Error: Variable '%s' already declared\n", (yyvsp[-2].str));
            exit(1);
        }
        mark_as_final((yyvsp[-2].str));
    }
#line 1302 "dart_parser.tab.c"
    break;

  case 18: /* declaration: CONST type IDENTIFIER ASSIGN expression  */
#line 79 "dart_parser.y"
                                              {
        if (insert_symbol((yyvsp[-2].str), (yyvsp[-3].type))) {
            printf("Error: Variable '%s' already declared\n", (yyvsp[-2].str));
            exit(1);
        }
        mark_as_const((yyvsp[-2].str));
    }
#line 1314 "dart_parser.tab.c"
    break;

  case 19: /* declaration: VAR type IDENTIFIER ASSIGN expression  */
#line 86 "dart_parser.y"
                                            {
        if (insert_symbol((yyvsp[-2].str), (yyvsp[-3].type))) {
            printf("Error: Variable '%s' already declared\n", (yyvsp[-2].str));
            exit(1);
        }
    }
#line 1325 "dart_parser.tab.c"
    break;

  case 20: /* assignment: IDENTIFIER ASSIGN expression  */
#line 95 "dart_parser.y"
                                 {
        Symbol* symbol = lookup_symbol((yyvsp[-2].str));
        if (symbol == NULL) {
            yyerror("Undefined variable");
            exit(1);
        }
        (yyval.type) = (yyvsp[0].type);  // Assign the type of the expression to the variable
        handle_assignment((yyvsp[-2].str), (yyval.type), '=');
    }
#line 1339 "dart_parser.tab.c"
    break;

  case 21: /* assignment: IDENTIFIER PLUS ASSIGN expression  */
#line 104 "dart_parser.y"
                                        {
        Symbol* symbol = lookup_symbol((yyvsp[-3].str));
        if (symbol == NULL) {
            yyerror("Undefined variable");
            exit(1);
        }
        handle_assignment((yyvsp[-3].str), (yyval.type), '+');
    }
#line 1352 "dart_parser.tab.c"
    break;

  case 22: /* assignment: IDENTIFIER MINUS ASSIGN expression  */
#line 112 "dart_parser.y"
                                         {
        Symbol* symbol = lookup_symbol((yyvsp[-3].str));
        if (symbol == NULL) {
            yyerror("Undefined variable");
            exit(1);
        }
        handle_assignment((yyvsp[-3].str), (yyval.type), '-');
    }
#line 1365 "dart_parser.tab.c"
    break;

  case 23: /* assignment: IDENTIFIER MULT ASSIGN expression  */
#line 120 "dart_parser.y"
                                        {
        Symbol* symbol = lookup_symbol((yyvsp[-3].str));
        if (symbol == NULL) {
            yyerror("Undefined variable");
            exit(1);
        }
        handle_assignment((yyvsp[-3].str), (yyval.type), '*');
    }
#line 1378 "dart_parser.tab.c"
    break;

  case 24: /* assignment: IDENTIFIER DIV ASSIGN expression  */
#line 128 "dart_parser.y"
                                       {
        Symbol* symbol = lookup_symbol((yyvsp[-3].str));
        if (symbol == NULL) {
            yyerror("Undefined variable");
            exit(1);
        }
        handle_assignment((yyvsp[-3].str), (yyval.type), '/');
    }
#line 1391 "dart_parser.tab.c"
    break;

  case 41: /* expression: NUMBER  */
#line 179 "dart_parser.y"
           {
        (yyval.type) = TYPE_INT; // Assuming numbers are integers by default
    }
#line 1399 "dart_parser.tab.c"
    break;

  case 42: /* expression: IDENTIFIER  */
#line 182 "dart_parser.y"
                 {
        (yyval.type) = lookup_symbol((yyvsp[0].str)); // Fetch the type of the identifier
    }
#line 1407 "dart_parser.tab.c"
    break;

  case 43: /* expression: expression PLUS expression  */
#line 185 "dart_parser.y"
                                 {
        (yyval.type) = check_arithmetic((yyvsp[-2].type), (yyvsp[0].type)); // Validate and propagate the type
    }
#line 1415 "dart_parser.tab.c"
    break;

  case 44: /* expression: expression MINUS expression  */
#line 188 "dart_parser.y"
                                  {
        (yyval.type) = check_arithmetic((yyvsp[-2].type), (yyvsp[0].type));
    }
#line 1423 "dart_parser.tab.c"
    break;

  case 45: /* expression: expression MULT expression  */
#line 191 "dart_parser.y"
                                 {
        (yyval.type) = check_arithmetic((yyvsp[-2].type), (yyvsp[0].type));
    }
#line 1431 "dart_parser.tab.c"
    break;

  case 46: /* expression: expression DIV expression  */
#line 194 "dart_parser.y"
                                {
        (yyval.type) = check_arithmetic((yyvsp[-2].type), (yyvsp[0].type));
    }
#line 1439 "dart_parser.tab.c"
    break;

  case 47: /* expression: expression MOD expression  */
#line 197 "dart_parser.y"
                                {
        (yyval.type) = check_arithmetic((yyvsp[-2].type), (yyvsp[0].type));
    }
#line 1447 "dart_parser.tab.c"
    break;

  case 48: /* expression: LPAREN expression RPAREN  */
#line 200 "dart_parser.y"
                               {
        (yyval.type) = (yyvsp[-1].type); // Propagate the type from the sub-expression
    }
#line 1455 "dart_parser.tab.c"
    break;

  case 49: /* expression: CHAR_LITERAL  */
#line 203 "dart_parser.y"
                   {
        (yyval.type) = TYPE_CHAR; // Define `TYPE_CHAR` for character literals
    }
#line 1463 "dart_parser.tab.c"
    break;

  case 50: /* expression: STRING_LITERAL  */
#line 206 "dart_parser.y"
                     {
        (yyval.type) = TYPE_STRING; // Define `TYPE_STRING` for string literals
    }
#line 1471 "dart_parser.tab.c"
    break;

  case 51: /* expression: TRUE  */
#line 209 "dart_parser.y"
           {
        (yyval.type) = TYPE_BOOL; // Boolean `true`
    }
#line 1479 "dart_parser.tab.c"
    break;

  case 52: /* expression: FALSE  */
#line 212 "dart_parser.y"
            {
        (yyval.type) = TYPE_BOOL; // Boolean `false`
    }
#line 1487 "dart_parser.tab.c"
    break;

  case 53: /* expression: function_call  */
#line 215 "dart_parser.y"
                    {
        (yyval.type) = get_function_return_type((yyvsp[0].type)); // Fetch the function's return type
    }
#line 1495 "dart_parser.tab.c"
    break;

  case 54: /* expression: expression QUESTION expression COLON expression  */
#line 218 "dart_parser.y"
                                                      {
        (yyval.type) = check_ternary((yyvsp[-4].type), (yyvsp[-2].type), (yyvsp[0].type)); // Validate and propagate the type for ternary
    }
#line 1503 "dart_parser.tab.c"
    break;

  case 55: /* function_call: IDENTIFIER LPAREN argument_list RPAREN  */
#line 224 "dart_parser.y"
                                           {
        (yyval.type) = get_function_return_type((yyvsp[-3].str)); // Get the function's return type
    }
#line 1511 "dart_parser.tab.c"
    break;


#line 1515 "dart_parser.tab.c"

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

#line 235 "dart_parser.y"


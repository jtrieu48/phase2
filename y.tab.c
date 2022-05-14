/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "mini_l.y" /* yacc.c:339  */

#include <stdio.h>
extern FILE * yyin;
extern int currLine;
extern int currPos; 
void yyerror(const char * msg) {
	printf("Error: On line %d, column %d: %s \n", currLine, currPos, msg);
}

#line 76 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNCTION = 258,
    BEGINPARAMS = 259,
    ENDPARAMS = 260,
    BEGINLOCALS = 261,
    ENDLOCALS = 262,
    BEGINBODY = 263,
    ENDBODY = 264,
    INTEGER = 265,
    ARRAY = 266,
    OF = 267,
    IF = 268,
    THEN = 269,
    ENDIF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    FOR = 274,
    BEGINLOOP = 275,
    ENDLOOP = 276,
    CONTINUE = 277,
    READ = 278,
    WRITE = 279,
    TRUE = 280,
    FALSE = 281,
    ASSIGN = 282,
    SEMICOLON = 283,
    COLON = 284,
    COMMA = 285,
    LPAREN = 286,
    RPAREN = 287,
    L_SQUARE_BRACKET = 288,
    R_SQUARE_BRACKET = 289,
    RETURN = 290,
    MULT = 291,
    DIV = 292,
    MOD = 293,
    ADD = 294,
    SUB = 295,
    LT = 296,
    LTE = 297,
    GT = 298,
    GTE = 299,
    EQ = 300,
    NEQ = 301,
    NOT = 302,
    AND = 303,
    OR = 304,
    NUMBER = 305,
    IDENT = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "mini_l.y" /* yacc.c:355  */

	char * identVal;
	int numVal;

#line 173 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 190 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   175

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    27,    27,    29,    33,    34,    38,    43,    44,    46,
      49,    51,    55,    57,    61,    65,    67,    69,    72,    74,
      76,    78,    80,    82,    84,    86,    88,    92,    96,    98,
     102,   106,   110,   115,   116,   120,   124,   128,   132,   136,
     138,   142,   144,   148,   150,   152,   154,   156,   160,   165,
     167,   169,   171,   173,   175,   179,   181,   185,   186,   188,
     192,   194,   196,   198,   202,   204,   206,   208,   210,   212,
     217,   218,   222,   224,   226
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGINPARAMS", "ENDPARAMS",
  "BEGINLOCALS", "ENDLOCALS", "BEGINBODY", "ENDBODY", "INTEGER", "ARRAY",
  "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "FOR", "BEGINLOOP",
  "ENDLOOP", "CONTINUE", "READ", "WRITE", "TRUE", "FALSE", "ASSIGN",
  "SEMICOLON", "COLON", "COMMA", "LPAREN", "RPAREN", "L_SQUARE_BRACKET",
  "R_SQUARE_BRACKET", "RETURN", "MULT", "DIV", "MOD", "ADD", "SUB", "LT",
  "LTE", "GT", "GTE", "EQ", "NEQ", "NOT", "AND", "OR", "NUMBER", "IDENT",
  "$accept", "program", "functions", "function", "declarations",
  "declaration", "identifiers", "Ident", "statements", "statement", "svar",
  "sif", "swhile", "sdo", "sfor", "varLoop", "sread", "swrite",
  "scontinue", "sreturn", "bool_expr", "relation_exprs", "relation_expr",
  "ece", "comp", "expression", "addSubExpr", "multi_expr", "term",
  "expressionLoop", "var", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -74

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-74)))

#define YYTABLE_NINF -5

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      74,   -74,   -47,    20,   -74,    23,   -74,     4,   -74,   -74,
      47,   -47,    39,     6,    25,    31,    62,   -74,   -47,    80,
     -47,   -47,   -74,   -74,    46,   -74,    66,    38,    85,    83,
      92,   109,    12,    12,   103,   -47,   -74,   -47,   -47,    49,
      97,   122,    13,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   105,   124,   -74,   -74,   -74,    12,    51,    49,
     -74,   -23,    -9,    87,   -74,   -74,    40,    86,    60,   -74,
     -18,    92,   110,   108,   108,    49,   -74,    49,   -74,   -74,
      92,    49,   -74,   -26,   112,   -74,   -74,   -74,    49,    92,
      12,    12,   -74,   -74,   -74,   -74,   -74,   -74,    49,    49,
      49,   -74,    15,    15,    15,    92,   118,    90,   -47,   -74,
     -74,   114,   111,   -74,   -74,   -74,   -74,   119,   113,    87,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   121,   131,   123,
     108,   117,    49,   127,   -74,    92,   -74,    12,    12,   -74,
      49,   119,   -74,   145,   115,    -7,   128,   -74,   -74,   -47,
     -74,   134,    49,   143,    92,   144,   -74
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     2,     4,    14,     0,     1,     5,
       0,     7,     0,     0,     0,    12,     0,     9,     7,     0,
       0,     7,     8,    10,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
      72,     0,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    56,    45,    46,     0,     0,     0,
      67,    72,     0,    39,    41,    44,     0,    57,    60,    65,
       0,     0,     0,    33,    33,     0,    38,     0,     6,    17,
      16,     0,    11,     0,     0,    66,    64,    43,     0,     0,
       0,     0,    49,    51,    50,    52,    53,    54,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,    15,    27,    47,    68,    70,     0,    40,
      42,    48,    58,    59,    61,    62,    63,     0,     0,     0,
      33,    74,     0,     0,    28,     0,    30,     0,     0,    34,
       0,    70,    69,     0,    31,     0,     0,    71,    29,     0,
      73,     0,     0,     0,     0,     0,    32
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -74,   -74,   161,   -74,    -6,   -74,   147,    -2,   -41,   -74,
     -74,   -74,   -74,   -74,   -74,   -73,   -74,   -74,   -74,   -74,
     -30,    78,    79,   116,   -74,   -28,   -74,    16,   -74,    28,
     -13
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    12,    13,    14,    61,    41,    42,
      43,    44,    45,    46,    47,   109,    48,    49,    50,    51,
      62,    63,    64,    65,    98,    66,   101,    67,    68,   133,
      69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   110,   105,    70,     6,    89,   115,    17,    88,    15,
      77,    76,    22,    54,    79,    26,    15,    52,    15,    15,
       8,   149,    72,    90,    73,    74,     2,    83,    40,    84,
     106,    90,    10,    40,    18,    40,    40,    55,    56,   113,
      90,    80,    90,    57,    16,    86,    75,   111,   118,   112,
      54,    11,    58,   114,    19,    58,    40,   139,    52,    59,
     117,    20,    60,     6,   127,    60,     6,    52,    21,    40,
     121,   122,   123,    28,    -4,     1,    52,     2,    40,    27,
      75,    92,    93,    94,    95,    96,    97,    40,    29,    58,
      23,    24,    52,    30,   143,   130,   102,   103,   104,    60,
       6,    85,     6,    40,   141,    32,    40,   144,   145,    33,
      34,    35,   146,   155,    36,    37,    38,    31,   124,   125,
     126,    53,    52,    71,   153,    99,   100,    39,   134,   135,
      77,    78,    81,    40,    82,    91,   151,   107,   108,   128,
     129,    52,   136,     6,   116,   131,   116,    40,   137,   132,
     140,   138,    40,    92,    93,    94,    95,    96,    97,   142,
     148,   152,   150,   154,    90,   156,     9,    25,   119,   147,
     120,     0,     0,     0,     0,    87
};

static const yytype_int16 yycheck[] =
{
       2,    74,    20,    33,    51,    14,    32,     1,    31,    11,
      33,    39,    18,     1,     1,    21,    18,    30,    20,    21,
       0,    28,    35,    49,    37,    38,     3,    57,    30,    57,
      71,    49,    28,    35,    28,    37,    38,    25,    26,    80,
      49,    28,    49,    31,     5,    58,    31,    75,    89,    77,
       1,     4,    40,    81,    29,    40,    58,   130,    71,    47,
      88,    30,    50,    51,   105,    50,    51,    80,     6,    71,
      98,    99,   100,     7,     0,     1,    89,     3,    80,    33,
      31,    41,    42,    43,    44,    45,    46,    89,    50,    40,
      10,    11,   105,     8,   135,   108,    36,    37,    38,    50,
      51,    50,    51,   105,   132,    13,   108,   137,   138,    17,
      18,    19,   140,   154,    22,    23,    24,    34,   102,   103,
     104,    12,   135,    20,   152,    39,    40,    35,    15,    16,
      33,     9,    27,   135,    10,    48,   149,    27,    30,    21,
      50,   154,    21,    51,    32,    34,    32,   149,    17,    30,
      33,    28,   154,    41,    42,    43,    44,    45,    46,    32,
      15,    27,    34,    20,    49,    21,     5,    20,    90,   141,
      91,    -1,    -1,    -1,    -1,    59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    53,    54,    55,    51,    59,     0,    54,
      28,     4,    56,    57,    58,    59,     5,     1,    28,    29,
      30,     6,    56,    10,    11,    58,    56,    33,     7,    50,
       8,    34,    13,    17,    18,    19,    22,    23,    24,    35,
      59,    60,    61,    62,    63,    64,    65,    66,    68,    69,
      70,    71,    82,    12,     1,    25,    26,    31,    40,    47,
      50,    59,    72,    73,    74,    75,    77,    79,    80,    82,
      72,    20,    82,    82,    82,    31,    77,    33,     9,     1,
      28,    27,    10,    72,    77,    50,    82,    75,    31,    14,
      49,    48,    41,    42,    43,    44,    45,    46,    76,    39,
      40,    78,    36,    37,    38,    20,    60,    27,    30,    67,
      67,    77,    77,    60,    77,    32,    32,    77,    60,    73,
      74,    77,    77,    77,    79,    79,    79,    60,    21,    50,
      82,    34,    30,    81,    15,    16,    21,    17,    28,    67,
      33,    77,    32,    60,    72,    72,    77,    81,    15,    28,
      34,    82,    27,    77,    20,    60,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    55,    56,    56,    56,
      57,    57,    58,    58,    59,    60,    60,    60,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    62,    63,    63,
      64,    65,    66,    67,    67,    68,    69,    70,    71,    72,
      72,    73,    73,    74,    74,    74,    74,    74,    75,    76,
      76,    76,    76,    76,    76,    77,    77,    78,    78,    78,
      79,    79,    79,    79,    80,    80,    80,    80,    80,    80,
      81,    81,    82,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     2,    12,     0,     3,     2,
       3,     8,     1,     3,     1,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     5,     7,
       5,     6,    13,     0,     3,     3,     3,     1,     2,     1,
       3,     1,     3,     2,     1,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     2,     1,     0,     2,     2,
       1,     3,     3,     3,     2,     1,     2,     1,     3,     5,
       0,     3,     1,     7,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 28 "mini_l.y" /* yacc.c:1646  */
    {printf("program->functions\n");}
#line 1382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 29 "mini_l.y" /* yacc.c:1646  */
    {yyerrok; yyclearin;}
#line 1388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 33 "mini_l.y" /* yacc.c:1646  */
    {printf("functions->epsilon\n");}
#line 1394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 35 "mini_l.y" /* yacc.c:1646  */
    {printf("functions->function functions\n");}
#line 1400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 39 "mini_l.y" /* yacc.c:1646  */
    {printf("function->FUNCTION Ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");}
#line 1406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 43 "mini_l.y" /* yacc.c:1646  */
    {printf("declarations->epsilon\n");}
#line 1412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 45 "mini_l.y" /* yacc.c:1646  */
    {printf("declarations->declaration SEMICOLON declarations\n");}
#line 1418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 46 "mini_l.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 50 "mini_l.y" /* yacc.c:1646  */
    {printf("declaration->identifiers COLON INTEGER\n");}
#line 1430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 52 "mini_l.y" /* yacc.c:1646  */
    {printf("declaration->identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER %d R_SQUARE_BRACKET OF INTEGER\n", (yyvsp[-3].numVal));}
#line 1436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 56 "mini_l.y" /* yacc.c:1646  */
    {printf("identifiers->Ident\n");}
#line 1442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 58 "mini_l.y" /* yacc.c:1646  */
    {printf("identifiers->Ident COMMA identifiers\n");}
#line 1448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 62 "mini_l.y" /* yacc.c:1646  */
    {printf("Ident->IDENT %s\n", (yyvsp[0].identVal));}
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 66 "mini_l.y" /* yacc.c:1646  */
    {printf("statements->statement SEMICOLON statements\n");}
#line 1460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 68 "mini_l.y" /* yacc.c:1646  */
    {printf("statements->statement SEMICOLON\n");}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 69 "mini_l.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 73 "mini_l.y" /* yacc.c:1646  */
    {printf("statements->svar\n");}
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 75 "mini_l.y" /* yacc.c:1646  */
    {printf("statements->sif\n");}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 77 "mini_l.y" /* yacc.c:1646  */
    {printf("statements->swhile\n");}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 79 "mini_l.y" /* yacc.c:1646  */
    {printf("statements->sdo\n");}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 81 "mini_l.y" /* yacc.c:1646  */
    {printf("statements->sfor\n");}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 83 "mini_l.y" /* yacc.c:1646  */
    {printf("statements->sread\n");}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 85 "mini_l.y" /* yacc.c:1646  */
    {printf("statements->swrite\n");}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 87 "mini_l.y" /* yacc.c:1646  */
    {printf("statements->scontinue\n");}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 89 "mini_l.y" /* yacc.c:1646  */
    {printf("statements->sreturn\n");}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 93 "mini_l.y" /* yacc.c:1646  */
    {printf("svar->var ASSIGN expression\n");}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 97 "mini_l.y" /* yacc.c:1646  */
    {printf("sif->IF bool_expr THEN statements ENDIF\n");}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 99 "mini_l.y" /* yacc.c:1646  */
    {printf("sif->IF bool_expr THEN statements ELSE statements ENDIF\n");}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 103 "mini_l.y" /* yacc.c:1646  */
    {printf("swhile->WHILE bool_expr BEGINLOOP statements ENDLOOP\n");}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 107 "mini_l.y" /* yacc.c:1646  */
    {printf("sdo-> DO BEGINLOOP statements ENDLOOP WHILE bool_expr\n");}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 111 "mini_l.y" /* yacc.c:1646  */
    {printf("sfor-> FOR var ASSIGN NUMBER %d SEMI COLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP\n", (yyvsp[-9].numVal));}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 115 "mini_l.y" /* yacc.c:1646  */
    {printf("varLoop->epsilon\n");}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 117 "mini_l.y" /* yacc.c:1646  */
    {printf("varLoop-> COMMA var varLoop\n");}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 121 "mini_l.y" /* yacc.c:1646  */
    {printf("sread->READ var varLoop\n");}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 125 "mini_l.y" /* yacc.c:1646  */
    {printf("swrite->WRITE var varLoop\n");}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 129 "mini_l.y" /* yacc.c:1646  */
    {printf("scontinue->CONTINUE\n");}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 133 "mini_l.y" /* yacc.c:1646  */
    {printf("sreturn->RETURN expression\n");}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 137 "mini_l.y" /* yacc.c:1646  */
    {printf("bool_expr->relation_exprs\n");}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 139 "mini_l.y" /* yacc.c:1646  */
    {printf("bool_expr->bool_expr OR relation_exprs\n");}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 143 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_exprs->relation_expr\n");}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 145 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_exprs->relation_expres AND relation_expr\n");}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 149 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr->NOT ece\n");}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 151 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr->ece\n");}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 153 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr->TRUE\n");}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 155 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr->FALSE\n");}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 157 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr->LPAREN bool_expr RPAREN\n");}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 161 "mini_l.y" /* yacc.c:1646  */
    {printf("ece->expression comp expression\n");}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 166 "mini_l.y" /* yacc.c:1646  */
    {printf("comp->LT\n");}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 168 "mini_l.y" /* yacc.c:1646  */
    {printf("comp->GT\n");}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 170 "mini_l.y" /* yacc.c:1646  */
    {printf("comp->LTE\n");}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 172 "mini_l.y" /* yacc.c:1646  */
    {printf("comp->GTE\n");}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 174 "mini_l.y" /* yacc.c:1646  */
    {printf("comp->EQ\n");}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 176 "mini_l.y" /* yacc.c:1646  */
    {printf("comp->NEQ\n");}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 180 "mini_l.y" /* yacc.c:1646  */
    {printf("expression->multi_exp addSubExpr\n");}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 181 "mini_l.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 185 "mini_l.y" /* yacc.c:1646  */
    {printf("addSubExpr->epsilon\n");}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 187 "mini_l.y" /* yacc.c:1646  */
    {printf("addSubExpr->ADD expression\n");}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 189 "mini_l.y" /* yacc.c:1646  */
    {printf("addSubExpr->SUB expression\n");}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 193 "mini_l.y" /* yacc.c:1646  */
    {printf("multi_expr->term\n");}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 195 "mini_l.y" /* yacc.c:1646  */
    {printf("multi_expr->term MULT multi_expr\n");}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 197 "mini_l.y" /* yacc.c:1646  */
    {printf("multi_expr->term DIV multi_expr\n");}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 199 "mini_l.y" /* yacc.c:1646  */
    {printf("multi_expr->term MOD multi_expr\n");}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 203 "mini_l.y" /* yacc.c:1646  */
    {printf("term->SUB var\n");}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 205 "mini_l.y" /* yacc.c:1646  */
    {printf("term->var\n");}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 207 "mini_l.y" /* yacc.c:1646  */
    {printf("term->SUB NUMBER %d\n", (yyvsp[0].numVal));}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 209 "mini_l.y" /* yacc.c:1646  */
    {printf("term->NUMBER %d\n", (yyvsp[0].numVal));}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 211 "mini_l.y" /* yacc.c:1646  */
    {printf("term->LPAREN expression RPAREN\n");}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 213 "mini_l.y" /* yacc.c:1646  */
    {printf("term->Ident LPAREN expression expressionLoop RPAREN\n");}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 217 "mini_l.y" /* yacc.c:1646  */
    {printf("expressionLoop->epsilon\n");}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 219 "mini_l.y" /* yacc.c:1646  */
    {printf("exprssionLoop->COMMA expression expressionLoop\n");}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 223 "mini_l.y" /* yacc.c:1646  */
    {printf("var->Ident\n");}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 225 "mini_l.y" /* yacc.c:1646  */
    {printf("var->Ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BACKET\n");}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 227 "mini_l.y" /* yacc.c:1646  */
    {printf("var->Ident L_SQSUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1818 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 230 "mini_l.y" /* yacc.c:1906  */


int main(int argc, char ** argv) {
	if (argc >= 2) {
		yyin = fopen(argv[1], "r");
		if (yyin == NULL) {
			yyin = stdin;
		}
	}
	else {
		yyin = stdin;
	}
	yyparse();
	return 1;
}

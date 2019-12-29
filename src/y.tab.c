/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "grammar/c_syn.y" /* yacc.c:337  */

	#include<stdio.h>
	#include "headers/defs.h"
  #include "headers/linkedlist.h"
	#include "headers/y.tab.h"
	
	int for_depth_counter_var = 0;
	int direct_declarator_var = 0;
	int current_type_var = -1;
    //int yydebug = 1;

#line 82 "y.tab.c" /* yacc.c:337  */
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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FOR = 258,
    WHILE = 259,
    DO = 260,
    IF = 261,
    ELSE = 262,
    RETURN = 263,
    INT = 264,
    VOID = 265,
    FLOAT = 266,
    CONST_Q = 267,
    CONST_INT = 268,
    CONST_FLOAT = 269,
    IDENTIFIER = 270,
    STRING = 271,
    CONST = 272,
    AND_OP = 273,
    OR_OP = 274,
    LE_OP = 275,
    GE_OP = 276,
    EQ_OP = 277,
    NE_OP = 278,
    INC = 279,
    DEC = 280,
    LEFT_OP = 281,
    RIGHT_OP = 282
  };
#endif
/* Tokens.  */
#define FOR 258
#define WHILE 259
#define DO 260
#define IF 261
#define ELSE 262
#define RETURN 263
#define INT 264
#define VOID 265
#define FLOAT 266
#define CONST_Q 267
#define CONST_INT 268
#define CONST_FLOAT 269
#define IDENTIFIER 270
#define STRING 271
#define CONST 272
#define AND_OP 273
#define OR_OP 274
#define LE_OP 275
#define GE_OP 276
#define EQ_OP 277
#define NE_OP 278
#define INC 279
#define DEC 280
#define LEFT_OP 281
#define RIGHT_OP 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "grammar/c_syn.y" /* yacc.c:352  */

	struct {
		int count_p;
		int count_m;
		int type;
		int size;
		int val;
		float fval;
		void * sentry;
		int t[4];
		char* string_val;
		int type_counter;

		char *X, *Y;
		char *n;
		node id;
		int id_size;
		char * string_exp;
	}vv;

#line 200 "y.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   209

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  163

#define YYUNDEFTOK  2
#define YYMAXUTOK   282

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    32,    44,     2,
      19,    20,    27,    28,    43,    29,     2,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    21,
      30,    18,    31,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    25,     2,    24,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    23,    46,    22,     2,     2,     2,     2,
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
      15,    16,    17,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    49,    57,    61,    68,    75,    91,    95,
     106,   109,   112,   115,   118,   123,   128,   140,   149,   162,
     162,   164,   167,   172,   176,   187,   192,   201,   207,   213,
     220,   225,   231,   238,   243,   254,   264,   275,   279,   288,
     298,   302,   310,   319,   323,   332,   340,   348,   357,   361,
     369,   378,   382,   391,   395,   404,   408,   417,   421,   446,
     449,   463,   470,   474,   493,   512,   526,   534,   541,   550,
     554,   569,   579,   602,   623,   638,   645,   663,   670,   683,
     688,   696,   699,   711,   720,   729,   740,   774,   781,   798,
     823
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FOR", "WHILE", "DO", "IF", "ELSE",
  "RETURN", "INT", "VOID", "FLOAT", "CONST_Q", "CONST_INT", "CONST_FLOAT",
  "IDENTIFIER", "STRING", "CONST", "'='", "'('", "')'", "';'", "'}'",
  "'{'", "']'", "'['", "'/'", "'*'", "'+'", "'-'", "'<'", "'>'", "'%'",
  "AND_OP", "OR_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "INC", "DEC",
  "LEFT_OP", "RIGHT_OP", "','", "'&'", "'^'", "'|'", "$accept",
  "optimizer_start", "compound_statement", "statement_list", "statement",
  "expression_statement", "selection_statement", "iteration_statement",
  "$@1", "iter_counter", "expression", "postfix_expression",
  "unary_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "assignment_expression", "assignment_operator",
  "declaration_list", "declaration", "declaration_specifiers",
  "type_specifier", "init_declarator_list", "init_declarator",
  "declarator", "direct_declarator", "pointer", "initializer",
  "initializer_list", "primary_expression", "vector_operation",
  "vector_operation_lvl1", "vector_expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    61,    40,
      41,    59,   125,   123,    93,    91,    47,    42,    43,    45,
      60,    62,    37,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,    44,    38,    94,   124
};
# endif

#define YYPACT_NINF -128

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-128)))

#define YYTABLE_NINF -23

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,  -128,    58,    11,    61,    76,  -128,  -128,    94,    57,
     139,  -128,  -128,  -128,    57,    57,    57,   -14,    97,   100,
      -7,    -2,   -20,   -18,    25,    91,    79,   120,    93,  -128,
    -128,  -128,   139,   -13,   -11,  -128,  -128,   140,    57,   153,
      57,  -128,  -128,  -128,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,  -128,  -128,    46,  -128,  -128,  -128,    74,
    -128,  -128,  -128,  -128,  -128,    -7,    -7,    -2,    -2,   -20,
     -20,   -20,   -20,   -18,   -18,    25,    91,    79,   120,     8,
     157,  -128,  -128,  -128,   152,  -128,  -128,   106,  -128,  -128,
    -128,  -128,    69,  -128,    -4,  -128,  -128,  -128,  -128,   140,
      57,    57,  -128,  -128,  -128,   128,  -128,  -128,   156,    60,
    -128,   162,   160,   169,  -128,    34,    80,  -128,  -128,  -128,
      -4,   125,   173,   160,   140,   170,  -128,   125,  -128,  -128,
     163,   182,   142,  -128,    44,  -128,   140,   165,   148,  -128,
    -128,   125,  -128,   177,  -128,   171,   175,   179,   172,   181,
     174,   178,  -128
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      22,    19,     0,     2,     0,     0,     1,     3,     0,     0,
       0,    84,    85,    83,     0,     0,     0,     0,    30,    33,
      37,    40,    43,    48,    51,    53,    55,    57,    59,    23,
      25,    15,     0,     0,     0,    31,    32,     0,     0,     0,
       0,    28,    29,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,    86,    22,    20,    24,    27,     0,
      60,    35,    34,    36,    33,    38,    39,    41,    42,    44,
      45,    46,    47,    49,    50,    52,    54,    56,    58,     0,
       0,    67,    66,    68,    83,     4,    10,    22,     8,    11,
      12,    13,    22,    62,     0,    65,    14,    87,    26,     0,
       0,     0,     5,     9,     6,    22,    63,    75,    77,     0,
      69,    71,    74,     0,    21,     0,     0,     7,    78,    64,
       0,     0,     0,    73,     0,     0,    70,     0,    79,    72,
       0,    17,     0,    81,     0,    76,     0,    83,    90,    88,
      80,     0,    18,     0,    82,     0,     0,     0,     0,     0,
       0,     0,    89
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,   197,   -35,    99,    -8,    83,  -128,   159,  -128,  -128,
      -9,  -128,   -12,    82,    55,   117,   118,   144,   145,   143,
     146,  -128,   -37,  -128,  -128,   103,  -128,  -128,  -128,    78,
    -128,    86,    88,  -127,  -128,  -128,  -128,  -128,  -128
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    96,    97,    98,    99,   100,   101,     5,     4,
      33,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    44,   102,   103,   104,   105,   119,   120,
     121,   122,   123,   139,   144,    30,   106,   107,   149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      17,    67,    66,    35,    36,    34,    37,    70,    63,    64,
     143,   117,    52,    53,   -22,     1,     1,    54,    55,    45,
      46,    50,    51,   118,   154,    47,    48,    49,   109,    38,
      38,    69,    38,    71,    72,    73,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
       1,    38,    90,    89,   134,    91,    92,    93,     6,    11,
      12,    94,    56,    57,     8,    14,   150,    31,    95,    65,
      11,    12,    13,     1,   124,    90,    14,    38,    91,    92,
      93,   129,    11,    12,    94,    15,    16,   151,    14,   113,
      31,   114,    65,    32,   138,     9,    15,    16,   108,   141,
     138,   125,   126,   130,   135,    77,    78,   113,    15,    16,
       1,   152,    90,    10,   138,    62,    39,    38,    43,    11,
      12,    94,    40,    38,    59,    14,    61,    31,   112,    65,
      75,    76,     1,   148,    90,    58,    41,    42,    11,    12,
      13,    11,    12,    94,    14,    15,    16,    14,   137,    31,
     127,    65,    11,    12,    13,    11,    12,   147,    14,     3,
      31,    14,     3,    65,    15,    16,    60,    15,    16,    79,
      80,    81,    82,    68,    83,    84,   110,   111,    15,    16,
     131,    15,    16,   118,   117,   132,   140,   145,   142,   146,
     153,    38,   155,   157,   158,   156,   160,   159,   161,   162,
       7,   115,    85,    87,    86,   116,   128,    88,   136,   133
};

static const yytype_uint8 yycheck[] =
{
       9,    38,    37,    15,    16,    14,    20,    44,    21,    20,
     137,    15,    30,    31,     3,     4,     4,    35,    36,    26,
      27,    41,    42,    27,   151,    32,    28,    29,    20,    43,
      43,    40,    43,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       4,    43,     6,    62,    20,     9,    10,    11,     0,    13,
      14,    15,    37,    38,     3,    19,    22,    21,    22,    23,
      13,    14,    15,     4,   109,     6,    19,    43,     9,    10,
      11,    21,    13,    14,    15,    39,    40,    43,    19,    97,
      21,    22,    23,    10,   131,    19,    39,    40,    24,   134,
     137,   110,   111,    43,    24,    50,    51,   115,    39,    40,
       4,   146,     6,    19,   151,    32,    19,    43,    18,    13,
      14,    15,    25,    43,    45,    19,    33,    21,    22,    23,
      48,    49,     4,   142,     6,    44,    39,    40,    13,    14,
      15,    13,    14,    15,    19,    39,    40,    19,    23,    21,
      22,    23,    13,    14,    15,    13,    14,    15,    19,     0,
      21,    19,     3,    23,    39,    40,    46,    39,    40,    52,
      53,    54,    55,    20,    56,    57,    19,    25,    39,    40,
      18,    39,    40,    27,    15,    25,    13,    24,    18,     7,
      25,    43,    15,    18,    15,    24,    15,    25,    24,    21,
       3,   102,    58,    60,    59,   102,   118,    61,   130,   123
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    48,    54,    56,    55,     0,    48,     3,    19,
      19,    13,    14,    15,    19,    39,    40,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      82,    21,    52,    57,    57,    59,    59,    20,    43,    19,
      25,    39,    40,    18,    70,    26,    27,    32,    28,    29,
      41,    42,    30,    31,    35,    36,    37,    38,    44,    45,
      46,    33,    52,    21,    20,    23,    49,    69,    20,    57,
      69,    59,    59,    59,    59,    60,    60,    61,    61,    62,
      62,    62,    62,    63,    63,    64,    65,    66,    67,    57,
       6,     9,    10,    11,    15,    22,    49,    50,    51,    52,
      53,    54,    71,    72,    73,    74,    83,    84,    24,    20,
      19,    25,    22,    51,    22,    50,    72,    15,    27,    75,
      76,    77,    78,    79,    49,    57,    57,    22,    79,    21,
      43,    18,    25,    78,    20,    24,    76,    23,    69,    80,
      13,    49,    18,    80,    81,    24,     7,    15,    57,    85,
      22,    43,    49,    25,    80,    15,    24,    18,    15,    25,
      15,    24,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    49,    49,    50,    50,
      51,    51,    51,    51,    51,    52,    52,    53,    53,    55,
      54,    54,    56,    57,    57,    58,    58,    58,    58,    58,
      59,    59,    59,    60,    60,    60,    60,    61,    61,    61,
      62,    62,    62,    63,    63,    63,    63,    63,    64,    64,
      64,    65,    65,    66,    66,    67,    67,    68,    68,    69,
      69,    70,    71,    71,    72,    73,    74,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    81,    81,    82,    82,    82,    82,    83,    84,    85,
      85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     3,     3,     4,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     5,     7,     0,
       6,     8,     0,     1,     3,     1,     4,     3,     2,     2,
       1,     2,     2,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       3,     1,     3,     2,     1,     1,     4,     1,     2,     1,
       3,     1,     3,     1,     1,     1,     3,     1,     6,    10,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
        case 4:
#line 57 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).string_exp = malloc(4);
		snprintf((yyval.vv).string_exp,4, "{ }");
	}
#line 1427 "y.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 61 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 30");
		int len1 = strlen((yyvsp[-1].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+3);
		snprintf((yyval.vv).string_exp,len1+3, "{%s}",(yyvsp[-1].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
	}
#line 1439 "y.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 68 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 31");
		int len1 = strlen((yyvsp[-1].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+3);
		snprintf((yyval.vv).string_exp,len1+3, "{%s}",(yyvsp[-1].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
	}
#line 1451 "y.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 75 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 32");
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[-1].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+6);
		snprintf((yyval.vv).string_exp,len1+len2+6, "{\n%s\n%s\n}",(yyvsp[-2].vv).string_exp,(yyvsp[-1].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);

	}
#line 1466 "y.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 91 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 36");
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 1475 "y.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 95 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 33");
        int len1 = strlen((yyvsp[-1].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+2);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s\n%s",(yyvsp[-1].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 1489 "y.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 106 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	  	 (yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	  }
#line 1497 "y.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 109 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	 	(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 1505 "y.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 112 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 1513 "y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 115 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 1521 "y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 118 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 666");
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 1530 "y.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 123 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).string_exp = malloc(2);
		snprintf((yyval.vv).string_exp,2, ";");

	}
#line 1540 "y.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 128 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			int len = strlen((yyvsp[-1].vv).string_exp);
			(yyval.vv).string_exp = malloc(len+2);
        		snprintf((yyval.vv).string_exp,len+2, "%s;",(yyvsp[-1].vv).string_exp);
			//printf("\n---------TEST777------ | %s |---------\n",$1.string_exp);
			free((yyvsp[-1].vv).string_exp);
	}
#line 1552 "y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 140 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+6);
		snprintf((yyval.vv).string_exp,len1+len2+6, "if(%s)\n%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
		printf("\n---------TEST-IF--- |%s|\n",(yyval.vv).string_exp );
	}
#line 1566 "y.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 149 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-4].vv).string_exp);
		int len2 = strlen((yyvsp[-2].vv).string_exp);
		int len3 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+len3+11);
		snprintf((yyval.vv).string_exp,len1+len2+len3+11, "if(%s)\n%s\nelse%s",(yyvsp[-4].vv).string_exp,(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-4].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
		printf("\n---------TEST-IF-ELSE--- |\n%s\n|\n",(yyval.vv).string_exp );

	}
#line 1583 "y.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 162 "grammar/c_syn.y" /* yacc.c:1652  */
    {printf("START-WHILE\n ");}
#line 1589 "y.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 162 "grammar/c_syn.y" /* yacc.c:1652  */
    {printf("END-WHILE\n ");}
#line 1595 "y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 164 "grammar/c_syn.y" /* yacc.c:1652  */
    {

	}
#line 1603 "y.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 167 "grammar/c_syn.y" /* yacc.c:1652  */
    {for_depth_counter_var++;}
#line 1609 "y.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 172 "grammar/c_syn.y" /* yacc.c:1652  */
    {
 		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
 		//printf("\n---------TEST145--- |%s|\n",$$.string_exp );
 	}
#line 1618 "y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 176 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 1");
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+2);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s,%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
		//printf("\n---------TEST145+1--- |%s|\n",$$.string_exp );
	}
#line 1633 "y.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 187 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 2");
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
		//printf("\n---TEST1-%s------------\n",$$.string_exp);
	}
#line 1643 "y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 192 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 3");
		int len1 = strlen((yyvsp[-3].vv).string_exp);
		int len2 = strlen((yyvsp[-1].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s[%s]",(yyvsp[-3].vv).string_exp,(yyvsp[-1].vv).string_exp);
		free((yyvsp[-3].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
	}
#line 1657 "y.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 201 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+3);
		snprintf((yyval.vv).string_exp,len1+3, "%s()",(yyvsp[-2].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
	}
#line 1668 "y.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 207 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-1].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+3);
		snprintf((yyval.vv).string_exp,len1+3, "%s++",(yyvsp[-1].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
	}
#line 1679 "y.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 213 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-1].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+3);
		snprintf((yyval.vv).string_exp,len1+3, "%s--",(yyvsp[-1].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
	}
#line 1690 "y.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 220 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 4");
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
		//printf("\n--------TEST999----| %s |----\n",$$.string_exp);
	}
#line 1700 "y.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 225 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len2+3);
		snprintf((yyval.vv).string_exp,len2+3, "++%s",(yyvsp[0].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 1711 "y.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 231 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len2+3);
		snprintf((yyval.vv).string_exp,len2+3, "--%s",(yyvsp[0].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 1722 "y.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 238 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 5");
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
		//printf("\n---TEST10---%s\n",$$.string_exp);
	}
#line 1732 "y.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 243 "grammar/c_syn.y" /* yacc.c:1652  */
    {

		puts("HERE 5");
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+2);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s*%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);

	}
#line 1748 "y.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 254 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			//puts("HERE 6");
			int len1 = strlen((yyvsp[-2].vv).string_exp);
			int len2 = strlen((yyvsp[0].vv).string_exp);
			(yyval.vv).string_exp = malloc(len1+len2+2);
			snprintf((yyval.vv).string_exp,len1+len2+2, "%s/%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
			free((yyvsp[-2].vv).string_exp);
			free((yyvsp[0].vv).string_exp);

	}
#line 1763 "y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 264 "grammar/c_syn.y" /* yacc.c:1652  */
    {

			int len1 = strlen((yyvsp[-2].vv).string_exp);
			int len2 = strlen((yyvsp[0].vv).string_exp);
			(yyval.vv).string_exp = malloc(len1+len2+4);
			snprintf((yyval.vv).string_exp,len1+len2+4, "%s%%%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
			free((yyvsp[-2].vv).string_exp);
			free((yyvsp[0].vv).string_exp);

	}
#line 1778 "y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 275 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 7");
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 1787 "y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 279 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 8");
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+2);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s+%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 1801 "y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 288 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 9");
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+2);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s-%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 1815 "y.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 298 "grammar/c_syn.y" /* yacc.c:1652  */
    {

		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 1824 "y.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 302 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s<<%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 1837 "y.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 310 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s>>%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 1850 "y.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 319 "grammar/c_syn.y" /* yacc.c:1652  */
    {

		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 1859 "y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 323 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 10");
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+2);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s<%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 1873 "y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 332 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+2);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s>%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 1886 "y.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 340 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s<=%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 1899 "y.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 348 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s>=%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 1912 "y.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 357 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 11");
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 1921 "y.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 361 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s==%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 1934 "y.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 369 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s!=%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 1947 "y.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 378 "grammar/c_syn.y" /* yacc.c:1652  */
    {

		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 1956 "y.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 382 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+2);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s&%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 1969 "y.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 391 "grammar/c_syn.y" /* yacc.c:1652  */
    {

		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 1978 "y.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 395 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+2);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s^%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 1991 "y.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 404 "grammar/c_syn.y" /* yacc.c:1652  */
    {

		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2000 "y.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 408 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+2);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s|%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2013 "y.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 417 "grammar/c_syn.y" /* yacc.c:1652  */
    {

		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2022 "y.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 421 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s&&%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2035 "y.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 446 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2043 "y.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 449 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 12");
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+2);
		//printf("\n-------TEST88--- |%s| |%s| \n",$1.string_exp,$3.string_exp);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s=%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		//printf("\n-------TEST88+1--- |%s| \n",$$.string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2060 "y.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 463 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).string_exp = malloc(2);
		snprintf((yyval.vv).string_exp,2, "=");
	}
#line 2069 "y.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 470 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
		//printf("\n===============\n%s\n================\n",$1.string_exp);
	}
#line 2078 "y.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 474 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 13");
		int len1 = strlen((yyvsp[-1].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+2);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s %s",(yyvsp[-1].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
		free((yyvsp[0].vv).string_exp);

	}
#line 2093 "y.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 493 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//restore the current type variable to -1
		 current_type_var = -1;

		//COPY
		// TODO Probelem here segfault!!!!!
		//puts("HERE 14");
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[-1].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s %s;",(yyvsp[-2].vv).string_exp,(yyvsp[-1].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);

	}
#line 2113 "y.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 512 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		 //$$.type = $1.type; INT or FLAT ...
		 //store the current type in a global variable....TODO
		 //TODO check composed types=====!
		 current_type_var = (yyvsp[0].vv).type;
		 printf("current type : %d",current_type_var);

		 (yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2127 "y.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 526 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).type = VOID;
		//printf("TYPE : %d",$$);

		(yyval.vv).string_exp = malloc(5);
		snprintf((yyval.vv).string_exp,5, "void");

	}
#line 2140 "y.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 534 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).type = INT;
		//printf("TYPE : %d",$$);

		(yyval.vv).string_exp = malloc(4);
		snprintf((yyval.vv).string_exp,4, "int");
	}
#line 2152 "y.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 541 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).type = FLOAT;
		printf("TYPE : %d",(yyval.vv));

		(yyval.vv).string_exp = malloc(6);
		snprintf((yyval.vv).string_exp,6, "float");
	}
#line 2164 "y.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 550 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;

	}
#line 2173 "y.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 554 "grammar/c_syn.y" /* yacc.c:1652  */
    {

	//puts("HERE 15");
	//COPY
	int len1 = strlen((yyvsp[-2].vv).string_exp);
	int len2 = strlen((yyvsp[0].vv).string_exp);
	(yyval.vv).string_exp = malloc(len1+len2+2);
	snprintf((yyval.vv).string_exp,len1+len2+2, "%s,%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
	free((yyvsp[-2].vv).string_exp);
	free((yyvsp[0].vv).string_exp);

	}
#line 2190 "y.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 569 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		for(int l = 0;l<4;l++)
			(yyval.vv).t[l] = (yyvsp[0].vv).t[l];
		(yyval.vv).sentry = (yyvsp[0].vv).sentry;
		(yyval.vv).count_p  = (yyvsp[0].vv).count_p; //TODO maybe 0
		(yyval.vv).count_m  = (yyvsp[0].vv).count_m;

		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;

	}
#line 2205 "y.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 579 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		for(int l = 0;l<4;l++){
			(yyval.vv).t[l] = (yyvsp[-2].vv).t[l];
		}
		(yyval.vv).sentry = (yyvsp[-2].vv).sentry;
		(yyval.vv).count_p  = (yyvsp[-2].vv).count_p; //TODO maybe 0
		(yyval.vv).count_m  = (yyvsp[-2].vv).count_m;



		//puts("HERE 16");
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+2);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s=%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);

	}
#line 2229 "y.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 602 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//printf("SIZE(%d) ",$1+$2);
		for(int l = 0;l<4;l++)
			(yyval.vv).t[l] = (yyvsp[0].vv).t[l];
		(yyval.vv).sentry = (yyvsp[0].vv).sentry;
		(yyval.vv).count_p  = (yyvsp[-1].vv).count_p;
		(yyval.vv).count_m  = (yyvsp[0].vv).count_m;
		(yyval.vv).string_val = (yyvsp[-1].vv).string_val;


		//puts("HERE 17");
		int len1 = strlen((yyvsp[-1].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+1);
		snprintf((yyval.vv).string_exp,len1+len2+1, "%s%s",(yyvsp[-1].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
		free((yyvsp[0].vv).string_exp);



	}
#line 2255 "y.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 623 "grammar/c_syn.y" /* yacc.c:1652  */
    {

		for(int l = 0;l<4;l++)
			(yyval.vv).t[l] = (yyvsp[0].vv).t[l];
		(yyval.vv).sentry = (yyvsp[0].vv).sentry;
		(yyval.vv).count_p  = (yyvsp[0].vv).count_p; //TODO maybe 0
		(yyval.vv).count_m  = (yyvsp[0].vv).count_m;
		//printf("SIZE(%d) ",$1);
	//COPY
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;

	}
#line 2272 "y.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 638 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).string_val = (yyvsp[0].vv).string_val;
	}
#line 2280 "y.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 645 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 18");
		int len1 = strlen((yyvsp[-3].vv).string_exp);
		int len2 = strlen((yyvsp[-1].vv).string_val);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+4, "%s[%s]",(yyvsp[-3].vv).string_exp,(yyvsp[-1].vv).string_val);
		free((yyvsp[-3].vv).string_exp);



        }
#line 2296 "y.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 663 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		puts("HERE 19");
		(yyval.vv).count_p = 1;
		(yyval.vv).string_exp = malloc(2);
		snprintf((yyval.vv).string_exp,2,"*");
	}
#line 2307 "y.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 670 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	 	(yyval.vv).count_p = (yyvsp[0].vv).count_p +1;

		puts("HERE 19");
	 	int len1 = strlen((yyvsp[0].vv).string_exp);
	 	(yyval.vv).string_exp = malloc(len1+3);
		snprintf((yyval.vv).string_exp,len1+3,"*%s",(yyvsp[0].vv).string_exp);
		free((yyvsp[0].vv).string_exp);

	}
#line 2322 "y.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 683 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	 	(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
		//snprintf($$.string_exp,8, "ass_exp");

	}
#line 2332 "y.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 688 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 20");
		int len1 = strlen((yyvsp[-1].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+3);
		snprintf((yyval.vv).string_exp,len1+3, "{%s}",(yyvsp[-1].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
	}
#line 2344 "y.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 696 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2352 "y.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 699 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 21");
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+2);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s,%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2366 "y.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 711 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 22");
		(yyval.vv).type = IDENTIFIER;
		char * curr_var_name_tmp = (yyvsp[0].vv).string_val;
		int len = strlen(curr_var_name_tmp);
		(yyval.vv).string_exp = malloc(len+1);
		snprintf((yyval.vv).string_exp,len+1, "%s",curr_var_name_tmp);

	}
#line 2380 "y.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 720 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).type = CONST_INT;
		//puts("HERE 23");
		char * curr_var_name_tmp = (yyvsp[0].vv).string_val; 
		int len = strlen(curr_var_name_tmp);
		(yyval.vv).string_exp = malloc(len+1);
		snprintf((yyval.vv).string_exp,len+1, "%s",curr_var_name_tmp);

	}
#line 2394 "y.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 729 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).type = CONST_FLOAT;
		//puts("HERE 24");
		char * curr_var_name_tmp = (yyvsp[0].vv).string_val;
		int len = strlen(curr_var_name_tmp);
		(yyval.vv).string_exp = malloc(len+1);
		snprintf((yyval.vv).string_exp,len+1, "%s",curr_var_name_tmp);
	}
#line 2407 "y.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 740 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		//puts("HERE 25");
		(yyval.vv).type = EXPR;
		char * curr_var_name_tmp = (yyvsp[-1].vv).string_exp;
		int len = strlen(curr_var_name_tmp);
		(yyval.vv).string_exp = malloc(len+3);
		snprintf((yyval.vv).string_exp,len+4, "(%s)",(yyvsp[-1].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
		//printf("\n---------TEST766------ | %s |---------\n",$$.string_exp);

	}
#line 2423 "y.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 774 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).X = (yyvsp[0].vv).X;
		(yyval.vv).Y = (yyvsp[0].vv).Y;
		(yyval.vv).id = (yyvsp[0].vv).id;
	}
#line 2433 "y.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 782 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		printf("expression %s\n", (yyvsp[0].vv).string_exp);
		int len1 = strlen((yyvsp[-5].vv).string_val);
		int len2 = strlen((yyvsp[-3].vv).string_exp);
		int len3 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+len3 + 3);
		snprintf((yyval.vv).string_exp,len1+len2+4, "%s[%s]=%s",(yyvsp[-5].vv).string_exp, (yyvsp[-3].vv).string_val, (yyvsp[0].vv).string_exp);
		(yyval.vv).X = malloc(len1);
		strncpy((yyval.vv).X, (yyvsp[-5].vv).string_val, len1);
		(yyval.vv).id = (yyvsp[0].vv).id;
		free((yyvsp[-5].vv).string_exp);
		free((yyvsp[-3].vv).string_exp);
		free((yyvsp[0].vv).string_exp);

	}
#line 2453 "y.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 799 "grammar/c_syn.y" /* yacc.c:1652  */
    {
				printf("expression %s\n", (yyvsp[-4].vv).string_val);
				if ((strcmp((yyvsp[-9].vv).string_val, (yyvsp[-4].vv).string_val) != 0) && 
					(strcmp((yyvsp[-7].vv).string_val, (yyvsp[-2].vv).string_val) == 0)
				) {
					int len1 = strlen((yyvsp[-9].vv).string_val);
					int len2 = strlen((yyvsp[-7].vv).string_val);
					int len3 = strlen((yyvsp[-4].vv).string_val);
					int len4 = strlen((yyvsp[-2].vv).string_val);
					(yyval.vv).string_exp = malloc(len1+len2+len3 + len4 + 5);
					snprintf((yyval.vv).string_exp, len1+len2+4, "%s[%s]=%s[%s]",(yyvsp[-9].vv).string_val, (yyvsp[-7].vv).string_val, (yyvsp[-4].vv).string_val, (yyvsp[-2].vv).string_val);
					(yyval.vv).X = malloc(len1);
					(yyval.vv).Y = malloc(len3);
					strncpy((yyval.vv).X, (yyvsp[-9].vv).string_val, len1);
					strncpy((yyval.vv).Y, (yyvsp[-4].vv).string_val, len3);
					(yyval.vv).id = addNode((yyval.vv).id, (yyvsp[-9].vv).string_val);
					(yyval.vv).id = addNode((yyval.vv).id, (yyvsp[-7].vv).string_val);
					(yyval.vv).id = addNode((yyval.vv).id, (yyvsp[-4].vv).string_val); 
					free((yyvsp[-9].vv).string_val);
					free((yyvsp[-7].vv).string_val);
					free((yyvsp[-4].vv).string_val);
					free((yyvsp[-2].vv).string_val);
				}
			}
#line 2482 "y.tab.c" /* yacc.c:1652  */
    break;


#line 2486 "y.tab.c" /* yacc.c:1652  */
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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 825 "grammar/c_syn.y" /* yacc.c:1918  */


node createNode(){
    node temp; 
    temp = (node)malloc(sizeof(struct LinkedList)); 
    temp->next = NULL;
    return temp;
}

node addNode(node head, char *value){
    node temp,p;
    temp = createNode();
	int len = strlen(value);
    temp->data = (char*) malloc(len * sizeof(char));
	free(value);

	strncpy(temp->data, value, len);
    if(head == NULL){
        head = temp;
    }
    else{
        p  = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = temp;
    }
    return head;
}

int yyerror(const char *str)
{
	printf("error : %s\tline : %d\n",str,line_counter+1);
	return -1;
}

int yywrap()
{
return 1;
}

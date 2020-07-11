
#define YYBISON 1

#define YYBISON_VERSION "2.4.1"

#define YYSKELETON_NAME "yacc.c"

#define YYPURE 0

#define YYPUSH 0

#define YYPULL 1


#define YYLSP_NEEDED 0



#line 1 "c.y"

#include <stdio.h>
#include <stdlib.h>

extern FILE *fp;


#line 82 "y.tab.c"


#ifndef YYDEBUG
# define YYDEBUG 0
#endif


#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


#ifndef YYTOKENTYPE
# define YYTOKENTYPE

   enum yytokentype {
     INT = 258,
     FLOAT = 259,
     CHAR = 260,
     DOUBLE = 261,
     VOID = 262,
     FOR = 263,
     WHILE = 264,
     IF = 265,
     ELSE = 266,
     PRINTF = 267,
     STRUCT = 268,
     NUM = 269,
     ID = 270,
     INCLUDE = 271,
     DOT = 272,
     OR = 273,
     AND = 274,
     GT = 275,
     LT = 276,
     NE = 277,
     EQ = 278,
     GE = 279,
     LE = 280
   };
#endif

#define INT 258
#define FLOAT 259
#define CHAR 260
#define DOUBLE 261
#define VOID 262
#define FOR 263
#define WHILE 264
#define IF 265
#define ELSE 266
#define PRINTF 267
#define STRUCT 268
#define NUM 269
#define ID 270
#define INCLUDE 271
#define DOT 272
#define OR 273
#define AND 274
#define GT 275
#define LT 276
#define NE 277
#define EQ 278
#define GE 279
#define LE 280




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE 
# define YYSTYPE_IS_DECLARED 1
#endif


#line 174 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h>
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> 
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e)
#endif

#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE


# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h>
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> 
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> 
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC

#  define YYSTACK_FREE(Ptr) do { ; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM

#   define YYSTACK_ALLOC_MAXIMUM 4032 
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> 
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc 
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); 
#   endif
#  endif
# endif
#endif 


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))


union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};


# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)


# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#define YYFINAL  42

#define YYLAST   328

#define YYNTOKENS  42

#define YYNNTS  20

#define YYNRULES  72

#define YYNSTATES  144

#define YYUNDEFTOK  2

#define YYMAXUTOK   280

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    35,
      36,    37,    33,    31,    30,    32,     2,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    29,
      21,    18,    22,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    39,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    19,    20,    23,    24,    25,    26,    27,
      28
};

#if YYDEBUG

static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    11,    14,    17,    20,    24,
      27,    29,    33,    37,    41,    45,    49,    53,    57,    61,
      65,    69,    73,    77,    81,    85,    89,    93,    98,   101,
     104,   106,   108,   112,   117,   122,   129,   131,   132,   136,
     138,   141,   145,   148,   149,   151,   153,   155,   157,   159,
     161,   163,   165,   167,   169,   171,   177,   183,   193,   203,
     209,   215,   221,   228,   234,   235,   239,   243,   247,   251,
     255,   259,   261
};


static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    48,    -1,    44,    -1,    55,    45,    29,
      -1,    45,    29,    -1,    46,    29,    -1,    47,    29,    -1,
      55,    47,    29,    -1,    59,    29,    -1,     1,    -1,    15,
      18,    45,    -1,    15,    18,    46,    -1,    15,    18,    47,
      -1,    47,    18,    45,    -1,    15,    30,    45,    -1,    14,
      30,    45,    -1,    15,    31,    45,    -1,    15,    32,    45,
      -1,    15,    33,    45,    -1,    15,    34,    45,    -1,    14,
      31,    45,    -1,    14,    32,    45,    -1,    14,    33,    45,
      -1,    14,    34,    45,    -1,    35,    45,    35,    -1,    36,
      45,    37,    -1,    32,    36,    45,    37,    -1,    32,    14,
      -1,    32,    15,    -1,    14,    -1,    15,    -1,    15,    36,
      37,    -1,    15,    36,    45,    37,    -1,    15,    38,    45,
      39,    -1,    55,    15,    36,    49,    37,    52,    -1,    50,
      -1,    -1,    50,    30,    51,    -1,    51,    -1,    55,    15,
      -1,    40,    53,    41,    -1,    53,    54,    -1,    -1,    56,
      -1,    44,    -1,    57,    -1,    58,    -1,    60,    -1,    29,
      -1,     3,    -1,     4,    -1,     5,    -1,     6,    -1,     7,
      -1,     9,    36,    61,    37,    54,    -1,     9,    36,    61,
      37,    52,    -1,     8,    36,    61,    29,    61,    29,    61,
      37,    54,    -1,     8,    36,    61,    29,    61,    29,    61,
      37,    52,    -1,     8,    36,    61,    37,    54,    -1,     8,
      36,    61,    37,    52,    -1,    10,    36,    61,    37,    54,
      -1,    13,    15,    40,    55,    45,    41,    -1,    12,    36,
      61,    37,    29,    -1,    -1,    61,    28,    61,    -1,    61,
      27,    61,    -1,    61,    25,    61,    -1,    61,    26,    61,
      -1,    61,    23,    61,    -1,    61,    24,    61,    -1,    45,
      -1,    47,    -1
};

static const yytype_uint8 yyrline[] =
{
       0,    22,    22,    23,    27,    28,    29,    30,    31,    32,
      33,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    61,    62,    66,    70,    72,    73,    75,    76,
      78,    80,    82,    83,    85,    86,    87,    88,    89,    90,
      94,    95,    96,    97,    98,   102,   103,   107,   108,   109,
     110,   114,   119,   123,   127,   128,   129,   130,   131,   132,
     133,   134,   135
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE

static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "CHAR", "DOUBLE", "VOID",
  "FOR", "WHILE", "IF", "ELSE", "PRINTF", "STRUCT", "NUM", "ID", "INCLUDE",
  "DOT", "'='", "OR", "AND", "'<'", "'>'", "GT", "LT", "NE", "EQ", "GE",
  "LE", "';'", "','", "'+'", "'-'", "'*'", "'/'", "'\\''", "'('", "')'",
  "'['", "']'", "'{'", "'}'", "$accept", "start", "Declaration",
  "Assignment", "FunctionCall", "ArrayUsage", "Function", "ArgListOpt",
  "ArgList", "Arg", "CompoundStmt", "StmtList", "Stmt", "Type",
  "WhileStmt", "ForStmt", "IfStmt", "StructStmt", "PrintFunc", "Expr", 0
};
#endif

# ifdef YYPRINT

static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    61,   273,
     274,    60,    62,   275,   276,   277,   278,   279,   280,    59,
      44,    43,    45,    42,    47,    39,    40,    41,    91,    93,
     123,   125
};
# endif


static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    43,    44,    44,    44,    44,    44,    44,
      44,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    46,    46,    47,    48,    49,    49,    50,    50,
      51,    52,    53,    53,    54,    54,    54,    54,    54,    54,
      55,    55,    55,    55,    55,    56,    56,    57,    57,    57,
      57,    58,    59,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    61
};

static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     2,     2,     2,     3,     2,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     2,     2,
       1,     1,     3,     4,     4,     6,     1,     0,     3,     1,
       2,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     5,     9,     9,     5,
       5,     5,     6,     5,     0,     3,     3,     3,     3,     3,
       3,     1,     1
};


static const yytype_uint8 yydefact[] =
{
       0,    10,    50,    51,    52,    53,    54,     0,    30,    31,
       0,     0,     0,     0,     3,     0,     0,     0,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29,     0,    31,     0,
       0,     0,     1,     5,     6,     0,     7,    31,     0,     0,
       9,     0,    16,    21,    22,    23,    24,    11,    12,    13,
      15,    17,    18,    19,    20,    32,     0,     0,     0,    25,
      26,    14,    37,     4,     8,     0,    33,    34,    27,     0,
      36,    39,     0,     0,     0,     0,    40,    62,    43,    35,
      38,     0,     0,     0,     0,     0,    49,    41,    45,    42,
       0,    44,    46,    47,    48,    64,    64,    64,    64,    71,
      72,     0,     0,     0,     0,    64,    64,    64,    64,    64,
      64,    64,     0,     0,     0,     0,    69,    70,    67,    68,
      66,    65,     0,    60,    59,    56,    55,    61,    63,    64,
       0,     0,    58,    57
};

static const yytype_int8 yydefgoto[] =
{
      -1,    13,    98,   109,    16,    40,    18,    79,    80,    81,
      89,    91,    99,   100,   101,   102,   103,    20,   104,   111
};


#define YYPACT_NINF -121
static const yytype_int16 yypact[] =
{
     251,  -121,  -121,  -121,  -121,  -121,  -121,    -8,   142,   101,
      -1,    32,    32,     6,  -121,   -21,   -19,   -13,  -121,    34,
     -14,     2,    32,    32,    32,    32,    32,    82,    32,    32,
      32,    32,    32,    26,    32,  -121,  -121,    32,   170,     4,
      25,     7,  -121,  -121,  -121,    32,  -121,   133,    21,    -9,
    -121,   190,  -121,  -121,  -121,  -121,  -121,  -121,  -121,    25,
    -121,  -121,  -121,  -121,  -121,  -121,    14,    15,    16,  -121,
    -121,  -121,   190,  -121,  -121,    32,  -121,  -121,  -121,    18,
      29,  -121,    41,    19,    31,   190,  -121,  -121,  -121,  -121,
    -121,    75,    36,    56,    57,    58,  -121,  -121,  -121,  -121,
      32,  -121,  -121,  -121,  -121,    32,    32,    32,    32,  -121,
      25,   208,   252,   270,   276,    32,    32,    32,    32,    32,
      32,    32,   177,   177,   215,    45,  -121,  -121,  -121,  -121,
    -121,  -121,   297,  -121,  -121,  -121,  -121,  -121,  -121,    32,
     291,   177,  -121,  -121
};

static const yytype_int16 yypgoto[] =
{
    -121,  -121,    77,     0,    68,    38,  -121,  -121,  -121,    13,
    -105,  -121,  -120,     1,  -121,  -121,  -121,  -121,  -121,   153
};

#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      15,    19,   134,   136,   137,    45,    42,    21,    43,    45,
      44,    39,    41,    35,    36,    50,    46,   133,   135,    48,
      74,   143,    52,    53,    54,    55,    56,    57,    60,    61,
      62,    63,    64,    66,    67,    37,   142,    68,    17,    69,
       8,    38,    51,    45,    70,    71,     8,    38,     8,    47,
      73,    76,    75,    78,    77,    84,    86,    49,    10,    85,
      87,    11,    12,    65,    10,    59,    10,    11,    12,    11,
      12,    88,   105,    82,   138,    83,     1,    14,     2,     3,
       4,     5,     6,    92,    93,    94,    82,    95,     7,     8,
       9,    15,   106,   107,   108,    58,     8,     9,    90,     0,
      48,     0,     0,     0,    96,     0,     0,    10,     0,     0,
      11,    12,     0,     0,    10,     0,    97,    11,    12,    27,
       0,     0,    15,    15,    15,     0,     0,     0,     0,    17,
       0,    28,    29,    30,    31,    32,     0,    33,    49,    34,
       0,    15,     0,   110,   110,   110,   110,     0,     0,     0,
       0,    27,     0,   110,   110,   110,   110,   110,   110,   110,
      17,    17,    17,    28,    29,    30,    31,    32,     0,    72,
       0,    34,    22,    23,    24,    25,    26,   110,     1,    17,
       2,     3,     4,     5,     6,    92,    93,    94,    27,    95,
       7,     8,     9,     2,     3,     4,     5,     6,     0,     0,
      28,    29,    30,    31,    32,     0,    96,     0,    34,    10,
       0,     0,    11,    12,     0,     0,     1,    88,     2,     3,
       4,     5,     6,    92,    93,    94,     0,    95,     7,     8,
       9,   115,   116,   117,   118,   119,   120,   121,     0,     0,
       0,     0,     0,     0,    96,   122,     0,    10,     0,     0,
      11,    12,     1,     0,     2,     3,     4,     5,     6,   112,
     113,   114,     0,     0,     7,     8,     9,     0,   126,   127,
     128,   129,   130,   131,   132,   115,   116,   117,   118,   119,
     120,     0,     0,    10,     0,     0,    11,    12,     0,   123,
       0,     0,   140,   115,   116,   117,   118,   119,   120,   115,
     116,   117,   118,   119,   120,     0,     0,   124,     0,     0,
       0,     0,     0,   125,   115,   116,   117,   118,   119,   120,
     115,   116,   117,   118,   119,   120,   139,     0,   141
};

static const yytype_int16 yycheck[] =
{
       0,     0,   122,   123,   124,    18,     0,    15,    29,    18,
      29,    11,    12,    14,    15,    29,    29,   122,   123,    19,
      29,   141,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    36,   141,    37,     0,    35,
      14,    15,    40,    18,    37,    45,    14,    15,    14,    15,
      29,    37,    51,    37,    39,    37,    15,    19,    32,    30,
      41,    35,    36,    37,    32,    27,    32,    35,    36,    35,
      36,    40,    36,    72,    29,    75,     1,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    85,    12,    13,    14,
      15,    91,    36,    36,    36,    27,    14,    15,    85,    -1,
     100,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    -1,    32,    -1,    41,    35,    36,    18,
      -1,    -1,   122,   123,   124,    -1,    -1,    -1,    -1,    91,
      -1,    30,    31,    32,    33,    34,    -1,    36,   100,    38,
      -1,   141,    -1,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,    18,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    30,    31,    32,    33,    34,    -1,    36,
      -1,    38,    30,    31,    32,    33,    34,   139,     1,   141,
       3,     4,     5,     6,     7,     8,     9,    10,    18,    12,
      13,    14,    15,     3,     4,     5,     6,     7,    -1,    -1,
      30,    31,    32,    33,    34,    -1,    29,    -1,    38,    32,
      -1,    -1,    35,    36,    -1,    -1,     1,    40,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    37,    -1,    32,    -1,    -1,
      35,    36,     1,    -1,     3,     4,     5,     6,     7,   106,
     107,   108,    -1,    -1,    13,    14,    15,    -1,   115,   116,
     117,   118,   119,   120,   121,    23,    24,    25,    26,    27,
      28,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,    37,
      -1,    -1,   139,    23,    24,    25,    26,    27,    28,    23,
      24,    25,    26,    27,    28,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    37,    23,    24,    25,    26,    27,    28,
      23,    24,    25,    26,    27,    28,    29,    -1,    37
};

static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,    13,    14,    15,
      32,    35,    36,    43,    44,    45,    46,    47,    48,    55,
      59,    15,    30,    31,    32,    33,    34,    18,    30,    31,
      32,    33,    34,    36,    38,    14,    15,    36,    15,    45,
      47,    45,     0,    29,    29,    18,    29,    15,    45,    47,
      29,    40,    45,    45,    45,    45,    45,    45,    46,    47,
      45,    45,    45,    45,    45,    37,    45,    45,    45,    35,
      37,    45,    36,    29,    29,    55,    37,    39,    37,    49,
      50,    51,    55,    45,    37,    30,    15,    41,    40,    52,
      51,    53,     8,     9,    10,    12,    29,    41,    44,    54,
      55,    56,    57,    58,    60,    36,    36,    36,    36,    45,
      47,    61,    61,    61,    61,    23,    24,    25,    26,    27,
      28,    29,    37,    37,    37,    37,    61,    61,    61,    61,
      61,    61,    61,    52,    54,    52,    54,    54,    29,    29,
      61,    37,    52,    54
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab



#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("error de sintaxis: no se puede retroceder")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif



#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif



#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> 
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))



#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}


#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Apilando");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reduccion de la pila %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))


int yydebug;
#else 
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif 



#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif


#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0

      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;


      int yyxbegin = yyn < 0 ? -yyn : 0;

      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{

	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif 

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Eliminando";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else 
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif 

int yychar;

YYSTYPE yylval;

int yynerrs;


#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else 
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;

    int yyerrstatus;

    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;

  int yytoken;

  YYSTYPE yyval;

#if YYERROR_VERBOSE

  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))


  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Analisis inicial \n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; 


  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

 yynewstate:

  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {

	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	yyoverflow (YY_("memoria agotada"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else 
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
     
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
#endif 

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "El tamaño de la pila aumento %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Estado de entrada %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


yybackup:


  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;


  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Leyendo token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Ahora al final de la entrada.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("El siguiente token es", yytoken, &yylval, &yylloc);
    }

 
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }


  if (yyerrstatus)
    yyerrstatus--;


  YY_SYMBOL_PRINT ("Cambiando", yytoken, &yylval, &yylloc);

  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


yyreduce:

  yylen = yyr2[yyn];


  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

#line 1526 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


yyerrlab:
 
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("error de sintaxis"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("error de sintaxis"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {


      if (yychar <= YYEOF)
	{
	
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: descarte",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  goto yyerrlab1;



yyerrorlab:


  if (0)
     goto yyerrorlab;


  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


yyerrlab1:
  yyerrstatus = 3;	

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

   
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


yyacceptlab:
  yyresult = 0;
  goto yyreturn;

yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE

yyexhaustedlab:
  yyerror (YY_("memoria agotada"));
  yyresult = 2;

#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Limpieza: descartando anticipacion",
		 yytoken, &yylval);

  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Limpieza: popping",
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

  return YYID (yyresult);
}


#line 137 "c.y"

#include"lex.yy.c"
#include<ctype.h>
int count=0;

int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	
   if(!yyparse())
		printf("\nParsing complete\n");
	else
		printf("\nParsing failed\n");
	
	fclose(yyin);
    return 0;
}
         
yyerror(char *s) {
	printf("%d : %s %s\n", yylineno, s, yytext );
}         



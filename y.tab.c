/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006,
   2009, 2010 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */


/* Line 189 of yacc.c  */
#line 72 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     GREAT = 258,
     LESS = 259,
     GREATEQUALS = 260,
     LESSEQUALS = 261,
     OPENBRACE = 262,
     CLOSEBRACE = 263,
     SEMICOLON = 264,
     PLUS = 265,
     MINUS = 266,
     DIVIDE = 267,
     MOD = 268,
     PLUSPLUS = 269,
     MINUSMINUS = 270,
     NOT = 271,
     EQUALSEQUALS = 272,
     EQUALS = 273,
     NOTEQUALS = 274,
     PLUSEQUALS = 275,
     MINUSEQUALS = 276,
     MULEQUALS = 277,
     DIVEQUALS = 278,
     COMMA = 279,
     STAR = 280,
     AND = 281,
     OR = 282,
     OPENPAR = 283,
     CLOSEPAR = 284,
     OPENBRACKET = 285,
     CLOSEBRACKET = 286,
     TYPEDEF = 287,
     INCLUDE = 288,
     RETURN = 289,
     BREAK = 290,
     IF = 291,
     ELSE = 292,
     STRUCT = 293,
     DO = 294,
     WHILE = 295,
     FOR = 296,
     STATIC = 297,
     SIZEOF = 298,
     VOID = 299,
     CONTINUE = 300,
     CONST = 301,
     UNSIGNED = 302,
     INT = 303,
     CHAR = 304,
     SHORT = 305,
     LONG = 306,
     FLOAT = 307,
     DOUBLE = 308,
     BAZINGA = 309,
     CHARACTER = 310,
     WORD = 311,
     IDENTIFIER = 312,
     DOT = 313,
     ARROW = 314,
     MODEQUALS = 315,
     SIGNED = 316,
     ENUM = 317,
     COLON = 318,
     NUMERAL = 319
   };
#endif
/* Tokens.  */
#define GREAT 258
#define LESS 259
#define GREATEQUALS 260
#define LESSEQUALS 261
#define OPENBRACE 262
#define CLOSEBRACE 263
#define SEMICOLON 264
#define PLUS 265
#define MINUS 266
#define DIVIDE 267
#define MOD 268
#define PLUSPLUS 269
#define MINUSMINUS 270
#define NOT 271
#define EQUALSEQUALS 272
#define EQUALS 273
#define NOTEQUALS 274
#define PLUSEQUALS 275
#define MINUSEQUALS 276
#define MULEQUALS 277
#define DIVEQUALS 278
#define COMMA 279
#define STAR 280
#define AND 281
#define OR 282
#define OPENPAR 283
#define CLOSEPAR 284
#define OPENBRACKET 285
#define CLOSEBRACKET 286
#define TYPEDEF 287
#define INCLUDE 288
#define RETURN 289
#define BREAK 290
#define IF 291
#define ELSE 292
#define STRUCT 293
#define DO 294
#define WHILE 295
#define FOR 296
#define STATIC 297
#define SIZEOF 298
#define VOID 299
#define CONTINUE 300
#define CONST 301
#define UNSIGNED 302
#define INT 303
#define CHAR 304
#define SHORT 305
#define LONG 306
#define FLOAT 307
#define DOUBLE 308
#define BAZINGA 309
#define CHARACTER 310
#define WORD 311
#define IDENTIFIER 312
#define DOT 313
#define ARROW 314
#define MODEQUALS 315
#define SIGNED 316
#define ENUM 317
#define COLON 318
#define NUMERAL 319




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 242 "y.tab.c"

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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
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

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  188
/* YYNRULES -- Number of states.  */
#define YYNSTATES  307

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    11,    13,    18,    22,    27,
      31,    35,    38,    41,    43,    47,    49,    52,    55,    58,
      61,    66,    68,    70,    72,    74,    76,    78,    80,    85,
      87,    91,    95,    99,   101,   105,   109,   111,   115,   119,
     123,   127,   129,   133,   137,   139,   141,   143,   145,   149,
     151,   155,   157,   159,   163,   165,   167,   169,   171,   173,
     175,   177,   181,   183,   186,   190,   192,   195,   197,   200,
     202,   205,   207,   211,   213,   217,   219,   221,   223,   225,
     227,   229,   231,   233,   235,   237,   239,   241,   243,   245,
     251,   256,   259,   261,   263,   266,   270,   273,   275,   278,
     280,   282,   286,   288,   293,   299,   302,   304,   308,   310,
     314,   316,   319,   321,   323,   327,   332,   336,   341,   346,
     350,   352,   355,   358,   362,   364,   367,   369,   372,   374,
     378,   381,   384,   386,   388,   392,   394,   397,   399,   401,
     404,   408,   411,   415,   419,   424,   427,   431,   435,   440,
     442,   446,   451,   453,   457,   459,   461,   463,   465,   467,
     469,   473,   476,   480,   484,   489,   491,   494,   496,   499,
     501,   504,   510,   518,   524,   532,   539,   547,   550,   553,
     556,   560,   562,   565,   567,   569,   574,   578,   582
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
     125,     0,    -1,    57,    -1,    56,    -1,    28,    84,    29,
      -1,    66,    -1,    67,    30,    84,    31,    -1,    67,    28,
      29,    -1,    67,    28,    68,    29,    -1,    67,    58,    57,
      -1,    67,    59,    57,    -1,    67,    14,    -1,    67,    15,
      -1,    82,    -1,    68,    58,    82,    -1,    67,    -1,    14,
      69,    -1,    15,    69,    -1,    70,    71,    -1,    43,    69,
      -1,    43,    28,   111,    29,    -1,    25,    -1,    10,    -1,
      11,    -1,    16,    -1,    12,    -1,    13,    -1,    69,    -1,
      28,   111,    29,    71,    -1,    71,    -1,    72,    25,    71,
      -1,    72,    12,    71,    -1,    72,    13,    71,    -1,    72,
      -1,    73,    10,    72,    -1,    73,    11,    72,    -1,    73,
      -1,    74,     4,    73,    -1,    74,     3,    73,    -1,    74,
       6,    73,    -1,    74,     5,    73,    -1,    74,    -1,    75,
      17,    74,    -1,    75,    19,    74,    -1,    75,    -1,    76,
      -1,    77,    -1,    78,    -1,    79,    26,    78,    -1,    79,
      -1,    80,    27,    79,    -1,    80,    -1,    81,    -1,    69,
      83,    82,    -1,    18,    -1,    22,    -1,    23,    -1,    60,
      -1,    20,    -1,    21,    -1,    82,    -1,    84,    24,    82,
      -1,    81,    -1,    87,     9,    -1,    87,    88,     9,    -1,
      90,    -1,    90,    87,    -1,    91,    -1,    91,    87,    -1,
     102,    -1,   102,    87,    -1,    89,    -1,    88,    24,    89,
      -1,   103,    -1,   103,    18,   114,    -1,    32,    -1,    42,
      -1,    44,    -1,    49,    -1,    50,    -1,    48,    -1,    51,
      -1,    52,    -1,    53,    -1,    61,    -1,    47,    -1,    92,
      -1,    99,    -1,    57,    -1,    93,    57,     7,    94,     8,
      -1,    93,     7,    94,     8,    -1,    93,    57,    -1,    38,
      -1,    95,    -1,    94,    95,    -1,    96,    97,     9,    -1,
      91,    96,    -1,    91,    -1,   102,    96,    -1,   102,    -1,
      98,    -1,    97,    24,    98,    -1,   103,    -1,    62,     7,
     100,     8,    -1,    62,    57,     7,   100,     8,    -1,    62,
      57,    -1,   101,    -1,   100,    24,   101,    -1,    57,    -1,
      57,    18,    85,    -1,    46,    -1,   105,   104,    -1,   104,
      -1,    57,    -1,    28,   103,    29,    -1,   104,    30,    85,
      31,    -1,   104,    30,    31,    -1,   104,    28,   107,    29,
      -1,   104,    28,   110,    29,    -1,   104,    28,    29,    -1,
      25,    -1,    25,   106,    -1,    25,   105,    -1,    25,   106,
     105,    -1,   102,    -1,   106,   102,    -1,   108,    -1,   108,
      24,    -1,   109,    -1,   108,    24,   109,    -1,    87,   103,
      -1,    87,   112,    -1,    87,    -1,    57,    -1,   110,    24,
      57,    -1,    96,    -1,    96,   112,    -1,   105,    -1,   113,
      -1,   105,   113,    -1,    28,   112,    29,    -1,    30,    31,
      -1,    30,    85,    31,    -1,   113,    30,    31,    -1,   113,
      30,    85,    31,    -1,    28,    29,    -1,    28,   107,    29,
      -1,   113,    28,    29,    -1,   113,    28,   107,    29,    -1,
      82,    -1,     7,   115,     8,    -1,     7,   115,    24,     8,
      -1,   114,    -1,   115,    24,   114,    -1,   117,    -1,   118,
      -1,   121,    -1,   122,    -1,   123,    -1,   124,    -1,    57,
      63,   116,    -1,     7,     8,    -1,     7,   120,     8,    -1,
       7,   119,     8,    -1,     7,   119,   120,     8,    -1,    86,
      -1,   119,    86,    -1,   116,    -1,   120,   116,    -1,     9,
      -1,    84,     9,    -1,    36,    28,    84,    29,   116,    -1,
      36,    28,    84,    29,   116,    37,   116,    -1,    40,    28,
      84,    29,   116,    -1,    39,   116,    40,    28,    84,    29,
       9,    -1,    41,    28,   121,   121,    29,   116,    -1,    41,
      28,   121,   121,    84,    29,   116,    -1,    45,     9,    -1,
      35,     9,    -1,    34,     9,    -1,    34,    84,     9,    -1,
     126,    -1,   125,   126,    -1,   127,    -1,    86,    -1,    87,
     103,   119,   118,    -1,    87,   103,   118,    -1,   103,   119,
     118,    -1,   103,   118,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    16,    16,    17,    18,    22,    23,    24,    25,    26,
      27,    28,    29,    33,    34,    38,    39,    40,    41,    42,
      43,    47,    48,    49,    50,    51,    52,    56,    57,    61,
      62,    63,    64,    68,    69,    70,    74,    75,    76,    77,
      78,    82,    83,    84,    88,    92,    96,   100,   101,   105,
     106,   110,   114,   115,   119,   120,   121,   122,   123,   124,
     128,   129,   133,   137,   138,   142,   143,   144,   145,   146,
     147,   151,   152,   156,   157,   161,   162,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   181,
     182,   183,   187,   191,   192,   196,   200,   201,   202,   203,
     207,   208,   212,   216,   217,   218,   222,   223,   227,   228,
     232,   236,   237,   241,   242,   243,   244,   245,   246,   247,
     251,   252,   253,   254,   258,   259,   264,   265,   269,   270,
     274,   275,   276,   280,   281,   285,   286,   290,   291,   292,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   308,
     309,   310,   314,   315,   319,   320,   321,   322,   323,   324,
     328,   332,   333,   334,   335,   339,   340,   344,   345,   349,
     350,   354,   355,   359,   360,   361,   362,   367,   368,   369,
     370,   374,   375,   379,   380,   384,   386,   387,   388
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "GREAT", "LESS", "GREATEQUALS",
  "LESSEQUALS", "OPENBRACE", "CLOSEBRACE", "SEMICOLON", "PLUS", "MINUS",
  "DIVIDE", "MOD", "PLUSPLUS", "MINUSMINUS", "NOT", "EQUALSEQUALS",
  "EQUALS", "NOTEQUALS", "PLUSEQUALS", "MINUSEQUALS", "MULEQUALS",
  "DIVEQUALS", "COMMA", "STAR", "AND", "OR", "OPENPAR", "CLOSEPAR",
  "OPENBRACKET", "CLOSEBRACKET", "TYPEDEF", "INCLUDE", "RETURN", "BREAK",
  "IF", "ELSE", "STRUCT", "DO", "WHILE", "FOR", "STATIC", "SIZEOF", "VOID",
  "CONTINUE", "CONST", "UNSIGNED", "INT", "CHAR", "SHORT", "LONG", "FLOAT",
  "DOUBLE", "BAZINGA", "CHARACTER", "WORD", "IDENTIFIER", "DOT", "ARROW",
  "MODEQUALS", "SIGNED", "ENUM", "COLON", "NUMERAL", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    68,    68,    69,    69,    69,    69,    69,
      69,    70,    70,    70,    70,    70,    70,    71,    71,    72,
      72,    72,    72,    73,    73,    73,    74,    74,    74,    74,
      74,    75,    75,    75,    76,    77,    78,    79,    79,    80,
      80,    81,    82,    82,    83,    83,    83,    83,    83,    83,
      84,    84,    85,    86,    86,    87,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    92,    93,    94,    94,    95,    96,    96,    96,    96,
      97,    97,    98,    99,    99,    99,   100,   100,   101,   101,
     102,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   105,   106,   106,   107,   107,   108,   108,
     109,   109,   109,   110,   110,   111,   111,   112,   112,   112,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   114,
     114,   114,   115,   115,   116,   116,   116,   116,   116,   116,
     117,   118,   118,   118,   118,   119,   119,   120,   120,   121,
     121,   122,   122,   123,   123,   123,   123,   124,   124,   124,
     124,   125,   125,   126,   126,   127,   127,   127,   127
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     4,     3,     4,     3,
       3,     2,     2,     1,     3,     1,     2,     2,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     1,     1,     1,     3,     1,
       3,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     2,     1,     1,     2,     3,     2,     1,     2,     1,
       1,     3,     1,     4,     5,     2,     1,     3,     1,     3,
       1,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     2,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     2,     3,     3,     4,     1,     2,     1,     2,     1,
       2,     5,     7,     5,     7,     6,     7,     2,     2,     2,
       3,     1,     2,     1,     1,     4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   120,     0,    75,    92,    76,    77,   110,    85,    80,
      78,    79,    81,    82,    83,    88,    84,     0,   184,     0,
      65,    67,    86,     0,    87,    69,     0,   112,     0,     0,
     181,   183,   124,   122,   121,   113,     0,     0,   105,    63,
       0,    71,    73,    88,    66,    68,     0,    91,    70,     0,
     165,     0,   188,     0,     0,     0,   111,     1,   182,   125,
     123,   114,   108,     0,   106,     0,    64,     0,     0,   186,
       0,    97,     0,    93,     0,    99,     0,   161,   169,    22,
      23,    25,    26,     0,     0,    24,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     2,     5,    15,
      27,     0,    29,    33,    36,    41,    44,    45,    46,    47,
      49,    51,    52,    60,     0,   167,   154,   155,     0,     0,
     156,   157,   158,   159,    73,   166,   187,   119,    88,   132,
       0,   126,   128,     0,   116,     2,    27,    62,     0,     0,
     103,     0,     0,    72,     0,   149,    74,   185,    96,    90,
      94,     0,   100,   102,    98,     0,     0,    16,    17,     2,
       0,   135,     0,   179,     0,   178,     0,     2,     0,     0,
       0,     0,    19,   177,     0,    11,    12,     0,     0,     0,
       0,    54,    58,    59,    55,    56,    57,     0,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   170,     0,   163,     0,   162,   168,     0,     0,
     130,   137,   131,   138,   117,   127,     0,   118,   115,   109,
     107,   104,   152,     0,    95,     0,    89,     4,     0,   137,
     136,     0,   180,     0,     0,     0,     0,     0,   160,     7,
       0,    13,     0,     9,    10,    53,    31,    32,    30,    34,
      35,    38,    37,    40,    39,    42,    43,    48,    50,    61,
     164,   145,     0,     0,   141,     0,   139,     0,     0,   129,
     134,   150,     0,   101,    28,     0,     0,     0,     0,    20,
       8,     0,     6,   146,   140,   142,   147,     0,   143,     0,
     151,   153,   171,     0,   173,     0,     0,    14,   148,   144,
       0,     0,   175,     0,   172,   174,   176
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    98,    99,   240,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   187,   114,
     138,    50,    51,    40,    41,    20,    21,    22,    23,    72,
      73,    74,   151,   152,    24,    63,    64,    25,    26,    27,
      28,    34,   262,   131,   132,   133,   162,   263,   213,   146,
     223,   115,   116,   117,    53,   119,   120,   121,   122,   123,
      29,    30,    31
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -186
static const yytype_int16 yypact[] =
{
     993,    42,    43,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,    20,  -186,     5,  -186,    13,
    1089,  1089,  -186,     8,  -186,  1089,   392,   133,     6,   211,
    -186,  -186,  -186,  -186,    42,  -186,    10,    -4,    26,  -186,
      55,  -186,   370,  -186,  -186,  -186,   343,    65,  -186,   267,
    -186,    13,  -186,   392,  1019,   755,   133,  -186,  -186,  -186,
    -186,  -186,    60,    75,  -186,    -4,  -186,    43,   681,  -186,
     392,   343,   417,  -186,    43,   343,   343,  -186,  -186,  -186,
    -186,  -186,  -186,   872,   872,  -186,  -186,   491,   701,    81,
      82,   623,    86,    92,   891,   142,  -186,  1067,  -186,   140,
      38,   925,  -186,   159,   122,   228,   206,  -186,  -186,  -186,
     139,   155,  -186,  -186,   107,  -186,  -186,  -186,   323,   547,
    -186,  -186,  -186,  -186,   171,  -186,  -186,  -186,  -186,    93,
     174,   145,  -186,    23,  -186,  -186,  -186,  -186,   175,   925,
    -186,    -4,    95,  -186,   681,  -186,  -186,  -186,  -186,  -186,
    -186,   149,  -186,  -186,  -186,   438,   925,  -186,  -186,  1109,
     162,   153,   181,  -186,   151,  -186,   925,   150,   186,   925,
     736,   491,  -186,  -186,   623,  -186,  -186,   762,   925,   157,
     184,  -186,  -186,  -186,  -186,  -186,  -186,   925,  -186,   925,
     925,   925,   925,   925,   925,   925,   925,   925,   925,   925,
     925,   925,  -186,   925,  -186,   586,  -186,  -186,   927,   810,
    -186,    99,  -186,   207,  -186,  1089,   185,  -186,  -186,  -186,
    -186,  -186,  -186,   101,  -186,    43,  -186,  -186,   962,   210,
    -186,   925,  -186,   164,   220,   166,   736,   221,  -186,  -186,
      19,  -186,    84,  -186,  -186,  -186,  -186,  -186,  -186,   159,
     159,   122,   122,   122,   122,   228,   228,  -186,   139,  -186,
    -186,  -186,   222,   223,  -186,   225,   207,  1045,   817,  -186,
    -186,  -186,   662,  -186,  -186,   623,   925,   623,   865,  -186,
    -186,   925,  -186,  -186,  -186,  -186,  -186,   236,  -186,   235,
    -186,  -186,   217,   176,  -186,   623,   198,  -186,  -186,  -186,
     623,   260,  -186,   623,  -186,  -186,  -186
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -186,  -186,  -186,  -186,   -52,  -186,   -78,   -16,    50,    -2,
    -186,  -186,  -186,    70,    83,  -186,   -50,   -51,  -186,   -74,
    -102,    16,     0,  -186,   204,  -186,    30,  -186,  -186,   209,
     -61,   -47,  -186,    61,  -186,   224,   146,     9,    -1,   -24,
       1,  -186,   -48,  -186,    73,  -186,   119,  -110,  -185,  -137,
    -186,   -83,  -186,     4,   125,   173,  -161,  -186,  -186,  -186,
    -186,   264,  -186
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -114
static const yytype_int16 yytable[] =
{
      19,    36,    33,   136,    56,   137,   130,   222,   168,   236,
      32,   150,    37,   160,   164,    46,    18,   145,    42,   212,
      44,    45,    39,   188,   148,    48,   266,  -113,   154,    19,
      52,   157,   158,    65,     2,    60,   207,   219,     1,    61,
     161,     2,   172,    59,   266,    18,    69,   216,   280,   136,
     124,   230,   217,    62,   129,    75,   181,   126,   182,   183,
     184,   185,    38,    35,    66,    47,   124,     1,     1,   125,
      35,     2,    76,   153,   147,   278,    71,   281,   139,    67,
      75,    75,   160,   140,    75,    75,   125,   136,     7,   137,
     165,   238,   233,   145,   150,   235,    75,   160,   186,   141,
      35,    71,    71,   221,   242,    71,    71,   265,   203,   271,
     166,   246,   247,   248,   169,   282,   202,    71,     1,   141,
     170,   208,   207,   209,   161,   272,   241,   208,   210,   209,
     211,   203,   192,   193,   125,   291,   245,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
      35,   173,   259,   274,   175,   176,    35,   136,   224,   137,
     232,    54,   229,    55,    75,   200,   289,    70,   177,   215,
     178,   189,   190,   225,   118,   203,   249,   250,     1,   136,
      75,   228,   201,   209,   191,    71,   203,    56,   203,    68,
     203,   227,   292,   275,   294,   277,   255,   256,   179,   180,
     203,    71,   293,   214,   296,   301,   218,    36,   129,   211,
     231,    57,   302,   174,   243,   129,   136,   304,   137,   287,
     306,   145,   203,   198,   153,   199,   234,   303,   129,   229,
     297,   194,   195,   196,   197,   267,     1,   268,   228,     2,
     209,   244,   270,     3,   251,   252,   253,   254,   276,     4,
     279,   283,   284,     5,   300,     6,   285,     7,     8,     9,
      10,    11,    12,    13,    14,   298,   299,   129,    15,   305,
     257,   143,    16,    17,    49,    77,    78,    79,    80,    81,
      82,    83,    84,    85,   258,   155,   273,   220,   269,   142,
     237,   205,    86,    58,     0,    87,     0,     0,     0,     3,
       0,    88,    89,    90,     0,     4,    91,    92,    93,     5,
      94,     6,    95,     7,     8,     9,    10,    11,    12,    13,
      14,     0,     0,    96,    97,     0,     0,     0,    16,    17,
      49,   204,    78,    79,    80,    81,    82,    83,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     3,     0,    88,    89,    90,
       0,     4,    91,    92,    93,     5,    94,     6,    95,     7,
       8,     9,    10,    11,    12,    13,    14,    49,     0,    96,
      97,     4,     0,     0,    16,    17,     0,     6,    68,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,    49,
      43,     0,     3,     0,    16,    17,     0,     0,     4,     0,
       0,     0,     5,     0,     6,     0,     7,     8,     9,    10,
      11,    12,    13,    14,     3,   149,     0,    43,     0,     0,
       4,    16,    17,     0,     5,     0,     6,     0,     7,     8,
       9,    10,    11,    12,    13,    14,   226,     0,     0,    43,
       0,     0,     0,    16,    17,     4,     0,     0,     0,     0,
       0,     6,     0,     7,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    43,     0,     4,     0,    16,    17,
       0,     0,     6,     0,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,    43,     0,     0,     0,    16,
      17,    79,    80,    81,    82,    83,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,    94,     6,     0,     7,     8,     9,
      10,    11,    12,    13,    14,     0,     0,    96,   159,     0,
       0,     0,    16,    17,    49,   206,    78,    79,    80,    81,
      82,    83,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    88,    89,    90,     0,     0,    91,    92,    93,     0,
      94,     0,    95,    49,   260,    78,    79,    80,    81,    82,
      83,    84,    85,    96,   167,     0,     0,     0,     0,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
      88,    89,    90,     0,     0,    91,    92,    93,     0,    94,
      49,    95,    78,    79,    80,    81,    82,    83,    84,    85,
       0,     0,    96,   167,     0,     0,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,    89,    90,
       0,     0,    91,    92,    93,     0,    94,     0,    95,   144,
     290,     0,    79,    80,    81,    82,    83,    84,    85,    96,
     167,     0,     0,     0,     0,     0,     0,    86,   144,     0,
      87,    79,    80,    81,    82,    83,    84,    85,     0,     0,
       0,     0,     0,     0,     0,    94,    86,     0,     0,    87,
     163,    79,    80,    81,    82,    83,    84,    85,    96,   135,
       0,     0,     0,     0,    94,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,    96,   135,     0,
       0,     0,     0,     0,    94,    78,    79,    80,    81,    82,
      83,    84,    85,     0,     0,     0,     0,    96,   135,     0,
       0,    86,     0,     0,    87,    79,    80,    81,    82,    83,
      84,    85,    79,    80,    81,    82,    83,    84,    85,    94,
      86,     0,     0,    87,     0,     0,   134,    86,     0,     0,
      87,   239,    96,   135,     0,     0,     0,     0,    94,     0,
       0,     0,     0,     0,     0,    94,     0,     0,     0,     0,
       0,    96,   135,     0,     0,     0,     0,     0,    96,   135,
      79,    80,    81,    82,    83,    84,    85,    79,    80,    81,
      82,    83,    84,    85,     0,    86,     0,     0,    87,     0,
       0,   264,    86,     0,     0,    87,     0,     0,   288,     0,
       0,     0,     0,    94,     0,     0,     0,     0,     0,     0,
      94,     0,     0,     0,     0,     0,    96,   135,     0,     0,
       0,     0,     0,    96,   135,    79,    80,    81,    82,    83,
      84,    85,    79,    80,    81,    82,    83,    84,    85,     0,
      86,     0,     0,    87,   295,     0,     0,    86,     0,     0,
     156,    79,    80,    81,    82,    83,    84,    85,    94,     0,
       0,     0,     0,     0,     0,    94,    86,     0,     0,   171,
       0,    96,   135,     0,     0,     0,     0,     0,    96,   135,
       0,     0,     0,     0,    94,    79,    80,    81,    82,    83,
      84,    85,     0,     0,     0,     0,     0,    96,   135,     0,
      86,     0,     1,    87,     0,   208,   261,   209,     0,     3,
       0,     0,     0,     0,     0,     4,     0,     0,    94,     5,
       0,     6,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    96,   135,     0,    15,     0,     0,     1,    16,    17,
     228,   261,   209,     0,     3,     0,     0,     0,     0,     0,
       4,     0,     0,     0,     5,     0,     6,     0,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     1,    43,
       0,     2,     0,    16,    17,     3,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     5,     0,     6,     0,     7,
       8,     9,    10,    11,    12,    13,    14,     0,   127,     0,
      15,     3,     0,     0,    16,    17,     0,     4,     0,     0,
       0,     5,     0,     6,     0,     7,     8,     9,    10,    11,
      12,    13,    14,     0,   286,     0,   128,     3,     0,     0,
      16,    17,     0,     4,     0,     0,     0,     5,     0,     6,
       0,     7,     8,     9,    10,    11,    12,    13,    14,   -88,
       0,     0,    43,     0,     0,   -88,    16,    17,     0,   -88,
       0,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     3,     0,     0,   -88,     0,     0,     4,   -88,   -88,
     174,     5,     0,     6,     0,     7,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,    43,   -88,     0,     0,
      16,    17,     0,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,     0,   -88,     0,     0,     0,
     -88,   -88
};

static const yytype_int16 yycheck[] =
{
       0,     2,     1,    55,    28,    55,    54,   144,    91,   170,
       1,    72,     7,    87,    88,     7,     0,    68,    19,   129,
      20,    21,     9,   101,    71,    25,   211,     7,    75,    29,
      26,    83,    84,     7,    28,    34,   119,   139,    25,    29,
      87,    28,    94,    34,   229,    29,    42,    24,    29,   101,
      51,   161,    29,    57,    54,    46,    18,    53,    20,    21,
      22,    23,    57,    57,     9,    57,    67,    25,    25,    53,
      57,    28,     7,    74,    70,   236,    46,    58,    18,    24,
      71,    72,   156,     8,    75,    76,    70,   139,    46,   139,
       9,   174,   166,   144,   155,   169,    87,   171,    60,    24,
      57,    71,    72,     8,   178,    75,    76,   209,    24,     8,
      28,   189,   190,   191,    28,    31,     9,    87,    25,    24,
      28,    28,   205,    30,   171,    24,   177,    28,   129,    30,
     129,    24,    10,    11,   118,   272,   187,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
      57,     9,   203,   231,    14,    15,    57,   209,     9,   209,
       9,    28,   161,    30,   155,    26,   268,    42,    28,    24,
      30,    12,    13,    24,    49,    24,   192,   193,    25,   231,
     171,    28,    27,    30,    25,   155,    24,   211,    24,    18,
      24,    29,   275,    29,   277,    29,   198,   199,    58,    59,
      24,   171,   276,    29,   278,    29,    31,   208,   208,   208,
      29,     0,   295,    63,    57,   215,   268,   300,   268,   267,
     303,   272,    24,    17,   225,    19,    40,    29,   228,   228,
     281,     3,     4,     5,     6,    28,    25,    30,    28,    28,
      30,    57,    57,    32,   194,   195,   196,   197,    28,    38,
      29,    29,    29,    42,    37,    44,    31,    46,    47,    48,
      49,    50,    51,    52,    53,    29,    31,   267,    57,     9,
     200,    67,    61,    62,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,   201,    76,   225,   141,   215,    65,
     171,   118,    25,    29,    -1,    28,    -1,    -1,    -1,    32,
      -1,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    56,    57,    -1,    -1,    -1,    61,    62,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    28,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     7,    -1,    56,
      57,    38,    -1,    -1,    61,    62,    -1,    44,    18,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,     7,
      57,    -1,    32,    -1,    61,    62,    -1,    -1,    38,    -1,
      -1,    -1,    42,    -1,    44,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    32,     8,    -1,    57,    -1,    -1,
      38,    61,    62,    -1,    42,    -1,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,     8,    -1,    -1,    57,
      -1,    -1,    -1,    61,    62,    38,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    57,    -1,    38,    -1,    61,    62,
      -1,    -1,    44,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    57,    -1,    -1,    -1,    61,
      62,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    43,    44,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    56,    57,    -1,
      -1,    -1,    61,    62,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    -1,    -1,    39,    40,    41,    -1,
      43,    -1,    45,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    -1,    -1,    39,    40,    41,    -1,    43,
       7,    45,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,    43,    -1,    45,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    16,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    25,     7,    -1,
      28,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    25,    -1,    -1,    28,
       9,    10,    11,    12,    13,    14,    15,    16,    56,    57,
      -1,    -1,    -1,    -1,    43,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    43,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    56,    57,    -1,
      -1,    25,    -1,    -1,    28,    10,    11,    12,    13,    14,
      15,    16,    10,    11,    12,    13,    14,    15,    16,    43,
      25,    -1,    -1,    28,    -1,    -1,    31,    25,    -1,    -1,
      28,    29,    56,    57,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    56,    57,
      10,    11,    12,    13,    14,    15,    16,    10,    11,    12,
      13,    14,    15,    16,    -1,    25,    -1,    -1,    28,    -1,
      -1,    31,    25,    -1,    -1,    28,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    56,    57,    10,    11,    12,    13,    14,
      15,    16,    10,    11,    12,    13,    14,    15,    16,    -1,
      25,    -1,    -1,    28,    29,    -1,    -1,    25,    -1,    -1,
      28,    10,    11,    12,    13,    14,    15,    16,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    25,    -1,    -1,    28,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    -1,    43,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,
      25,    -1,    25,    28,    -1,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    43,    42,
      -1,    44,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    56,    57,    -1,    57,    -1,    -1,    25,    61,    62,
      28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    25,    57,
      -1,    28,    -1,    61,    62,    32,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    29,    -1,
      57,    32,    -1,    -1,    61,    62,    -1,    38,    -1,    -1,
      -1,    42,    -1,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    29,    -1,    57,    32,    -1,    -1,
      61,    62,    -1,    38,    -1,    -1,    -1,    42,    -1,    44,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    32,
      -1,    -1,    57,    -1,    -1,    38,    61,    62,    -1,    42,
      -1,    44,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    32,    -1,    -1,    57,    -1,    -1,    38,    61,    62,
      63,    42,    -1,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    57,    38,    -1,    -1,
      61,    62,    -1,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      61,    62
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    28,    32,    38,    42,    44,    46,    47,    48,
      49,    50,    51,    52,    53,    57,    61,    62,    86,    87,
      90,    91,    92,    93,    99,   102,   103,   104,   105,   125,
     126,   127,   102,   105,   106,    57,   103,     7,    57,     9,
      88,    89,   103,    57,    87,    87,     7,    57,    87,     7,
      86,    87,   118,   119,    28,    30,   104,     0,   126,   102,
     105,    29,    57,   100,   101,     7,     9,    24,    18,   118,
     119,    91,    94,    95,    96,   102,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    25,    28,    34,    35,
      36,    39,    40,    41,    43,    45,    56,    57,    66,    67,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    84,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   103,    86,   118,    29,    57,    87,
     107,   108,   109,   110,    31,    57,    69,    81,    85,    18,
       8,    24,   100,    89,     7,    82,   114,   118,    96,     8,
      95,    97,    98,   103,    96,    94,    28,    69,    69,    57,
      84,    96,   111,     9,    84,     9,    28,    57,   116,    28,
      28,    28,    69,     9,    63,    14,    15,    28,    30,    58,
      59,    18,    20,    21,    22,    23,    60,    83,    71,    12,
      13,    25,    10,    11,     3,     4,     5,     6,    17,    19,
      26,    27,     9,    24,     8,   120,     8,   116,    28,    30,
     103,   105,   112,   113,    29,    24,    24,    29,    31,    85,
     101,     8,   114,   115,     9,    24,     8,    29,    28,   105,
     112,    29,     9,    84,    40,    84,   121,   111,   116,    29,
      68,    82,    84,    57,    57,    82,    71,    71,    71,    72,
      72,    73,    73,    73,    73,    74,    74,    78,    79,    82,
       8,    29,   107,   112,    31,    85,   113,    28,    30,   109,
      57,     8,    24,    98,    71,    29,    28,    29,   121,    29,
      29,    58,    31,    29,    29,    31,    29,   107,    31,    85,
       8,   114,   116,    84,   116,    29,    84,    82,    29,    31,
      37,    29,   116,    29,   116,     9,   116
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
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


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
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


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

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

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

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
  YYFPRINTF (stderr, "Stack now");
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


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

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
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
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
#ifndef	YYINITDEPTH
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
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
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
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
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

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
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
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
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
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
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
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
#else /* ! YYPARSE_PARAM */
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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1464 of yacc.c  */
#line 1936 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
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
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1684 of yacc.c  */
#line 391 "yacc.y"

#include <stdio.h>

extern char yytext[];
extern FILE * yyin;
//extern int column;
//comment
yyerror(s)
char *s;
{
	fflush(stdout);
	//printf("\n%*s\n%*s\n", column, "^", column, s);
}

int main(int argc, char* argv[])
{
    /* Call the lexer, then quit. */
    yyin = fopen(argv[1],"r");
    yyparse();
    return 0;
}

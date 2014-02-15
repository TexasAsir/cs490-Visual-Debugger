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
     DOT = 310,
     ARROW = 311,
     MODEQUALS = 312,
     SIGNED = 313,
     ENUM = 314,
     COLON = 315,
     ADDR = 316,
     QUOTE = 317,
     NUMERAL = 318,
     IDENTIFIER = 319,
     WORD = 320,
     CHARACTER = 321
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
#define DOT 310
#define ARROW 311
#define MODEQUALS 312
#define SIGNED 313
#define ENUM 314
#define COLON 315
#define ADDR 316
#define QUOTE 317
#define NUMERAL 318
#define IDENTIFIER 319
#define WORD 320
#define CHARACTER 321




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 13 "yacc.y"

	double dbl;



/* Line 214 of yacc.c  */
#line 246 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 17 "yacc.y"

	//#include "functions.cpp"
	double rightside = 0;
	int start=0;
	


/* Line 264 of yacc.c  */
#line 266 "y.tab.c"

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
#define YYFINAL  59
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1673

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  197
/* YYNRULES -- Number of states.  */
#define YYNSTATES  328

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

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
       2,     2,     2,     2,     2,     2,     2,     2,    67,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    15,    17,    22,
      26,    31,    35,    39,    42,    45,    47,    51,    53,    56,
      59,    62,    65,    70,    72,    74,    76,    78,    80,    82,
      87,    89,    93,    97,   101,   103,   107,   111,   113,   117,
     121,   125,   129,   131,   135,   139,   141,   143,   145,   147,
     151,   153,   157,   159,   161,   166,   170,   172,   174,   176,
     178,   180,   182,   184,   188,   190,   193,   197,   199,   202,
     204,   207,   209,   212,   214,   218,   220,   224,   226,   228,
     230,   232,   234,   236,   238,   240,   242,   244,   246,   248,
     250,   252,   258,   263,   266,   268,   270,   273,   277,   280,
     282,   285,   287,   289,   293,   295,   298,   302,   307,   313,
     316,   318,   322,   324,   328,   330,   333,   335,   337,   341,
     346,   350,   355,   360,   364,   366,   369,   372,   376,   378,
     381,   383,   386,   388,   392,   395,   398,   400,   402,   406,
     408,   411,   413,   415,   418,   422,   425,   429,   433,   438,
     441,   445,   449,   454,   456,   460,   465,   467,   471,   473,
     475,   477,   479,   481,   483,   485,   489,   492,   496,   500,
     505,   507,   510,   512,   515,   517,   520,   525,   530,   534,
     536,   542,   550,   556,   564,   571,   579,   582,   585,   588,
     592,   594,   597,   599,   601,   606,   610,   614
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     130,     0,    -1,    64,    -1,    63,    -1,    66,    -1,    65,
      -1,    28,    87,    29,    -1,    69,    -1,    70,    30,    87,
      31,    -1,    70,    28,    29,    -1,    70,    28,    71,    29,
      -1,    70,    55,    64,    -1,    70,    56,    64,    -1,    70,
      14,    -1,    70,    15,    -1,    85,    -1,    71,    24,    85,
      -1,    70,    -1,    14,    72,    -1,    15,    72,    -1,    73,
      74,    -1,    43,    72,    -1,    43,    28,   114,    29,    -1,
      25,    -1,    10,    -1,    11,    -1,    16,    -1,    61,    -1,
      72,    -1,    28,   114,    29,    74,    -1,    74,    -1,    75,
      25,    74,    -1,    75,    12,    74,    -1,    75,    13,    74,
      -1,    75,    -1,    76,    10,    75,    -1,    76,    11,    75,
      -1,    76,    -1,    77,     4,    76,    -1,    77,     3,    76,
      -1,    77,     6,    76,    -1,    77,     5,    76,    -1,    77,
      -1,    78,    17,    77,    -1,    78,    19,    77,    -1,    78,
      -1,    79,    -1,    80,    -1,    81,    -1,    82,    26,    81,
      -1,    82,    -1,    83,    27,    82,    -1,    83,    -1,    84,
      -1,    94,    72,    86,    85,    -1,    72,    86,    85,    -1,
      18,    -1,    22,    -1,    23,    -1,    57,    -1,    20,    -1,
      21,    -1,    85,    -1,    87,    24,    85,    -1,    84,    -1,
      90,     9,    -1,    90,    91,     9,    -1,    93,    -1,    93,
      90,    -1,    94,    -1,    94,    90,    -1,   105,    -1,   105,
      90,    -1,    92,    -1,    91,    24,    92,    -1,   106,    -1,
     106,    18,   117,    -1,    32,    -1,    42,    -1,    44,    -1,
      49,    -1,    50,    -1,    48,    -1,    51,    -1,    52,    -1,
      53,    -1,    58,    -1,    47,    -1,    95,    -1,   102,    -1,
     125,    -1,    96,    64,     7,    97,     8,    -1,    96,     7,
      97,     8,    -1,    96,    64,    -1,    38,    -1,    98,    -1,
      97,    98,    -1,    99,   100,     9,    -1,    94,    99,    -1,
      94,    -1,   105,    99,    -1,   105,    -1,   101,    -1,   100,
      24,   101,    -1,   106,    -1,    67,    88,    -1,   106,    67,
      88,    -1,    59,     7,   103,     8,    -1,    59,    64,     7,
     103,     8,    -1,    59,    64,    -1,   104,    -1,   103,    24,
     104,    -1,    64,    -1,    64,    18,    88,    -1,    46,    -1,
     108,   107,    -1,   107,    -1,    64,    -1,    28,   106,    29,
      -1,   107,    30,    88,    31,    -1,   107,    30,    31,    -1,
     107,    28,   110,    29,    -1,   107,    28,   113,    29,    -1,
     107,    28,    29,    -1,    25,    -1,    25,   109,    -1,    25,
     108,    -1,    25,   109,   108,    -1,   105,    -1,   109,   105,
      -1,   111,    -1,   111,    24,    -1,   112,    -1,   111,    24,
     112,    -1,    90,   106,    -1,    90,   115,    -1,    90,    -1,
      64,    -1,   113,    24,    64,    -1,    99,    -1,    99,   115,
      -1,   108,    -1,   116,    -1,   108,   116,    -1,    28,   115,
      29,    -1,    30,    31,    -1,    30,    88,    31,    -1,   116,
      30,    31,    -1,   116,    30,    88,    31,    -1,    28,    29,
      -1,    28,   110,    29,    -1,   116,    28,    29,    -1,   116,
      28,   110,    29,    -1,    85,    -1,     7,   118,     8,    -1,
       7,   118,    24,     8,    -1,   117,    -1,   118,    24,   117,
      -1,   120,    -1,    89,    -1,   121,    -1,   124,    -1,   127,
      -1,   128,    -1,   129,    -1,    64,    60,   119,    -1,     7,
       8,    -1,     7,   123,     8,    -1,     7,   122,     8,    -1,
       7,   122,   123,     8,    -1,    89,    -1,   122,    89,    -1,
     119,    -1,   123,   119,    -1,     9,    -1,    87,     9,    -1,
      33,     4,   126,     3,    -1,    33,    62,   126,    62,    -1,
      64,    55,    64,    -1,    64,    -1,    36,    28,    87,    29,
     119,    -1,    36,    28,    87,    29,   119,    37,   119,    -1,
      40,    28,    87,    29,   119,    -1,    39,   119,    40,    28,
      87,    29,     9,    -1,    41,    28,   124,   124,    29,   119,
      -1,    41,    28,   124,   124,    87,    29,   119,    -1,    45,
       9,    -1,    35,     9,    -1,    34,     9,    -1,    34,    87,
       9,    -1,   131,    -1,   130,   131,    -1,   132,    -1,    89,
      -1,    90,   106,   122,   121,    -1,    90,   106,   121,    -1,
     106,   122,   121,    -1,   106,   121,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    29,    32,    33,    34,    38,    39,    40,
      41,    42,    43,    44,    45,    49,    50,    54,    55,    56,
      57,    58,    59,    63,    64,    65,    66,    67,    71,    72,
      76,    77,    85,    93,   104,   105,   114,   129,   130,   131,
     132,   133,   137,   138,   139,   143,   147,   151,   155,   156,
     160,   161,   165,   169,   170,   174,   181,   182,   183,   184,
     185,   186,   190,   191,   195,   199,   200,   204,   205,   206,
     207,   208,   209,   213,   214,   218,   219,   223,   224,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   243,   244,   245,   249,   253,   254,   258,   262,   263,
     264,   265,   269,   270,   274,   275,   276,   280,   281,   282,
     286,   287,   291,   292,   296,   300,   301,   305,   308,   309,
     310,   311,   312,   313,   317,   318,   319,   320,   324,   325,
     330,   331,   335,   336,   340,   341,   342,   346,   347,   351,
     352,   356,   357,   358,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   376,   377,   378,   382,   383,   387,   388,
     389,   390,   391,   392,   393,   397,   401,   402,   403,   404,
     408,   409,   413,   414,   418,   419,   422,   423,   426,   427,
     430,   431,   435,   436,   437,   438,   442,   443,   444,   445,
     451,   454,   460,   461,   465,   466,   467,   468
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
  "DOUBLE", "BAZINGA", "DOT", "ARROW", "MODEQUALS", "SIGNED", "ENUM",
  "COLON", "ADDR", "QUOTE", "NUMERAL", "IDENTIFIER", "WORD", "CHARACTER",
  "':'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
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
  "expression_statement", "include_statement", "include_expression",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition", 0
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
     315,   316,   317,   318,   319,   320,   321,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    69,    69,    69,    69,    70,    70,    70,
      70,    70,    70,    70,    70,    71,    71,    72,    72,    72,
      72,    72,    72,    73,    73,    73,    73,    73,    74,    74,
      75,    75,    75,    75,    76,    76,    76,    77,    77,    77,
      77,    77,    78,    78,    78,    79,    80,    81,    82,    82,
      83,    83,    84,    85,    85,    85,    86,    86,    86,    86,
      86,    86,    87,    87,    88,    89,    89,    90,    90,    90,
      90,    90,    90,    91,    91,    92,    92,    93,    93,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    95,    95,    95,    96,    97,    97,    98,    99,    99,
      99,    99,   100,   100,   101,   101,   101,   102,   102,   102,
     103,   103,   104,   104,   105,   106,   106,   107,   107,   107,
     107,   107,   107,   107,   108,   108,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   112,   113,   113,   114,
     114,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   117,   117,   117,   118,   118,   119,   119,
     119,   119,   119,   119,   119,   120,   121,   121,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   128,   128,   129,   129,   129,   129,
     130,   130,   131,   131,   132,   132,   132,   132
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     1,     1,     1,     3,
       1,     3,     1,     1,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     3,     1,     2,     1,
       2,     1,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     4,     2,     1,     1,     2,     3,     2,     1,
       2,     1,     1,     3,     1,     2,     3,     4,     5,     2,
       1,     3,     1,     3,     1,     2,     1,     1,     3,     4,
       3,     4,     4,     3,     1,     2,     2,     3,     1,     2,
       1,     2,     1,     3,     2,     2,     1,     1,     3,     1,
       2,     1,     1,     2,     3,     2,     3,     3,     4,     2,
       3,     3,     4,     1,     3,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     3,     3,     4,
       1,     2,     1,     2,     1,     2,     4,     4,     3,     1,
       5,     7,     5,     7,     6,     7,     2,     2,     2,     3,
       1,     2,     1,     1,     4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   124,     0,    77,     0,    94,    78,    79,   114,    87,
      82,    80,    81,    83,    84,    85,    86,     0,   117,   193,
       0,    67,    69,    88,     0,    89,    71,     0,   116,     0,
      90,     0,   190,   192,   128,   126,   125,     0,     0,     0,
       0,   109,    65,     0,    73,    75,    68,    70,     0,    93,
      72,     0,   170,     0,   197,     0,     0,     0,   115,     1,
     191,   129,   127,   118,   179,     0,     0,   112,     0,   110,
       0,    66,     0,     0,   195,     0,    99,     0,    95,     0,
     101,     0,   166,   174,    24,    25,     0,     0,    26,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       3,     2,     5,     4,     7,    17,    28,     0,    30,    34,
      37,    42,    45,    46,    47,    48,    50,    52,    53,    62,
       0,   159,    69,   172,   158,   160,     0,     0,   161,   162,
     163,   164,    75,   171,   196,   123,   137,   136,     0,   130,
     132,     0,   120,     2,    28,    64,     0,     0,   176,   177,
       0,   107,     0,     0,    74,     0,   153,     0,    76,   194,
      98,    92,    96,     0,     0,   102,   104,   100,     0,     0,
      18,    19,     0,    99,   139,     0,   188,     0,   187,     0,
     159,     0,     0,     0,     0,    21,   186,     0,    13,    14,
       0,     0,     0,     0,    56,    60,    61,    57,    58,    59,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   175,     0,     0,   168,   159,
       0,   167,   173,     0,     0,   134,   141,   135,   142,   121,
     131,     0,   122,   119,   178,   113,   111,   108,   156,     0,
     105,    97,     0,     0,    91,     6,     0,   141,   140,     0,
     189,     0,     0,     0,     0,     0,   165,     9,     0,    15,
       0,    11,    12,    55,    32,    33,    31,    35,    36,    39,
      38,    41,    40,    43,    44,    49,    51,    63,     0,   169,
     149,     0,     0,   145,     0,   143,     0,     0,   133,   138,
     154,     0,   103,   106,    29,     0,     0,     0,     0,    22,
       0,    10,     8,    54,   150,   144,   146,   151,     0,   147,
       0,   155,   157,   180,     0,   182,     0,     0,    16,   152,
     148,     0,     0,   184,     0,   181,   183,   185
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   104,   105,   258,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   200,   120,
     146,   180,    53,    43,    44,    21,   157,    23,    24,    77,
      78,    79,   164,   165,    25,    68,    69,    26,    27,    28,
      29,    36,   281,   139,   140,   141,   175,   282,   228,   158,
     239,   123,   124,   125,    55,   127,   128,    30,    65,   129,
     130,   131,    31,    32,    33
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -210
static const yytype_int16 yypact[] =
{
    1505,   -11,    15,  -210,    12,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,     6,  -210,  -210,
      25,  1592,  1592,  -210,    22,  -210,  1592,  1395,    16,     4,
    -210,   307,  -210,  -210,  -210,  -210,   -11,    32,   -46,   -46,
      29,    59,  -210,    60,  -210,  1373,  -210,  -210,  1614,    90,
    -210,   365,  -210,    25,  -210,  1395,  1533,  1240,    16,  -210,
    -210,  -210,  -210,  -210,    65,   140,    67,   131,   106,  -210,
      29,  -210,    15,   725,  -210,  1395,  1614,  1422,  -210,    34,
    1614,  1614,  -210,  -210,  -210,  -210,  1308,  1308,  -210,  -210,
     955,   783,   156,   147,   605,   154,   163,  1324,   185,  -210,
    -210,   138,  -210,  -210,  -210,   236,   222,  1332,  -210,   126,
     194,   267,   128,  -210,  -210,  -210,   175,   197,  -210,  -210,
      64,  -210,   898,  -210,  -210,  -210,   425,   485,  -210,  -210,
    -210,  -210,   203,  -210,  -210,  -210,  -210,    35,   218,   229,
    -210,   104,  -210,  -210,  -210,  -210,   226,   199,  -210,  -210,
    1332,  -210,    29,   108,  -210,   725,  -210,  1308,  -210,  -210,
    -210,  -210,  -210,  1332,    82,  -210,   198,  -210,  1444,  1183,
    -210,  -210,   143,  1012,   158,   232,  -210,    86,  -210,  1183,
    -210,   228,  1183,   841,   955,  -210,  -210,   605,  -210,  -210,
    1069,  1183,   210,   211,  -210,  -210,  -210,  -210,  -210,  -210,
    1183,  -210,  1332,  1332,  1332,  1332,  1332,  1332,  1332,  1332,
    1332,  1332,  1332,  1332,  1332,  -210,  1183,   222,  -210,  -210,
     545,  -210,  -210,  1476,  1247,  -210,    57,  -210,   141,  -210,
    1592,   213,  -210,  -210,  -210,  -210,  -210,  -210,  -210,   117,
    -210,  -210,    34,  1332,  -210,  -210,  1570,   151,  -210,  1332,
    -210,   161,   250,   171,   841,   251,  -210,  -210,   173,  -210,
     113,  -210,  -210,  -210,  -210,  -210,  -210,   126,   126,   194,
     194,   194,   194,   267,   267,  -210,   175,  -210,  1183,  -210,
    -210,   254,   258,  -210,   262,   141,   252,  1266,  -210,  -210,
    -210,   665,  -210,  -210,  -210,   605,  1183,   605,  1126,  -210,
    1183,  -210,  -210,  -210,  -210,  -210,  -210,  -210,   260,  -210,
     275,  -210,  -210,   271,   184,  -210,   605,   190,  -210,  -210,
    -210,   605,   300,  -210,   605,  -210,  -210,  -210
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -210,  -210,  -210,  -210,   -50,  -210,   -99,    11,   105,    17,
    -210,  -210,  -210,   107,   103,  -210,   -54,   -24,   101,    27,
    -109,   207,     2,  -210,   247,  -210,     0,  -210,  -210,   241,
     -57,   -65,  -210,    84,  -210,   257,   176,   179,    -1,   -23,
       3,  -210,   -51,  -210,    99,  -210,   146,  -107,  -209,  -145,
    -210,   -85,  -210,    37,    97,   205,  -171,  -210,   295,  -210,
    -210,  -210,  -210,   305,  -210
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      22,    37,    20,   145,    35,   138,    58,   144,   201,   181,
     238,   160,   254,    40,     1,   167,    38,   285,    64,    45,
     162,    22,    22,    46,    47,   174,    22,    22,    50,    48,
     227,    22,     2,    20,    42,     8,   170,   171,   285,    62,
       1,   235,   222,     2,    56,    22,    57,   185,    76,   156,
       1,   122,   132,     2,   240,    22,    22,   144,   137,     1,
       1,    63,     2,   223,    54,   224,    70,   248,    18,    71,
      41,   132,   217,   215,    39,    22,    76,    76,   166,    18,
      76,    76,    74,   298,    72,   223,    49,   224,   216,    18,
     173,   241,   134,    67,   122,   250,   145,    81,    18,    18,
     144,   163,   256,   264,   265,   266,   242,   217,   160,   145,
     216,   162,   159,   144,   151,   284,   237,   172,   177,   174,
     147,    18,    22,   217,    47,   290,   122,   122,   231,   149,
     152,   156,   152,   232,   293,   222,   225,   216,   202,   203,
     226,   291,    75,   148,   302,   211,   312,   212,   126,   150,
     294,   204,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   178,   259,   216,    76,   286,
     145,   287,   245,    76,   144,   179,   263,   247,   310,   246,
      34,   224,   182,     1,   173,   216,   246,   122,   224,   145,
     295,   183,   277,   144,   186,   216,   172,   300,   187,   144,
     297,   213,   301,    58,   205,   206,   251,    19,   216,   253,
     313,   172,   315,   322,   216,    61,   267,   268,   260,   324,
     122,    73,    37,    22,   214,   137,   226,    80,   273,   274,
      22,   323,   137,   145,    52,   308,   325,   144,    19,   327,
     194,   166,   195,   196,   197,   198,    22,   229,   137,   247,
     188,   189,    52,   230,   303,    80,    80,   233,   121,    80,
      80,   249,   133,   234,   190,   243,   191,   156,   252,    80,
     207,   208,   209,   210,   261,   262,   318,   289,   296,   199,
     299,   307,   133,   304,     3,     4,    22,   305,   137,   319,
       5,   192,   193,   306,     6,   122,     7,   122,     8,     9,
      10,    11,    12,    13,    14,    15,   320,    59,   321,   326,
      16,    17,   269,   270,   271,   272,   122,   276,   278,   154,
     275,   122,   168,   314,   122,   317,   292,   153,   236,   288,
     255,   220,     1,   219,    66,     2,    60,     0,     0,     3,
       4,     0,     0,     0,     0,     5,     0,    80,     0,     6,
       0,     7,    80,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,    80,     0,    16,    17,     0,     0,     0,
       0,    18,    51,    82,    83,    84,    85,     0,     0,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,     0,    90,     0,     0,     0,     3,     4,    91,
      92,    93,     0,     5,    94,    95,    96,     6,    97,     7,
      98,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    16,    17,     0,    99,     0,   100,   101,
     102,   103,    51,   218,    83,    84,    85,     0,     0,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,     0,    90,     0,     0,     0,     3,     4,    91,
      92,    93,     0,     5,    94,    95,    96,     6,    97,     7,
      98,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    16,    17,     0,    99,     0,   100,   101,
     102,   103,    51,   221,    83,    84,    85,     0,     0,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,     0,    90,     0,     0,     0,     3,     4,    91,
      92,    93,     0,     5,    94,    95,    96,     6,    97,     7,
      98,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    16,    17,     0,    99,     0,   100,   101,
     102,   103,    51,   279,    83,    84,    85,     0,     0,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,     0,    90,     0,     0,     0,     3,     4,    91,
      92,    93,     0,     5,    94,    95,    96,     6,    97,     7,
      98,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    16,    17,     0,    99,     0,   100,   101,
     102,   103,    51,     0,    83,    84,    85,     0,     0,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,     0,    90,     0,     0,     0,     3,     4,    91,
      92,    93,     0,     5,    94,    95,    96,     6,    97,     7,
      98,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    16,    17,     0,    99,     0,   100,   101,
     102,   103,   155,   311,     0,    84,    85,     0,     0,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,     0,    90,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     5,     0,     0,     0,     0,    97,     7,
       0,     0,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    16,    17,     0,    99,     0,   100,   143,
     102,   103,   155,     0,     0,    84,    85,     0,     0,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,     0,    90,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     5,     0,     0,     0,     0,    97,     7,
       0,     0,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    16,    17,     0,    99,     0,   100,   143,
     102,   103,   176,    84,    85,     0,     0,    86,    87,    88,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
       0,    90,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     5,     0,     0,     0,     0,    97,     7,     0,     0,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
       0,    16,    17,     0,    99,     0,   100,   143,   102,   103,
      83,    84,    85,     0,     0,    86,    87,    88,     0,     0,
       0,     0,     0,     0,     0,     0,    89,     0,     0,    90,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     5,
       0,     0,     0,     0,    97,     7,     0,     0,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,     0,    16,
      17,     0,    99,     0,   100,   143,   102,   103,    84,    85,
       0,     0,    86,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,     0,   169,     0,     0,     0,
       3,     4,     0,     0,     0,     0,     5,     0,     0,     0,
       6,    97,     7,     0,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,     0,    16,    17,     0,    99,
       0,   100,   143,   102,   103,    84,    85,     0,     0,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,     0,    90,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     5,     0,     0,     0,     0,    97,     7,
       0,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    16,    17,     0,    99,     0,   100,   143,
     102,   103,    84,    85,     0,     0,    86,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,    89,     0,     0,
     169,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       5,     0,     0,     0,     0,    97,     7,     0,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     0,     0,     0,
      16,    17,     0,    99,     0,   100,   143,   102,   103,    84,
      85,     0,     0,    86,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,    89,     0,     0,    90,   257,     0,
       0,     0,     4,     0,     0,     0,     0,     5,     0,     0,
       0,     0,    97,     7,     0,     0,     9,    10,    11,    12,
      13,    14,    15,     0,     0,     0,     0,    16,    17,     0,
      99,     0,   100,   143,   102,   103,    84,    85,     0,     0,
      86,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,    89,     0,     0,    90,   316,     0,     0,     0,     4,
       0,     0,     0,     0,     5,     0,     0,     0,     0,    97,
       7,     0,     0,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,     0,    16,    17,     0,    99,     0,   100,
     143,   102,   103,    84,    85,     0,     0,    86,    87,    88,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
       0,    90,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     5,     0,     0,     0,     0,    97,     7,     0,     0,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
       0,    16,    17,     0,    99,     0,   100,   143,   102,   103,
      84,    85,     0,     0,    86,    87,    88,    84,    85,     0,
       0,    86,    87,    88,     0,    89,     0,     0,    90,     0,
       0,   142,    89,     0,     0,    90,    84,    85,   283,     0,
      86,    87,    88,    97,     0,     0,     0,     0,     0,     0,
      97,    89,     0,     0,    90,     0,     0,   309,     0,     0,
       0,    99,     0,   100,   143,   102,   103,     0,    99,    97,
     100,   143,   102,   103,     0,     0,     0,     0,    84,    85,
       0,     0,    86,    87,    88,     0,     0,    99,     0,   100,
     143,   102,   103,    89,    84,    85,   169,     0,    86,    87,
      88,     0,    84,    85,     0,     0,    86,    87,    88,    89,
       0,    97,   184,     0,     0,     0,     0,    89,     0,     0,
      90,     0,     0,     0,     0,     0,     0,    97,     0,    99,
       0,   100,   143,   102,   103,    97,     0,     0,     0,     0,
      51,     0,     0,     0,     0,    99,     0,   100,   143,   102,
     103,    73,     0,    99,     0,   100,   143,   102,   103,     0,
       0,     0,    51,     0,     0,     3,     4,     0,     0,     0,
       0,     5,     0,     0,     0,     6,     0,     7,     0,     8,
       9,    10,    11,    12,    13,    14,    15,     3,     4,     0,
     161,    16,    17,     5,     0,     0,     0,     6,     0,     7,
       0,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,   244,    16,    17,     4,     0,     0,     0,     0,
       5,     0,     0,     0,     0,     0,     7,     0,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     4,     0,     0,
      16,    17,     5,     0,     0,     0,     0,     0,     7,     0,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
       0,     1,    16,    17,   223,   280,   224,     0,     3,     4,
       0,     0,     0,     0,     5,     0,     0,     0,     6,     0,
       7,     0,     8,     9,    10,    11,    12,    13,    14,    15,
       1,     0,     0,     2,    16,    17,     0,     3,     4,     0,
      18,     0,     0,     5,     0,     0,     0,     6,     0,     7,
       0,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,   135,    16,    17,     3,     4,     0,     0,    18,
       0,     5,     0,     0,     0,     6,     0,     7,     0,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
       0,    16,    17,     0,     0,     1,     0,   136,   246,   280,
     224,     0,     3,     4,     0,     0,     0,     0,     5,     0,
       0,     0,     6,     0,     7,     0,     8,     9,    10,    11,
      12,    13,    14,    15,     3,     4,     0,     0,    16,    17,
       5,     0,     0,     0,     6,     0,     7,     0,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     4,     0,     0,
      16,    17,     5,     0,     0,     0,     0,     0,     7,     0,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
       0,     0,    16,    17
};

static const yytype_int16 yycheck[] =
{
       0,     2,     0,    57,     1,    56,    29,    57,   107,    94,
     155,    76,   183,     7,    25,    80,     4,   226,    64,    20,
      77,    21,    22,    21,    22,    90,    26,    27,    26,     7,
     137,    31,    28,    31,     9,    46,    86,    87,   247,    36,
      25,   150,   127,    28,    28,    45,    30,    97,    48,    73,
      25,    51,    53,    28,   163,    55,    56,   107,    56,    25,
      25,    29,    28,    28,    27,    30,     7,   174,    64,     9,
      64,    72,   122,     9,    62,    75,    76,    77,    79,    64,
      80,    81,    45,   254,    24,    28,    64,    30,    24,    64,
      90,     9,    55,    64,    94,     9,   150,     7,    64,    64,
     150,    67,   187,   202,   203,   204,    24,   157,   173,   163,
      24,   168,    75,   163,     8,   224,     8,    90,    91,   184,
      55,    64,   122,   173,   122,     8,   126,   127,    24,    62,
      24,   155,    24,    29,   243,   220,   137,    24,    12,    13,
     137,    24,    45,     3,    31,    17,   291,    19,    51,    18,
     249,    25,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,     9,   190,    24,   168,    28,
     224,    30,    29,   173,   224,    28,   200,   174,   287,    28,
       1,    30,    28,    25,   184,    24,    28,   187,    30,   243,
      29,    28,   216,   243,     9,    24,   169,    24,    60,   249,
      29,    26,    29,   226,    10,    11,   179,     0,    24,   182,
     295,   184,   297,    29,    24,    36,   205,   206,   191,    29,
     220,    18,   223,   223,    27,   223,   223,    48,   211,   212,
     230,   316,   230,   287,    27,   286,   321,   287,    31,   324,
      18,   242,    20,    21,    22,    23,   246,    29,   246,   246,
      14,    15,    45,    24,   278,    76,    77,    31,    51,    80,
      81,    29,    55,    64,    28,    67,    30,   291,    40,    90,
       3,     4,     5,     6,    64,    64,   300,    64,    28,    57,
      29,    29,    75,    29,    32,    33,   286,    29,   286,    29,
      38,    55,    56,    31,    42,   295,    44,   297,    46,    47,
      48,    49,    50,    51,    52,    53,    31,     0,    37,     9,
      58,    59,   207,   208,   209,   210,   316,   214,   217,    72,
     213,   321,    81,   296,   324,   298,   242,    70,   152,   230,
     184,   126,    25,   126,    39,    28,    31,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    38,    -1,   168,    -1,    42,
      -1,    44,   173,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,   184,    -1,    58,    59,    -1,    -1,    -1,
      -1,    64,     7,     8,     9,    10,    11,    -1,    -1,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    59,    -1,    61,    -1,    63,    64,
      65,    66,     7,     8,     9,    10,    11,    -1,    -1,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    59,    -1,    61,    -1,    63,    64,
      65,    66,     7,     8,     9,    10,    11,    -1,    -1,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    59,    -1,    61,    -1,    63,    64,
      65,    66,     7,     8,     9,    10,    11,    -1,    -1,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    59,    -1,    61,    -1,    63,    64,
      65,    66,     7,    -1,     9,    10,    11,    -1,    -1,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    59,    -1,    61,    -1,    63,    64,
      65,    66,     7,     8,    -1,    10,    11,    -1,    -1,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    59,    -1,    61,    -1,    63,    64,
      65,    66,     7,    -1,    -1,    10,    11,    -1,    -1,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    59,    -1,    61,    -1,    63,    64,
      65,    66,     9,    10,    11,    -1,    -1,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    58,    59,    -1,    61,    -1,    63,    64,    65,    66,
       9,    10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,
      59,    -1,    61,    -1,    63,    64,    65,    66,    10,    11,
      -1,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    43,    44,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    58,    59,    -1,    61,
      -1,    63,    64,    65,    66,    10,    11,    -1,    -1,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    44,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    59,    -1,    61,    -1,    63,    64,
      65,    66,    10,    11,    -1,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    43,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      58,    59,    -1,    61,    -1,    63,    64,    65,    66,    10,
      11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    29,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    58,    59,    -1,
      61,    -1,    63,    64,    65,    66,    10,    11,    -1,    -1,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    58,    59,    -1,    61,    -1,    63,
      64,    65,    66,    10,    11,    -1,    -1,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    58,    59,    -1,    61,    -1,    63,    64,    65,    66,
      10,    11,    -1,    -1,    14,    15,    16,    10,    11,    -1,
      -1,    14,    15,    16,    -1,    25,    -1,    -1,    28,    -1,
      -1,    31,    25,    -1,    -1,    28,    10,    11,    31,    -1,
      14,    15,    16,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    25,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    61,    -1,    63,    64,    65,    66,    -1,    61,    43,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    10,    11,
      -1,    -1,    14,    15,    16,    -1,    -1,    61,    -1,    63,
      64,    65,    66,    25,    10,    11,    28,    -1,    14,    15,
      16,    -1,    10,    11,    -1,    -1,    14,    15,    16,    25,
      -1,    43,    28,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    61,
      -1,    63,    64,    65,    66,    43,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    61,    -1,    63,    64,    65,
      66,    18,    -1,    61,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,     7,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    32,    33,    -1,
       8,    58,    59,    38,    -1,    -1,    -1,    42,    -1,    44,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,     8,    58,    59,    33,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    33,    -1,    -1,
      58,    59,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    25,    58,    59,    28,    29,    30,    -1,    32,    33,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    -1,
      44,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      25,    -1,    -1,    28,    58,    59,    -1,    32,    33,    -1,
      64,    -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    44,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    29,    58,    59,    32,    33,    -1,    -1,    64,
      -1,    38,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    25,    -1,    64,    28,    29,
      30,    -1,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    -1,    44,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    32,    33,    -1,    -1,    58,    59,
      38,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    33,    -1,    -1,
      58,    59,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    28,    32,    33,    38,    42,    44,    46,    47,
      48,    49,    50,    51,    52,    53,    58,    59,    64,    89,
      90,    93,    94,    95,    96,   102,   105,   106,   107,   108,
     125,   130,   131,   132,   105,   108,   109,   106,     4,    62,
       7,    64,     9,    91,    92,   106,    90,    90,     7,    64,
      90,     7,    89,    90,   121,   122,    28,    30,   107,     0,
     131,   105,   108,    29,    64,   126,   126,    64,   103,   104,
       7,     9,    24,    18,   121,   122,    94,    97,    98,    99,
     105,     7,     8,     9,    10,    11,    14,    15,    16,    25,
      28,    34,    35,    36,    39,    40,    41,    43,    45,    61,
      63,    64,    65,    66,    69,    70,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      87,    89,    94,   119,   120,   121,   122,   123,   124,   127,
     128,   129,   106,    89,   121,    29,    64,    90,   110,   111,
     112,   113,    31,    64,    72,    84,    88,    55,     3,    62,
      18,     8,    24,   103,    92,     7,    85,    94,   117,   121,
      99,     8,    98,    67,   100,   101,   106,    99,    97,    28,
      72,    72,    87,    94,    99,   114,     9,    87,     9,    28,
      89,   119,    28,    28,    28,    72,     9,    60,    14,    15,
      28,    30,    55,    56,    18,    20,    21,    22,    23,    57,
      86,    74,    12,    13,    25,    10,    11,     3,     4,     5,
       6,    17,    19,    26,    27,     9,    24,    72,     8,    89,
     123,     8,   119,    28,    30,   106,   108,   115,   116,    29,
      24,    24,    29,    31,    64,    88,   104,     8,   117,   118,
      88,     9,    24,    67,     8,    29,    28,   108,   115,    29,
       9,    87,    40,    87,   124,   114,   119,    29,    71,    85,
      87,    64,    64,    85,    74,    74,    74,    75,    75,    76,
      76,    76,    76,    77,    77,    81,    82,    85,    86,     8,
      29,   110,   115,    31,    88,   116,    28,    30,   112,    64,
       8,    24,   101,    88,    74,    29,    28,    29,   124,    29,
      24,    29,    31,    85,    29,    29,    31,    29,   110,    31,
      88,     8,   117,   119,    87,   119,    29,    87,    85,    29,
      31,    37,    29,   119,    29,   119,     9,   119
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
        case 3:

/* Line 1464 of yacc.c  */
#line 29 "yacc.y"
    {
		//printf("numeral %d\n",$1);
	}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 77 "yacc.y"
    {
		printf("multiply %lf\n",rightside);
		if(!start){
			rightside = (yyvsp[(1) - (3)].dbl);
			start=1;
		}
		rightside = rightside*(yyvsp[(3) - (3)].dbl);
	}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 85 "yacc.y"
    {
		printf("divide  %lf\n",rightside);
		if(!start){
			rightside = (yyvsp[(1) - (3)].dbl);
			start=1;
		}
		rightside = rightside/(yyvsp[(3) - (3)].dbl);
	}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 93 "yacc.y"
    {
		//printf("mod\n");
		if(!start){
			rightside = (yyvsp[(1) - (3)].dbl);
			start=1;
		}
		rightside = (int)rightside%(int)(yyvsp[(3) - (3)].dbl);
	}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 105 "yacc.y"
    {
		printf("addition %lf\n",rightside,(yyvsp[(3) - (3)].dbl));
		//printf("sum %lf\n",(double)$<dbl>1+(double)$<dbl>3);
		if(!start){
			rightside = (yyvsp[(1) - (3)].dbl);
			start=1;
		}
		rightside = rightside+(yyvsp[(3) - (3)].dbl);
	}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 114 "yacc.y"
    {
		printf("subtraction %lf\n",rightside);
		if(!start){
			rightside = (yyvsp[(1) - (3)].dbl);
			start=1;
		}
		//printf("%d subtraction %lf %lf\n",start, rightside,$<dbl>3);
		//printf("diff %lf\n",(double)rightside-(double)$<dbl>3);
		//rightside = (double)$<dbl>2-(double)$<dbl>3 - rightside;
		//printf("final = %lf\n",rightside);
		rightside=rightside-(yyvsp[(3) - (3)].dbl);
	}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 170 "yacc.y"
    {
		printf("\ntype specifier Assignment value %lf\n",rightside);
		start=0;
	}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 174 "yacc.y"
    {
		printf("\nAssignment vaule %lf\n",rightside);
		start=0;
	}
    break;

  case 117:

/* Line 1464 of yacc.c  */
#line 305 "yacc.y"
    {
		//printf("direct declarator\n");
	}
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 358 "yacc.y"
    {
		printf("hi?\n");
	}
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 445 "yacc.y"
    {
		//printf("return expr semi\n");
	}
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 451 "yacc.y"
    {
		//printf("translation unit\n");
	}
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 454 "yacc.y"
    {
		//printf("translation unit\n");
	}
    break;



/* Line 1464 of yacc.c  */
#line 2223 "y.tab.c"
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
#line 471 "yacc.y"

#include <stdio.h>

extern char yytext[];
extern FILE * yyin;
extern int column;
//comment
yyerror(s)
char *s;
{
	fflush(stdout);
	////printf("error %s\n",s);
	printf("hue\n%*s\n%*s\n", column, "^", column, s);
}

printnumeral(){
}
int main(int argc, char* argv[])
{
    /* Call the lexer, then quit. */
    yyin = fopen(argv[1],"r");
    //perror("fopen");
    //printf("input file: %s %d\n",argv[1],yyin);
    printf("hue%d\n",yyparse());
    //perror("yyparse");
    return 0;
}


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
	char * wd;
	int leaf;



/* Line 214 of yacc.c  */
#line 248 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 19 "yacc.y"

	//#include "functions.cpp"
	#include <stdio.h>
	#include "stack.h"
	#include <string.h>
	extern "C" int yylex();
	extern int linecount;
	int expcount;
	char * var[2];
	int yyerror(char* s);
	//struct varble** globls;
	//int globalcount =0;
	//int globalmax =100;


/* Line 264 of yacc.c  */
#line 276 "y.tab.c"

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
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1490

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  205
/* YYNRULES -- Number of states.  */
#define YYNSTATES  341

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
     205,   207,   210,   212,   215,   217,   221,   223,   227,   230,
     232,   234,   236,   238,   240,   242,   244,   246,   248,   250,
     252,   254,   256,   258,   264,   269,   272,   274,   276,   279,
     283,   286,   288,   291,   293,   295,   299,   301,   304,   308,
     313,   319,   322,   324,   328,   330,   334,   336,   339,   341,
     343,   347,   352,   356,   361,   366,   370,   372,   375,   378,
     382,   384,   387,   389,   392,   394,   398,   401,   404,   406,
     408,   412,   414,   417,   419,   421,   424,   428,   431,   435,
     439,   444,   447,   451,   455,   460,   462,   466,   471,   473,
     477,   479,   481,   483,   485,   487,   489,   491,   493,   499,
     504,   508,   511,   515,   517,   519,   521,   524,   526,   529,
     531,   534,   536,   539,   544,   549,   553,   555,   561,   569,
     575,   583,   590,   598,   601,   604,   607,   611,   613,   616,
     618,   620,   625,   626,   631,   635
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     133,     0,    -1,    64,    -1,    63,    -1,    66,    -1,    65,
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
      -1,    90,    72,    86,    85,    -1,    72,    86,    85,    -1,
      18,    -1,    22,    -1,    23,    -1,    57,    -1,    20,    -1,
      21,    -1,    85,    -1,    87,    24,    85,    -1,    84,    -1,
      90,     9,    -1,    90,    91,     9,    -1,    93,    -1,    93,
      90,    -1,    94,    25,    -1,    94,    -1,    94,    90,    -1,
     105,    -1,   105,    90,    -1,    92,    -1,    91,    24,    92,
      -1,   106,    -1,   106,    18,   117,    -1,   106,    64,    -1,
      32,    -1,    42,    -1,    44,    -1,    49,    -1,    50,    -1,
      48,    -1,    51,    -1,    52,    -1,    53,    -1,    58,    -1,
      47,    -1,    95,    -1,   102,    -1,   128,    -1,    96,    64,
       7,    97,     8,    -1,    96,     7,    97,     8,    -1,    96,
      64,    -1,    38,    -1,    98,    -1,    97,    98,    -1,    99,
     100,     9,    -1,    94,    99,    -1,    94,    -1,   105,    99,
      -1,   105,    -1,   101,    -1,   100,    24,   101,    -1,   106,
      -1,    67,    88,    -1,   106,    67,    88,    -1,    59,     7,
     103,     8,    -1,    59,    64,     7,   103,     8,    -1,    59,
      64,    -1,   104,    -1,   103,    24,   104,    -1,    64,    -1,
      64,    18,    88,    -1,    46,    -1,   108,   107,    -1,   107,
      -1,    64,    -1,    28,   106,    29,    -1,   107,    30,    88,
      31,    -1,   107,    30,    31,    -1,   107,    28,   110,    29,
      -1,   107,    28,   113,    29,    -1,   107,    28,    29,    -1,
      25,    -1,    25,   109,    -1,    25,   108,    -1,    25,   109,
     108,    -1,   105,    -1,   109,   105,    -1,   111,    -1,   111,
      24,    -1,   112,    -1,   111,    24,   112,    -1,    90,   106,
      -1,    90,   115,    -1,    90,    -1,    64,    -1,   113,    24,
      64,    -1,    99,    -1,    99,   115,    -1,   108,    -1,   116,
      -1,   108,   116,    -1,    28,   115,    29,    -1,    30,    31,
      -1,    30,    88,    31,    -1,   116,    30,    31,    -1,   116,
      30,    88,    31,    -1,    28,    29,    -1,    28,   110,    29,
      -1,   116,    28,    29,    -1,   116,    28,   110,    29,    -1,
      85,    -1,     7,   118,     8,    -1,     7,   118,    24,     8,
      -1,   117,    -1,   118,    24,   117,    -1,   121,    -1,    89,
      -1,   122,    -1,   127,    -1,   130,    -1,   131,    -1,   132,
      -1,   120,    -1,    90,    64,    30,    88,    31,    -1,    90,
      64,    30,    31,    -1,    64,    60,   119,    -1,     7,     8,
      -1,     7,   124,     8,    -1,   125,    -1,   126,    -1,   123,
      -1,   123,   124,    -1,    89,    -1,   125,    89,    -1,   119,
      -1,   126,   119,    -1,     9,    -1,    87,     9,    -1,    33,
       4,   129,     3,    -1,    33,    62,   129,    62,    -1,    64,
      55,    64,    -1,    64,    -1,    36,    28,    87,    29,   119,
      -1,    36,    28,    87,    29,   119,    37,   119,    -1,    40,
      28,    87,    29,   119,    -1,    39,   119,    40,    28,    87,
      29,     9,    -1,    41,    28,   127,   127,    29,   119,    -1,
      41,    28,   127,   127,    87,    29,   119,    -1,    45,     9,
      -1,    35,     9,    -1,    34,     9,    -1,    34,    87,     9,
      -1,   134,    -1,   133,   134,    -1,   135,    -1,    89,    -1,
      90,   106,   125,   122,    -1,    -1,    90,   106,   136,   122,
      -1,   106,   125,   122,    -1,   106,   122,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    38,    38,    46,    63,    72,    80,    86,    87,    97,
      98,   101,   110,   119,   127,   138,   146,   159,   160,   168,
     176,   185,   193,   204,   208,   211,   214,   217,   223,   224,
     236,   237,   248,   258,   271,   272,   282,   295,   296,   306,
     316,   326,   339,   340,   350,   363,   367,   371,   375,   376,
     388,   389,   401,   406,   407,   420,   433,   436,   437,   438,
     439,   440,   444,   445,   449,   453,   454,   461,   462,   463,
     466,   467,   468,   469,   473,   476,   480,   483,   486,   492,
     493,   497,   500,   503,   506,   509,   512,   515,   518,   521,
     524,   525,   526,   530,   531,   532,   536,   540,   541,   545,
     549,   550,   551,   552,   556,   557,   561,   562,   563,   567,
     568,   569,   573,   574,   578,   579,   585,   589,   592,   599,
     603,   604,   607,   610,   611,   612,   616,   617,   618,   619,
     623,   624,   629,   630,   634,   635,   639,   640,   641,   645,
     646,   650,   651,   655,   656,   657,   663,   664,   665,   668,
     669,   672,   673,   674,   675,   679,   680,   681,   685,   686,
     690,   691,   692,   693,   694,   695,   696,   697,   701,   711,
     722,   726,   727,   731,   732,   735,   736,   739,   740,   744,
     745,   749,   750,   753,   754,   757,   758,   761,   762,   766,
     767,   768,   769,   773,   774,   775,   776,   782,   785,   791,
     792,   805,   808,   808,   822,   824
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
  "initializer_list", "statement", "array_declaration",
  "labeled_statement", "compound_statement", "decstat", "decstat_list",
  "declaration_list", "statement_list", "expression_statement",
  "include_statement", "include_expression", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "$@1", 0
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
      90,    90,    90,    90,    91,    91,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    95,    95,    95,    96,    97,    97,    98,
      99,    99,    99,    99,   100,   100,   101,   101,   101,   102,
     102,   102,   103,   103,   104,   104,   105,   106,   106,   107,
     107,   107,   107,   107,   107,   107,   108,   108,   108,   108,
     109,   109,   110,   110,   111,   111,   112,   112,   112,   113,
     113,   114,   114,   115,   115,   115,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   117,   117,   117,   118,   118,
     119,   119,   119,   119,   119,   119,   119,   119,   120,   120,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   129,   129,   130,   130,   131,
     131,   131,   131,   132,   132,   132,   132,   133,   133,   134,
     134,   135,   136,   135,   135,   135
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
       1,     1,     1,     3,     1,     2,     3,     1,     2,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     4,     2,     1,     1,     2,     3,
       2,     1,     2,     1,     1,     3,     1,     2,     3,     4,
       5,     2,     1,     3,     1,     3,     1,     2,     1,     1,
       3,     4,     3,     4,     4,     3,     1,     2,     2,     3,
       1,     2,     1,     2,     1,     3,     2,     2,     1,     1,
       3,     1,     2,     1,     1,     2,     3,     2,     3,     3,
       4,     2,     3,     3,     4,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     4,
       3,     2,     3,     1,     1,     1,     2,     1,     2,     1,
       2,     1,     2,     4,     4,     3,     1,     5,     7,     5,
       7,     6,     7,     2,     2,     2,     3,     1,     2,     1,
       1,     4,     0,     4,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   126,     0,    79,     0,    96,    80,    81,   116,    89,
      84,    82,    83,    85,    86,    87,    88,     0,   119,   200,
       0,    67,    70,    90,     0,    91,    72,     0,   118,     0,
      92,     0,   197,   199,   130,   128,   127,     0,     0,     0,
       0,   111,    65,     0,    74,    76,    68,    69,    71,     0,
      95,    73,     0,   177,     0,   205,     0,     0,     0,   117,
       1,   198,   131,   129,   120,   186,     0,     0,   114,     0,
     112,     0,    66,     0,     0,    78,     0,     0,   101,     0,
      97,     0,   103,     0,   171,   181,    24,    25,     0,     0,
      26,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     3,     2,     5,     4,     7,    17,    28,     0,
      30,    34,    37,    42,    45,    46,    47,    48,    50,    52,
      53,    62,     0,   161,     0,   179,   167,   160,   162,   175,
       0,   173,   174,   163,   164,   165,   166,    76,   178,   204,
     125,   139,   138,     0,   132,   134,     0,   122,     2,    28,
      64,     0,     0,   183,   184,     0,   109,     0,     0,    75,
       0,   155,     0,    77,   201,   203,   100,    94,    98,     0,
       0,   104,   106,   102,     0,     0,    18,    19,     0,    70,
     141,    72,     0,   195,     0,   194,     0,   161,     0,     0,
       0,     0,    21,   193,     0,    13,    14,     0,     0,     0,
       0,    56,    60,    61,    57,    58,    59,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   182,     0,    23,     0,     2,     0,   176,   172,
     180,     0,     0,   136,   143,   137,   144,   123,   133,     0,
     124,   121,   185,   115,   113,   110,   158,     0,   107,    99,
       0,     0,    93,     6,     0,   143,   142,     0,   196,     0,
       0,     0,     0,     0,   170,     9,     0,    15,     0,    11,
      12,    55,    32,    33,    31,    35,    36,    39,    38,    41,
      40,    43,    44,    49,    51,    63,     0,     2,     0,     0,
     151,     0,     0,   147,     0,   145,     0,     0,   135,   140,
     156,     0,   105,   108,    29,     0,     0,     0,     0,    22,
       0,    10,     8,   169,     0,    54,   152,   146,   148,   153,
       0,   149,     0,   157,   159,   187,     0,   189,     0,     0,
      16,   168,   154,   150,     0,     0,   191,     0,   188,   190,
     192
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   106,   107,   266,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   207,   122,
     151,   187,   162,    43,    44,    21,    22,    23,    24,    79,
      80,    81,   170,   171,    25,    69,    70,    26,    37,    28,
      29,    36,   291,   144,   145,   146,   182,   292,   236,   163,
     247,   125,   126,   127,   128,   129,   130,   131,   132,   133,
      30,    66,   134,   135,   136,    31,    32,    33,    77
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -207
static const yytype_int16 yypact[] =
{
    1203,    22,    45,  -207,     4,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,    11,  -207,  -207,
      10,  1409,  1328,  -207,    25,  -207,  1409,   728,   161,   -16,
    -207,   294,  -207,  -207,  -207,  -207,    22,     7,   -34,   -34,
      28,    94,  -207,    86,  -207,   694,  -207,  -207,  -207,  1431,
      98,  -207,   360,  -207,    10,  -207,   728,  1231,  1010,   161,
    -207,  -207,  -207,  -207,  -207,    63,   165,   110,   160,    64,
    -207,    28,  -207,    45,   540,  -207,   728,   199,  1431,   262,
    -207,    74,  1431,  1431,  -207,  -207,  -207,  -207,  1097,  1097,
    -207,  -207,   896,   598,   200,   185,   420,   198,   202,  1104,
     219,  -207,  -207,   172,  -207,  -207,  -207,   193,   359,  1161,
    -207,   175,   241,   345,    36,  -207,  -207,  -207,   210,   218,
    -207,  -207,    95,  -207,   740,  -207,  -207,  -207,  -207,   420,
     266,  1409,   420,  -207,  -207,  -207,  -207,    -2,  -207,  -207,
    -207,  -207,   112,   243,   254,  -207,   166,  -207,  -207,  -207,
    -207,   270,   238,  -207,  -207,  1161,  -207,    28,    70,  -207,
     540,  -207,  1097,  -207,  -207,  -207,  -207,  -207,  -207,  1161,
     115,  -207,   237,  -207,  1147,   896,  -207,  -207,   181,  1299,
     173,  1359,   287,  -207,   125,  -207,   896,  -207,   277,   896,
     656,   896,  -207,  -207,   420,  -207,  -207,   782,   896,   259,
     261,  -207,  -207,  -207,  -207,  -207,  -207,   896,  -207,  1161,
    1161,  1161,  1161,  1161,  1161,  1161,  1161,  1161,  1161,  1161,
    1161,  1161,  -207,   896,    22,   953,    34,   359,  -207,  -207,
    -207,   233,  1017,  -207,   122,  -207,   169,  -207,  1409,   265,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,    73,  -207,  -207,
      74,  1161,  -207,  -207,  1268,   194,  -207,  1161,  -207,   191,
     290,   215,   656,   301,  -207,  -207,   231,  -207,   143,  -207,
    -207,  -207,  -207,  -207,  -207,   175,   175,   241,   241,   241,
     241,   345,   345,  -207,   210,  -207,   953,  -207,  1036,   896,
    -207,   302,   304,  -207,   308,   169,  1387,  1078,  -207,  -207,
    -207,   480,  -207,  -207,  -207,   420,   896,   420,   839,  -207,
     896,  -207,  -207,  -207,   328,  -207,  -207,  -207,  -207,  -207,
     306,  -207,   329,  -207,  -207,   324,   244,  -207,   420,   264,
    -207,  -207,  -207,  -207,   420,   353,  -207,   420,  -207,  -207,
    -207
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -207,  -207,  -207,  -207,   -55,  -207,   -84,    77,   140,    80,
    -207,  -207,  -207,   145,   142,  -207,   -47,   -54,   139,    78,
    -104,    15,     0,  -207,   299,  -207,    38,  -207,  -207,   295,
     -62,   -68,  -207,   123,  -207,   312,   230,     1,     9,   -23,
       3,  -207,   -56,  -207,   151,  -207,   206,  -119,  -206,  -153,
    -207,   -91,  -207,  -207,    59,  -207,   285,    32,  -207,  -177,
    -207,   351,  -207,  -207,  -207,  -207,   384,  -207,  -207
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -203
static const yytype_int16 yytable[] =
{
      20,   143,    34,   149,    35,   188,    59,   246,    38,    27,
     166,   150,     2,   262,   173,    19,    74,   168,    40,    42,
     161,    46,    48,   235,   180,   208,    51,    54,   295,    45,
      65,    20,    49,   176,   177,     1,    64,    62,     2,    63,
      27,   230,    53,  -119,   192,    54,    19,     1,    18,   295,
      82,   243,   124,   218,   149,   219,    54,   142,  -119,    56,
      53,   256,    75,   137,   288,   248,    39,   123,     8,   227,
       1,   138,   156,     2,    18,    41,    54,    76,   245,    82,
      82,   300,   137,    82,    82,   308,    55,    78,   157,    50,
     172,   138,    68,   181,   157,    72,   124,   301,  -119,     1,
     149,    71,     2,   264,   222,    83,   161,   227,   150,    18,
      73,   166,   168,   173,   149,   139,    78,    78,   152,   223,
      78,    78,   150,   180,   249,   272,   273,   274,   294,   124,
     179,    54,   124,   137,   258,   164,   165,     1,    18,   250,
     231,   169,   232,   267,   123,   234,   138,   303,   324,   223,
     231,   233,   232,   271,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   223,   153,   285,
     178,   184,   154,   304,   312,    82,    18,   149,   155,    48,
     181,    51,   181,   255,   314,   150,    18,   209,   210,    57,
     239,    58,   181,   322,   124,   240,   149,   296,     1,   297,
     211,   254,   149,   232,   150,   223,    52,   195,   196,   185,
     253,    59,    78,   186,   325,   223,   327,   179,   180,   179,
     305,   197,   254,   198,   232,    34,   189,    35,   193,   179,
     190,   142,   194,   149,   234,   315,   220,   336,   142,   223,
     320,   150,   149,   338,   307,   221,   340,   161,   199,   200,
     150,   212,   213,   178,   142,   310,   330,   255,     1,   172,
     311,   231,   290,   232,   259,     3,     4,   261,   223,   178,
     167,     5,   237,   335,   229,     6,   268,     7,   238,     8,
       9,    10,    11,    12,    13,    14,    15,   181,   223,   275,
     276,    16,    17,   337,    60,     4,   142,    18,   281,   282,
       5,   241,   242,   178,   251,   124,     7,   124,     8,     9,
      10,    11,    12,    13,    14,    15,   257,   260,   306,     1,
      16,    17,     2,   269,   179,   270,     3,     4,   124,   299,
     309,   316,     5,   317,   124,   332,     6,   124,     7,   318,
       8,     9,    10,    11,    12,    13,    14,    15,   214,   215,
     216,   217,    16,    17,   277,   278,   279,   280,    18,   331,
     333,   334,   339,   284,   178,   283,   289,    52,    84,    85,
      86,    87,   159,   302,    88,    89,    90,   201,   174,   202,
     203,   204,   205,   158,   326,    91,   329,   244,    92,   298,
      67,     0,     3,     4,    93,    94,    95,   263,     5,    96,
      97,    98,     6,    99,     7,   100,     8,     9,    10,    11,
      12,    13,    14,    15,   228,    61,   206,     0,    16,    17,
       0,   101,     0,   102,   103,   104,   105,    52,     0,    85,
      86,    87,     0,     0,    88,    89,    90,     0,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,    92,     0,
       0,     0,     3,     4,    93,    94,    95,     0,     5,    96,
      97,    98,     6,    99,     7,   100,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,     0,    16,    17,
       0,   101,     0,   102,   103,   104,   105,   160,   323,     0,
      86,    87,     0,     0,    88,    89,    90,     0,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,    92,     0,
       0,     0,     3,     4,     0,     0,     0,     0,     5,     0,
       0,     0,     6,    99,     7,     0,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,     0,    16,    17,
       0,   101,     0,   102,   148,   104,   105,   160,     0,     0,
      86,    87,     0,     0,    88,    89,    90,     0,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,    92,     0,
       0,     0,     3,     4,     0,     0,     0,     0,     5,     0,
       0,     0,     6,    99,     7,     0,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,     0,    16,    17,
       0,   101,     0,   102,   148,   104,   105,   183,    86,    87,
       0,     0,    88,    89,    90,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,    92,     0,     0,     0,
       3,     4,     0,     0,     0,     0,     5,     0,     0,     0,
       6,    99,     7,     0,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,     0,    16,    17,     0,   101,
       0,   102,   148,   104,   105,    85,    86,    87,     0,     0,
      88,    89,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,    92,     0,     0,     0,     3,     4,
       0,     0,     0,     0,     5,     0,     0,     0,     6,    99,
       7,  -202,     8,     9,    10,    11,    12,    13,    14,    15,
       0,     0,    74,     0,    16,    17,     0,   101,     0,   102,
     148,   104,   105,     0,     0,     0,     3,     4,     0,     0,
       0,     0,     5,     0,     0,    52,     6,     0,     7,     0,
       8,     9,    10,    11,    12,    13,    14,    15,     0,    42,
      86,    87,    16,    17,    88,    89,    90,     0,    75,     0,
       3,     4,     0,     0,     0,   224,     5,     0,   225,     0,
       6,     0,     7,     0,     8,     9,    10,    11,    12,    13,
      14,    15,     0,    99,     0,     0,    16,    17,     0,     0,
       0,     0,    86,    87,     0,     0,    88,    89,    90,     0,
       0,   101,     0,   102,   226,   104,   105,    91,     0,     0,
      92,   265,     0,     0,     3,     4,     0,     0,     0,     0,
       5,     0,     0,     0,     6,    99,     7,     0,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     0,     0,     0,
      16,    17,     0,   101,     0,   102,   148,   104,   105,    86,
      87,     0,     0,    88,    89,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,     0,     0,    92,   328,     0,
       0,     3,     4,     0,     0,     0,     0,     5,     0,     0,
       0,     6,    99,     7,     0,     8,     9,    10,    11,    12,
      13,    14,    15,     0,     0,     0,     0,    16,    17,     0,
     101,     0,   102,   148,   104,   105,    86,    87,     0,     0,
      88,    89,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,    92,     0,     0,     0,     3,     4,
       0,     0,     0,     0,     5,     0,     0,     0,     6,    99,
       7,     0,     8,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,     0,    16,    17,     0,   101,     0,   102,
     148,   104,   105,    86,    87,     0,     0,    88,    89,    90,
       0,     0,     0,     0,     0,     0,     0,     0,   224,     0,
       0,   286,     0,     0,     0,     3,     4,     0,     0,     0,
       0,     5,     0,     0,     0,     6,    99,     7,     0,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
       0,    16,    17,     0,   101,     0,   102,   287,   104,   105,
      86,    87,     0,     0,    88,    89,    90,    86,    87,     0,
       0,    88,    89,    90,     0,    91,     0,     0,    92,     0,
       0,   147,    91,     0,     0,    92,    86,    87,   293,     0,
      88,    89,    90,    99,     0,     0,     0,     0,     0,     0,
      99,    91,     0,     0,    92,     0,     0,   313,     0,     0,
       0,   101,     0,   102,   148,   104,   105,     0,   101,    99,
     102,   148,   104,   105,     0,     0,     0,     0,    86,    87,
       0,     0,    88,    89,    90,     0,     0,   101,     0,   102,
     148,   104,   105,    91,     0,     0,    92,    86,    87,   321,
       0,    88,    89,    90,    86,    87,     0,     0,    88,    89,
      90,    99,    91,     0,     0,   175,     0,     0,     0,    91,
       0,     0,   191,     0,     0,     0,     0,     0,     0,   101,
      99,   102,   148,   104,   105,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,   252,     0,     0,   101,     0,
     102,   148,   104,   105,     0,   101,     0,   102,   148,   104,
     105,    86,    87,     0,     0,    88,    89,    90,     0,     0,
       4,     0,     0,     0,     0,     5,    91,     0,     0,    92,
       0,     7,     0,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,     0,    99,    16,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,   102,   148,   104,   105,     1,     0,
       0,     2,     0,     0,     0,     3,     4,     0,     0,     0,
       0,     5,     0,     0,     0,     6,     0,     7,     0,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
     140,    16,    17,     3,     4,     0,     0,    18,     0,     5,
       0,     0,     0,     6,     0,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,     0,    16,
      17,     0,     0,     1,     0,   141,   254,   290,   232,     0,
       3,     4,     0,     0,     0,     0,     5,     0,     0,     0,
       6,     0,     7,     0,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,    47,     0,    16,    17,  -101,  -101,
       0,     3,     4,     0,     0,     0,     0,     5,     0,     0,
       0,     6,     0,     7,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    47,     0,     0,     0,    16,    17,     0,
       3,     4,     0,     0,     0,     0,     5,     0,     0,     0,
       6,     0,     7,     0,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,     0,    16,    17,  -103,  -103,
       0,     3,     4,     0,     0,     0,     0,     5,     0,     0,
       0,     6,     0,     7,     0,     8,     9,    10,    11,    12,
      13,    14,    15,     0,     0,     0,   319,    16,    17,     3,
       4,     0,     0,     0,     0,     5,     0,     0,     0,     6,
       0,     7,     0,     8,     9,    10,    11,    12,    13,    14,
      15,     3,     4,     0,     0,    16,    17,     5,     0,     0,
       0,     6,     0,     7,     0,     8,     9,    10,    11,    12,
      13,    14,    15,     0,     4,     0,     0,    16,    17,     5,
       0,     0,     0,     0,     0,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,     0,    16,
      17
};

static const yytype_int16 yycheck[] =
{
       0,    57,     1,    58,     1,    96,    29,   160,     4,     0,
      78,    58,    28,   190,    82,     0,    18,    79,     7,     9,
      74,    21,    22,   142,    92,   109,    26,    27,   234,    20,
      64,    31,     7,    88,    89,    25,    29,    36,    28,    36,
      31,   132,    27,     9,    99,    45,    31,    25,    64,   255,
      49,   155,    52,    17,   109,    19,    56,    57,    24,    27,
      45,   180,    64,    54,    30,   169,    62,    52,    46,   124,
      25,    56,     8,    28,    64,    64,    76,    45,     8,    78,
      79,     8,    73,    82,    83,   262,    27,    49,    24,    64,
      81,    76,    64,    92,    24,     9,    96,    24,    64,    25,
     155,     7,    28,   194,     9,     7,   160,   162,   155,    64,
      24,   179,   174,   181,   169,    56,    78,    79,    55,    24,
      82,    83,   169,   191,     9,   209,   210,   211,   232,   129,
      92,   131,   132,   124,     9,    76,    77,    25,    64,    24,
      28,    67,    30,   197,   129,   142,   131,   251,   301,    24,
      28,   142,    30,   207,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    24,     3,   223,
      92,    93,    62,   257,    31,   174,    64,   232,    18,   179,
     179,   181,   181,   180,   288,   232,    64,    12,    13,    28,
      24,    30,   191,   297,   194,    29,   251,    28,    25,    30,
      25,    28,   257,    30,   251,    24,     7,    14,    15,     9,
      29,   234,   174,    28,   305,    24,   307,   179,   286,   181,
      29,    28,    28,    30,    30,   224,    28,   224,     9,   191,
      28,   231,    60,   288,   231,   289,    26,   328,   238,    24,
     296,   288,   297,   334,    29,    27,   337,   301,    55,    56,
     297,    10,    11,   175,   254,    24,   310,   254,    25,   250,
      29,    28,    29,    30,   186,    32,    33,   189,    24,   191,
       8,    38,    29,    29,     8,    42,   198,    44,    24,    46,
      47,    48,    49,    50,    51,    52,    53,   286,    24,   212,
     213,    58,    59,    29,     0,    33,   296,    64,   218,   219,
      38,    31,    64,   225,    67,   305,    44,   307,    46,    47,
      48,    49,    50,    51,    52,    53,    29,    40,    28,    25,
      58,    59,    28,    64,   286,    64,    32,    33,   328,    64,
      29,    29,    38,    29,   334,    29,    42,   337,    44,    31,
      46,    47,    48,    49,    50,    51,    52,    53,     3,     4,
       5,     6,    58,    59,   214,   215,   216,   217,    64,    31,
      31,    37,     9,   221,   286,   220,   227,     7,     8,     9,
      10,    11,    73,   250,    14,    15,    16,    18,    83,    20,
      21,    22,    23,    71,   306,    25,   308,   157,    28,   238,
      39,    -1,    32,    33,    34,    35,    36,   191,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   129,    31,    57,    -1,    58,    59,
      -1,    61,    -1,    63,    64,    65,    66,     7,    -1,     9,
      10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    61,    -1,    63,    64,    65,    66,     7,     8,    -1,
      10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    61,    -1,    63,    64,    65,    66,     7,    -1,    -1,
      10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    61,    -1,    63,    64,    65,    66,     9,    10,    11,
      -1,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    43,    44,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    58,    59,    -1,    61,
      -1,    63,    64,    65,    66,     9,    10,    11,    -1,    -1,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    43,
      44,     7,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    18,    -1,    58,    59,    -1,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    38,    -1,    -1,     7,    42,    -1,    44,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,     9,
      10,    11,    58,    59,    14,    15,    16,    -1,    64,    -1,
      32,    33,    -1,    -1,    -1,    25,    38,    -1,    28,    -1,
      42,    -1,    44,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    43,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    10,    11,    -1,    -1,    14,    15,    16,    -1,
      -1,    61,    -1,    63,    64,    65,    66,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      58,    59,    -1,    61,    -1,    63,    64,    65,    66,    10,
      11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    58,    59,    -1,
      61,    -1,    63,    64,    65,    66,    10,    11,    -1,    -1,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    43,
      44,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    58,    59,    -1,    61,    -1,    63,
      64,    65,    66,    10,    11,    -1,    -1,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    43,    44,    -1,    46,
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
      64,    65,    66,    25,    -1,    -1,    28,    10,    11,    31,
      -1,    14,    15,    16,    10,    11,    -1,    -1,    14,    15,
      16,    43,    25,    -1,    -1,    28,    -1,    -1,    -1,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      43,    63,    64,    65,    66,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,    61,    -1,
      63,    64,    65,    66,    -1,    61,    -1,    63,    64,    65,
      66,    10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    25,    -1,    -1,    28,
      -1,    44,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    43,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    63,    64,    65,    66,    25,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      29,    58,    59,    32,    33,    -1,    -1,    64,    -1,    38,
      -1,    -1,    -1,    42,    -1,    44,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    25,    -1,    64,    28,    29,    30,    -1,
      32,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    -1,    44,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    25,    -1,    58,    59,    29,    30,
      -1,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    -1,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    25,    -1,    -1,    -1,    58,    59,    -1,
      32,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    -1,    44,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    58,    59,    29,    30,
      -1,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    -1,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    29,    58,    59,    32,
      33,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      -1,    44,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    32,    33,    -1,    -1,    58,    59,    38,    -1,    -1,
      -1,    42,    -1,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    33,    -1,    -1,    58,    59,    38,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,
      59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    28,    32,    33,    38,    42,    44,    46,    47,
      48,    49,    50,    51,    52,    53,    58,    59,    64,    89,
      90,    93,    94,    95,    96,   102,   105,   106,   107,   108,
     128,   133,   134,   135,   105,   108,   109,   106,     4,    62,
       7,    64,     9,    91,    92,   106,    90,    25,    90,     7,
      64,    90,     7,    89,    90,   122,   125,    28,    30,   107,
       0,   134,   105,   108,    29,    64,   129,   129,    64,   103,
     104,     7,     9,    24,    18,    64,   125,   136,    94,    97,
      98,    99,   105,     7,     8,     9,    10,    11,    14,    15,
      16,    25,    28,    34,    35,    36,    39,    40,    41,    43,
      45,    61,    63,    64,    65,    66,    69,    70,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    87,    89,    90,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   130,   131,   132,   106,    89,   122,
      29,    64,    90,   110,   111,   112,   113,    31,    64,    72,
      84,    88,    55,     3,    62,    18,     8,    24,   103,    92,
       7,    85,    90,   117,   122,   122,    99,     8,    98,    67,
     100,   101,   106,    99,    97,    28,    72,    72,    87,    94,
      99,   105,   114,     9,    87,     9,    28,    89,   119,    28,
      28,    28,    72,     9,    60,    14,    15,    28,    30,    55,
      56,    18,    20,    21,    22,    23,    57,    86,    74,    12,
      13,    25,    10,    11,     3,     4,     5,     6,    17,    19,
      26,    27,     9,    24,    25,    28,    64,    72,   124,     8,
     119,    28,    30,   106,   108,   115,   116,    29,    24,    24,
      29,    31,    64,    88,   104,     8,   117,   118,    88,     9,
      24,    67,     8,    29,    28,   108,   115,    29,     9,    87,
      40,    87,   127,   114,   119,    29,    71,    85,    87,    64,
      64,    85,    74,    74,    74,    75,    75,    76,    76,    76,
      76,    77,    77,    81,    82,    85,    28,    64,    30,    86,
      29,   110,   115,    31,    88,   116,    28,    30,   112,    64,
       8,    24,   101,    88,    74,    29,    28,    29,   127,    29,
      24,    29,    31,    31,    88,    85,    29,    29,    31,    29,
     110,    31,    88,     8,   117,   119,    87,   119,    29,    87,
      85,    31,    29,    31,    37,    29,   119,    29,   119,     9,
     119
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
        case 2:

/* Line 1464 of yacc.c  */
#line 38 "yacc.y"
    {
		int size = strlen((yyvsp[(1) - (1)].wd));
		size=size+6;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//id ");
		strcat((yyval.wd),(yyvsp[(1) - (1)].wd));
		printf("identifier %s\n",(yyval.wd));
	}
    break;

  case 3:

/* Line 1464 of yacc.c  */
#line 46 "yacc.y"
    {
		//printf("numeral %d\n",$1);
		if(!strchr((yyvsp[(1) - (1)].wd),'.')){
			int size = strlen((yyvsp[(1) - (1)].wd));
			size=size+7;
			(yyval.wd)=(char *)malloc(sizeof(char)*size);
			strcat((yyval.wd),"//int ");
			strcat((yyval.wd),(yyvsp[(1) - (1)].wd));
		}
		else{
			int size = strlen((yyvsp[(1) - (1)].wd));
			size=size+7;
			(yyval.wd)=(char *)malloc(sizeof(char)*size);
			strcat((yyval.wd),"//dbl ");
			strcat((yyval.wd),(yyvsp[(1) - (1)].wd));
		}
	}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 63 "yacc.y"
    {
		
		int size = strlen((yyvsp[(1) - (1)].wd));
		size=size+8;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//char ");
		strcat((yyval.wd),(yyvsp[(1) - (1)].wd));
		printf("character %s\n",(yyval.wd));
	}
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 72 "yacc.y"
    {
		int size = strlen((yyvsp[(1) - (1)].wd));
		size=size+8;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//word ");
		strcat((yyval.wd),(yyvsp[(1) - (1)].wd));
		printf("word %s\n",(yyval.wd));
	}
    break;

  case 6:

/* Line 1464 of yacc.c  */
#line 80 "yacc.y"
    {
		(yyval.wd) = (yyvsp[(2) - (3)].wd);
	}
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 87 "yacc.y"
    {
		printf("array2!\n");
		int size = strlen((yyvsp[(1) - (4)].wd))+strlen((yyvsp[(3) - (4)].wd));
		size=size+9;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//index ");
		strcat((yyval.wd),(yyvsp[(1) - (4)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (4)].wd));
		printf("index %s\n",(yyval.wd));
	}
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 98 "yacc.y"
    {
		printf("TYPE\n");
	}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 101 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+7;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//dot ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		printf("DOT %s\n",(yyval.wd));
	}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 110 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+9;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//arrow ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		printf("ARROW %s\n",(yyval.wd));
	}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 119 "yacc.y"
    {
		int size = strlen((yyvsp[(2) - (2)].wd));
		size=size+8;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//++pf ");
		strcat((yyval.wd),(yyvsp[(2) - (2)].wd));
		printf("pppp %s\n",(yyval.wd));
	}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 127 "yacc.y"
    {
		int size = strlen((yyvsp[(2) - (2)].wd));
		size=size+8;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//--pf ");
		strcat((yyval.wd),(yyvsp[(2) - (2)].wd));
		printf("mmmm %s\n",(yyval.wd));
	}
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 138 "yacc.y"
    {
		int size = strlen((yyval.wd));
		size=size+7;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//arg ");
		strcat((yyval.wd),(yyvsp[(1) - (1)].wd));
		printf("argument %s\n",(yyval.wd));
	}
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 146 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(2) - (3)].wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+7;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//arg ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
//		strcat($<wd>$,$<wd>2);
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		printf("argument %s\n",(yyval.wd));
	}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 160 "yacc.y"
    {
		int size = strlen((yyvsp[(2) - (2)].wd));
		size=size+6;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//++ ");
		strcat((yyval.wd),(yyvsp[(2) - (2)].wd));
		printf("plosplos %s\n",(yyval.wd));
	}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 168 "yacc.y"
    {
		int size = strlen((yyvsp[(2) - (2)].wd));
		size=size+6;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//-- ");
		strcat((yyval.wd),(yyvsp[(2) - (2)].wd));
		printf("minusminus %s\n",(yyval.wd));
	}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 176 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(2) - (2)].wd));
		size=size+8;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//unop ");
		strcat((yyval.wd),(yyvsp[(1) - (2)].wd));
		strcat((yyval.wd),(yyvsp[(2) - (2)].wd));
		printf("unop %s\n",(yyval.wd));	
	}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 185 "yacc.y"
    {
		int size = strlen((yyvsp[(2) - (2)].wd));
		size=size+10;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//sizeof ");
		strcat((yyval.wd),(yyvsp[(2) - (2)].wd));
		printf("sizeof %s\n",(yyval.wd));
	}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 193 "yacc.y"
    {
		int size = strlen((yyvsp[(3) - (4)].wd));
		size=size+14;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//sizeoftype ");
		strcat((yyval.wd),(yyvsp[(3) - (4)].wd));
		printf("sizeoftype %s\n",(yyval.wd));
	}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 204 "yacc.y"
    {
		//printf("pointer dereferenced\n");
		(yyval.wd)="* ";
	}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 208 "yacc.y"
    {
		(yyval.wd)="+ ";
	}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 211 "yacc.y"
    {
		(yyval.wd)="- ";
	}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 214 "yacc.y"
    {
		(yyval.wd)="! ";
	}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 217 "yacc.y"
    {
		(yyval.wd)="& ";
	}
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 224 "yacc.y"
    {
		int size = strlen((yyvsp[(2) - (4)].wd))+strlen((yyvsp[(4) - (4)].wd));
		size=size+8;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//cast ");
		strcat((yyval.wd),(yyvsp[(2) - (4)].wd));
		strcat((yyval.wd),(yyvsp[(4) - (4)].wd));
		printf("CAST %s\n",(yyval.wd));
	}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 237 "yacc.y"
    {
		//printf("multiply %lf\n",$<dbl>$);
		//$<dbl>$=$<dbl>$*$<dbl>3;
		int size = strlen((yyval.wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+7;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//mul ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		printf("multiply %s\n",(yyval.wd));
	}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 248 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+7;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//div ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		//$<dbl>$=$<dbl>$/$<dbl>3;
		printf("divide  %s\n",(yyval.wd));
	}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 258 "yacc.y"
    {
		//printf("mod\n");
		int size = strlen((yyval.wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+7;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//mod ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		//$<dbl>$=(int)$<dbl>$%(int)$<dbl>3;
	}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 272 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+7;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//add ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		//$<dbl>$=$<dbl>$+$<dbl>3;
		printf("addition %s\n",(yyval.wd));
	}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 282 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+6;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//sub");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		//$<dbl>$=$<dbl>$-$<dbl>3;
		printf("subtraction %s\n",(yyval.wd));
	}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 296 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+8;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//less ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		//$<dbl>$=$<dbl>$-$<dbl>3;
		printf("less op %s\n",(yyval.wd));
	}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 306 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+6;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//gt ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		//$<dbl>$=$<dbl>$-$<dbl>3;
		printf("great  %s\n",(yyval.wd));
	}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 316 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+6;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//le ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		//$<dbl>$=$<dbl>$-$<dbl>3;
		printf("less eq %s\n",(yyval.wd));
	}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 326 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+6;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//ge ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		//$<dbl>$=$<dbl>$-$<dbl>3;
		printf("great eq %s\n",(yyval.wd));
	}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 340 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+8;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//eqeq ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		//$<dbl>$=$<dbl>$-$<dbl>3;
		printf("equalsequals %s\n",(yyval.wd));
	}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 350 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+7;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//neq ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		//$<dbl>$=$<dbl>$-$<dbl>3;
		printf("notequals %s\n",(yyval.wd));
	}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 376 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+7;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//and ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		printf("AND %s\n",(yyval.wd));
	}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 389 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+6;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//or ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		printf("OR %s\n",(yyval.wd));
	}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 407 "yacc.y"
    {
		//assg destination op expression
		int size = strlen((yyval.wd))+strlen((yyvsp[(2) - (4)].wd))+strlen((yyvsp[(3) - (4)].wd))+strlen((yyvsp[(4) - (4)].wd));
		size=size+11;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//decassg ");
		strcat((yyval.wd),(yyvsp[(1) - (4)].wd));
		strcat((yyval.wd),(yyvsp[(2) - (4)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (4)].wd));
		strcat((yyval.wd),(yyvsp[(4) - (4)].wd));
		printf("ASSIGNMENT %s\n",(yyval.wd));
	}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 420 "yacc.y"
    {
		int size = strlen((yyval.wd))+strlen((yyvsp[(2) - (3)].wd))+strlen((yyvsp[(3) - (3)].wd));
		size=size+8;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//assg ");
		strcat((yyval.wd),(yyvsp[(1) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(2) - (3)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (3)].wd));
		printf("ASSIGNMENT %s\n",(yyval.wd));
	}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 433 "yacc.y"
    {
		(yyval.wd)=" = ";
	}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 454 "yacc.y"
    {
		var[0]=(yyvsp[(1) - (3)].wd);
		var[1]=(yyvsp[(2) - (3)].wd);
	}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 463 "yacc.y"
    {
		printf("pointer declared\n");
	}
    break;

  case 74:

/* Line 1464 of yacc.c  */
#line 473 "yacc.y"
    {
		//printf("declarator %s\n",$<wd>1);
	}
    break;

  case 76:

/* Line 1464 of yacc.c  */
#line 480 "yacc.y"
    {
		//printf("declarator UUUUUUUUUU\n");
	}
    break;

  case 77:

/* Line 1464 of yacc.c  */
#line 483 "yacc.y"
    {
		//printf("init assignment !@$@#%$@#$#\n");
	}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 486 "yacc.y"
    {
		//printf("identifier GGGGGGG\n");
	}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 497 "yacc.y"
    {
		(yyval.wd)="void";
	}
    break;

  case 82:

/* Line 1464 of yacc.c  */
#line 500 "yacc.y"
    {
		(yyval.wd)="char";
	}
    break;

  case 83:

/* Line 1464 of yacc.c  */
#line 503 "yacc.y"
    {
		(yyval.wd)="short";
	}
    break;

  case 84:

/* Line 1464 of yacc.c  */
#line 506 "yacc.y"
    {
		(yyval.wd)="int";
	}
    break;

  case 85:

/* Line 1464 of yacc.c  */
#line 509 "yacc.y"
    {
		(yyval.wd)="long";
	}
    break;

  case 86:

/* Line 1464 of yacc.c  */
#line 512 "yacc.y"
    {
		(yyval.wd)="float";
	}
    break;

  case 87:

/* Line 1464 of yacc.c  */
#line 515 "yacc.y"
    {
		(yyval.wd)="double";
	}
    break;

  case 88:

/* Line 1464 of yacc.c  */
#line 518 "yacc.y"
    {
		(yyval.wd)="signed";
	}
    break;

  case 89:

/* Line 1464 of yacc.c  */
#line 521 "yacc.y"
    {
		(yyval.wd)="unsigned";
	}
    break;

  case 115:

/* Line 1464 of yacc.c  */
#line 579 "yacc.y"
    {
		//printf("ASFDSGSG\n");
	}
    break;

  case 117:

/* Line 1464 of yacc.c  */
#line 589 "yacc.y"
    {
		printf("pointer found h4h4h4h4h4hh4\n");
	}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 592 "yacc.y"
    {
		//printf("declarator %s\n",$<wd>1);
		(yyval.wd)=(yyvsp[(1) - (1)].wd);
	}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 599 "yacc.y"
    {
		printf("direct declarator FUCK TEEMO\n");
		(yyval.wd)=(yyvsp[(1) - (1)].wd);
	}
    break;

  case 121:

/* Line 1464 of yacc.c  */
#line 604 "yacc.y"
    {
		printf("why god why %s\n",(yyvsp[(1) - (4)].wd));
	}
    break;

  case 122:

/* Line 1464 of yacc.c  */
#line 607 "yacc.y"
    {
		printf("why god why %s\n",(yyvsp[(1) - (3)].wd));
	}
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 657 "yacc.y"
    {
		printf("hi?\n");
	}
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 665 "yacc.y"
    {
		printf("why god why %s\n",(yyvsp[(1) - (3)].wd));
	}
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 669 "yacc.y"
    {
		printf("why god why %s\n",(yyvsp[(1) - (4)].wd));
	}
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 701 "yacc.y"
    {
		int size = strlen((yyvsp[(1) - (5)].wd))+strlen((yyvsp[(3) - (5)].wd))+strlen((yyvsp[(4) - (5)].wd));
		size=size+12;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//indexdec ");
		strcat((yyval.wd),(yyvsp[(1) - (5)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (5)].wd));
		strcat((yyval.wd),(yyvsp[(4) - (5)].wd));
		printf("indexdec %s\n",(yyval.wd));
	}
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 711 "yacc.y"
    {
		int size = strlen((yyvsp[(1) - (4)].wd))+strlen((yyvsp[(3) - (4)].wd));
		size=size+9;
		(yyval.wd)=(char *)malloc(sizeof(char)*size);
		strcat((yyval.wd),"//index ");
		strcat((yyval.wd),(yyvsp[(1) - (4)].wd));
		strcat((yyval.wd),(yyvsp[(3) - (4)].wd));
		printf("index %s\n",(yyval.wd));
	}
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 776 "yacc.y"
    {
		//printf("return expr semi\n");
	}
    break;

  case 197:

/* Line 1464 of yacc.c  */
#line 782 "yacc.y"
    {
		//printf("translation unit\n");
	}
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 785 "yacc.y"
    {
		//printf("translation unit\n");
	}
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 792 "yacc.y"
    {
		printf("global variable %s %s\n",var[0], var[1]);
		//(((struct varble *)globls+globalcount))->name=var[1];
		//(((struct varble *)globls+globalcount))->type=var[0];
		//globalcount++;
		//if(globalcount >=globalmax){
		//	globalmax *=2;
		//	globls = realloc(globls,sizeof(struct varble)*globalmax);
		//}
	}
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 805 "yacc.y"
    {
		printf("HIHI FUNCTION\n");
	}
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 808 "yacc.y"
    {
		printf("function line %d %s %s\n",linecount,(yyvsp[(1) - (2)].wd),(yyvsp[(2) - (2)].wd));
		cstack::thiscstack.funcs[cstack::thiscstack.funcount] = new function;
		cstack::thiscstack.funcs[cstack::thiscstack.funcount]->startpoint=linecount;
		cstack::thiscstack.funcs[cstack::thiscstack.funcount]->type=(yyvsp[(1) - (2)].wd);
		cstack::thiscstack.funcs[cstack::thiscstack.funcount]->name=(yyvsp[(2) - (2)].wd);
		cstack::thiscstack.funcount++;
		if(cstack::thiscstack.funcount >=cstack::thiscstack.funcmax){
			cstack::thiscstack.funcmax *=2;
			cstack::thiscstack.funcs = (function **)realloc(cstack::thiscstack.funcs,sizeof(function *)*cstack::thiscstack.funcmax);
		}
	}
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 819 "yacc.y"
    {
		//printf("function definition2\n");
	}
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 822 "yacc.y"
    {
	}
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 824 "yacc.y"
    {
	}
    break;



/* Line 1464 of yacc.c  */
#line 2976 "y.tab.c"
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
#line 828 "yacc.y"

#include <stdio.h>

extern char yytext[];
extern FILE * yyin;
extern int column;
//comment
int yyerror(char * s)
{
	fflush(stdout);
	////printf("error %s\n",s);
	printf("hue\n%*s\n%*s\n", column, "^", column, s);
}



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
#define YYLAST   1674

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  198
/* YYNRULES -- Number of states.  */
#define YYNSTATES  329

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
     204,   207,   209,   212,   214,   218,   220,   224,   227,   229,
     231,   233,   235,   237,   239,   241,   243,   245,   247,   249,
     251,   253,   255,   261,   266,   269,   271,   273,   276,   280,
     283,   285,   288,   290,   292,   296,   298,   301,   305,   310,
     316,   319,   321,   325,   327,   331,   333,   336,   338,   340,
     344,   349,   353,   358,   363,   367,   369,   372,   375,   379,
     381,   384,   386,   389,   391,   395,   398,   401,   403,   405,
     409,   411,   414,   416,   418,   421,   425,   428,   432,   436,
     441,   444,   448,   452,   457,   459,   463,   468,   470,   474,
     476,   478,   480,   482,   484,   486,   488,   492,   495,   499,
     503,   508,   510,   513,   515,   518,   520,   523,   528,   533,
     537,   539,   545,   553,   559,   567,   574,   582,   585,   588,
     591,   595,   597,   600,   602,   604,   609,   613,   617
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
     106,    18,   117,    -1,   106,    64,    -1,    32,    -1,    42,
      -1,    44,    -1,    49,    -1,    50,    -1,    48,    -1,    51,
      -1,    52,    -1,    53,    -1,    58,    -1,    47,    -1,    95,
      -1,   102,    -1,   125,    -1,    96,    64,     7,    97,     8,
      -1,    96,     7,    97,     8,    -1,    96,    64,    -1,    38,
      -1,    98,    -1,    97,    98,    -1,    99,   100,     9,    -1,
      94,    99,    -1,    94,    -1,   105,    99,    -1,   105,    -1,
     101,    -1,   100,    24,   101,    -1,   106,    -1,    67,    88,
      -1,   106,    67,    88,    -1,    59,     7,   103,     8,    -1,
      59,    64,     7,   103,     8,    -1,    59,    64,    -1,   104,
      -1,   103,    24,   104,    -1,    64,    -1,    64,    18,    88,
      -1,    46,    -1,   108,   107,    -1,   107,    -1,    64,    -1,
      28,   106,    29,    -1,   107,    30,    88,    31,    -1,   107,
      30,    31,    -1,   107,    28,   110,    29,    -1,   107,    28,
     113,    29,    -1,   107,    28,    29,    -1,    25,    -1,    25,
     109,    -1,    25,   108,    -1,    25,   109,   108,    -1,   105,
      -1,   109,   105,    -1,   111,    -1,   111,    24,    -1,   112,
      -1,   111,    24,   112,    -1,    90,   106,    -1,    90,   115,
      -1,    90,    -1,    64,    -1,   113,    24,    64,    -1,    99,
      -1,    99,   115,    -1,   108,    -1,   116,    -1,   108,   116,
      -1,    28,   115,    29,    -1,    30,    31,    -1,    30,    88,
      31,    -1,   116,    30,    31,    -1,   116,    30,    88,    31,
      -1,    28,    29,    -1,    28,   110,    29,    -1,   116,    28,
      29,    -1,   116,    28,   110,    29,    -1,    85,    -1,     7,
     118,     8,    -1,     7,   118,    24,     8,    -1,   117,    -1,
     118,    24,   117,    -1,   120,    -1,    89,    -1,   121,    -1,
     124,    -1,   127,    -1,   128,    -1,   129,    -1,    64,    60,
     119,    -1,     7,     8,    -1,     7,   123,     8,    -1,     7,
     122,     8,    -1,     7,   122,   123,     8,    -1,    89,    -1,
     122,    89,    -1,   119,    -1,   123,   119,    -1,     9,    -1,
      87,     9,    -1,    33,     4,   126,     3,    -1,    33,    62,
     126,    62,    -1,    64,    55,    64,    -1,    64,    -1,    36,
      28,    87,    29,   119,    -1,    36,    28,    87,    29,   119,
      37,   119,    -1,    40,    28,    87,    29,   119,    -1,    39,
     119,    40,    28,    87,    29,     9,    -1,    41,    28,   124,
     124,    29,   119,    -1,    41,    28,   124,   124,    87,    29,
     119,    -1,    45,     9,    -1,    35,     9,    -1,    34,     9,
      -1,    34,    87,     9,    -1,   131,    -1,   130,   131,    -1,
     132,    -1,    89,    -1,    90,   106,   122,   121,    -1,    90,
     106,   121,    -1,   106,   122,   121,    -1,   106,   121,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    29,    32,    33,    34,    38,    39,    40,
      41,    42,    43,    44,    45,    49,    50,    54,    55,    56,
      57,    58,    59,    63,    64,    65,    66,    67,    71,    72,
      76,    77,    87,    97,   109,   110,   121,   138,   139,   140,
     141,   142,   146,   147,   148,   152,   156,   160,   164,   165,
     169,   170,   174,   178,   179,   183,   190,   191,   192,   193,
     194,   195,   199,   200,   204,   208,   209,   213,   214,   215,
     216,   217,   218,   222,   223,   227,   228,   229,   233,   234,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   253,   254,   255,   259,   263,   264,   268,   272,
     273,   274,   275,   279,   280,   284,   285,   286,   290,   291,
     292,   296,   297,   301,   302,   306,   310,   311,   315,   318,
     319,   320,   321,   322,   323,   327,   328,   329,   330,   334,
     335,   340,   341,   345,   346,   350,   351,   352,   356,   357,
     361,   362,   366,   367,   368,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   386,   387,   388,   392,   393,   397,
     398,   399,   400,   401,   402,   403,   407,   411,   412,   413,
     414,   418,   419,   423,   424,   428,   429,   432,   433,   436,
     437,   440,   441,   445,   446,   447,   448,   452,   453,   454,
     455,   461,   464,   470,   471,   475,   476,   477,   478
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
      90,    90,    90,    91,    91,    92,    92,    92,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    96,    97,    97,    98,    99,
      99,    99,    99,   100,   100,   101,   101,   101,   102,   102,
     102,   103,   103,   104,   104,   105,   106,   106,   107,   107,
     107,   107,   107,   107,   107,   108,   108,   108,   108,   109,
     109,   110,   110,   111,   111,   112,   112,   112,   113,   113,
     114,   114,   115,   115,   115,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   117,   117,   117,   118,   118,   119,
     119,   119,   119,   119,   119,   119,   120,   121,   121,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   128,   128,   129,   129,   129,
     129,   130,   130,   131,   131,   132,   132,   132,   132
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
       2,     1,     2,     1,     3,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     4,     2,     1,     1,     2,     3,     2,
       1,     2,     1,     1,     3,     1,     2,     3,     4,     5,
       2,     1,     3,     1,     3,     1,     2,     1,     1,     3,
       4,     3,     4,     4,     3,     1,     2,     2,     3,     1,
       2,     1,     2,     1,     3,     2,     2,     1,     1,     3,
       1,     2,     1,     1,     2,     3,     2,     3,     3,     4,
       2,     3,     3,     4,     1,     3,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     3,     3,
       4,     1,     2,     1,     2,     1,     2,     4,     4,     3,
       1,     5,     7,     5,     7,     6,     7,     2,     2,     2,
       3,     1,     2,     1,     1,     4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   125,     0,    78,     0,    95,    79,    80,   115,    88,
      83,    81,    82,    84,    85,    86,    87,     0,   118,   194,
       0,    67,    69,    89,     0,    90,    71,     0,   117,     0,
      91,     0,   191,   193,   129,   127,   126,     0,     0,     0,
       0,   110,    65,     0,    73,    75,    68,    70,     0,    94,
      72,     0,   171,     0,   198,     0,     0,     0,   116,     1,
     192,   130,   128,   119,   180,     0,     0,   113,     0,   111,
       0,    66,     0,     0,    77,   196,     0,   100,     0,    96,
       0,   102,     0,   167,   175,    24,    25,     0,     0,    26,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     3,     2,     5,     4,     7,    17,    28,     0,    30,
      34,    37,    42,    45,    46,    47,    48,    50,    52,    53,
      62,     0,   160,    69,   173,   159,   161,     0,     0,   162,
     163,   164,   165,    75,   172,   197,   124,   138,   137,     0,
     131,   133,     0,   121,     2,    28,    64,     0,     0,   177,
     178,     0,   108,     0,     0,    74,     0,   154,     0,    76,
     195,    99,    93,    97,     0,     0,   103,   105,   101,     0,
       0,    18,    19,     0,   100,   140,     0,   189,     0,   188,
       0,   160,     0,     0,     0,     0,    21,   187,     0,    13,
      14,     0,     0,     0,     0,    56,    60,    61,    57,    58,
      59,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   176,     0,     0,   169,
     160,     0,   168,   174,     0,     0,   135,   142,   136,   143,
     122,   132,     0,   123,   120,   179,   114,   112,   109,   157,
       0,   106,    98,     0,     0,    92,     6,     0,   142,   141,
       0,   190,     0,     0,     0,     0,     0,   166,     9,     0,
      15,     0,    11,    12,    55,    32,    33,    31,    35,    36,
      39,    38,    41,    40,    43,    44,    49,    51,    63,     0,
     170,   150,     0,     0,   146,     0,   144,     0,     0,   134,
     139,   155,     0,   104,   107,    29,     0,     0,     0,     0,
      22,     0,    10,     8,    54,   151,   145,   147,   152,     0,
     148,     0,   156,   158,   181,     0,   183,     0,     0,    16,
     153,   149,     0,     0,   185,     0,   182,   184,   186
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   105,   106,   259,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   201,   121,
     147,   181,    53,    43,    44,    21,   158,    23,    24,    78,
      79,    80,   165,   166,    25,    68,    69,    26,    27,    28,
      29,    36,   282,   140,   141,   142,   176,   283,   229,   159,
     240,   124,   125,   126,    55,   128,   129,    30,    65,   130,
     131,   132,    31,    32,    33
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -192
static const yytype_int16 yypact[] =
{
    1478,    -5,    10,  -192,    11,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,     4,  -192,  -192,
      21,  1593,  1593,  -192,     6,  -192,  1593,  1371,    91,    36,
    -192,   282,  -192,  -192,  -192,  -192,    -5,   -22,   -46,   -46,
     -27,    54,  -192,    41,  -192,   854,  -192,  -192,  1615,   115,
    -192,   340,  -192,    21,  -192,  1371,  1506,  1242,    91,  -192,
    -192,  -192,  -192,  -192,    14,   150,    97,   154,    51,  -192,
     -27,  -192,    10,   700,  -192,  -192,  1371,  1615,  1393,  -192,
      19,  1615,  1615,  -192,  -192,  -192,  -192,  1310,  1310,  -192,
    -192,   957,   758,   190,   191,   580,   194,   197,  1326,   230,
    -192,  -192,   195,  -192,  -192,  -192,    79,   223,  1334,  -192,
     170,   129,   212,   132,  -192,  -192,  -192,   247,   250,  -192,
    -192,   108,  -192,   900,  -192,  -192,  -192,   400,   460,  -192,
    -192,  -192,  -192,    -2,  -192,  -192,  -192,  -192,    62,   249,
     255,  -192,   139,  -192,  -192,  -192,  -192,   252,   220,  -192,
    -192,  1334,  -192,   -27,    96,  -192,   700,  -192,  1310,  -192,
    -192,  -192,  -192,  -192,  1334,   137,  -192,   218,  -192,  1417,
    1185,  -192,  -192,   146,  1014,   166,   257,  -192,   141,  -192,
    1185,  -192,   248,  1185,   816,   957,  -192,  -192,   580,  -192,
    -192,  1071,  1185,   226,   227,  -192,  -192,  -192,  -192,  -192,
    -192,  1185,  -192,  1334,  1334,  1334,  1334,  1334,  1334,  1334,
    1334,  1334,  1334,  1334,  1334,  1334,  -192,  1185,   223,  -192,
    -192,   520,  -192,  -192,  1449,  1249,  -192,    88,  -192,   182,
    -192,  1593,   229,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
     100,  -192,  -192,    19,  1334,  -192,  -192,  1543,   228,  -192,
    1334,  -192,   160,   264,   173,   816,   265,  -192,  -192,   176,
    -192,    65,  -192,  -192,  -192,  -192,  -192,  -192,   170,   170,
     129,   129,   129,   129,   212,   212,  -192,   247,  -192,  1185,
    -192,  -192,   266,   268,  -192,   270,   182,  1571,  1268,  -192,
    -192,  -192,   640,  -192,  -192,  -192,   580,  1185,   580,  1128,
    -192,  1185,  -192,  -192,  -192,  -192,  -192,  -192,  -192,   273,
    -192,   272,  -192,  -192,   262,   177,  -192,   580,   179,  -192,
    -192,  -192,   580,   295,  -192,   580,  -192,  -192,  -192
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -192,  -192,  -192,  -192,    56,  -192,   -74,    22,    43,    63,
    -192,  -192,  -192,    94,    90,  -192,   -54,   -44,    93,   -25,
    -111,   111,     2,  -192,   237,  -192,     0,  -192,  -192,   231,
     -70,     7,  -192,    69,  -192,   246,   165,    24,    -1,   -23,
       3,  -192,   -51,  -192,    92,  -192,   134,  -121,  -191,  -144,
    -192,   -85,  -192,   -13,   135,   200,  -175,  -192,   297,  -192,
    -192,  -192,  -192,   290,  -192
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      22,    37,    20,   146,    35,   139,    58,    63,   163,   255,
     182,    40,   239,    48,    54,    38,    73,   228,    64,    45,
       1,    22,    22,    46,    47,    34,    22,    22,    50,   157,
      42,    22,    75,    20,   202,     1,   286,    67,     2,    62,
     236,     8,   135,   223,     1,    22,     1,     2,    77,     2,
      71,   123,   133,   241,   249,    22,    22,   286,   138,   152,
      61,    70,    74,   160,     2,    72,   173,   178,    41,   148,
      49,   133,    81,    39,    18,   153,    22,    77,    77,   167,
     299,    77,    77,    18,   161,    18,   164,     1,   168,   217,
     224,   174,   225,   189,   190,   123,   303,   146,   175,   163,
      18,    81,    81,   257,   238,    81,    81,   191,   291,   192,
     146,    19,   157,   145,   285,    81,   224,   216,   225,    56,
     153,    57,    82,    22,   292,    47,    18,   123,   123,   265,
     266,   267,   217,   294,   193,   194,   223,   226,    52,   206,
     207,   227,    19,   171,   172,   173,   242,   260,   313,   212,
     251,   213,    18,   149,   186,   252,    52,   264,   254,   150,
     173,   243,   122,   232,   145,   217,   134,   261,   233,    77,
     217,   146,   151,   278,    77,   246,   295,   311,   248,   218,
      76,   161,   203,   204,   217,   174,   127,   134,   123,   296,
     146,     1,   175,    81,   247,   205,   225,   217,    81,   179,
     301,   217,   298,   217,    58,   302,   323,   145,   325,    81,
     287,   314,   288,   316,   218,   208,   209,   210,   211,   180,
     145,   123,   183,    37,    22,   184,   138,   227,   268,   269,
     218,    22,   324,   138,   146,   304,   309,   326,   220,   187,
     328,   195,   167,   196,   197,   198,   199,    22,   157,   138,
     248,   270,   271,   272,   273,   188,   247,   319,   225,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   315,   214,   318,   274,   275,   215,   230,   231,
     200,   145,    59,   234,   235,   244,   250,    22,   253,   138,
     262,   263,   297,   290,   300,   305,   123,   306,   123,   322,
     145,   307,   320,   321,   327,   277,   145,     1,   276,   155,
       2,   279,   293,   169,     3,     4,   154,   123,   237,   256,
       5,    60,   123,   289,     6,   123,     7,   221,     8,     9,
      10,    11,    12,    13,    14,    15,    66,     0,     0,     0,
      16,    17,     0,     0,   145,     0,    18,    51,    83,    84,
      85,    86,     0,     0,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     3,     4,    92,    93,    94,     0,     5,    95,
      96,    97,     6,    98,     7,    99,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,     0,    16,    17,
       0,   100,     0,   101,   102,   103,   104,    51,   219,    84,
      85,    86,     0,     0,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     3,     4,    92,    93,    94,     0,     5,    95,
      96,    97,     6,    98,     7,    99,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,     0,    16,    17,
       0,   100,     0,   101,   102,   103,   104,    51,   222,    84,
      85,    86,     0,     0,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     3,     4,    92,    93,    94,     0,     5,    95,
      96,    97,     6,    98,     7,    99,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,     0,    16,    17,
       0,   100,     0,   101,   102,   103,   104,    51,   280,    84,
      85,    86,     0,     0,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     3,     4,    92,    93,    94,     0,     5,    95,
      96,    97,     6,    98,     7,    99,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,     0,    16,    17,
       0,   100,     0,   101,   102,   103,   104,    51,     0,    84,
      85,    86,     0,     0,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     3,     4,    92,    93,    94,     0,     5,    95,
      96,    97,     6,    98,     7,    99,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,     0,    16,    17,
       0,   100,     0,   101,   102,   103,   104,   156,   312,     0,
      85,    86,     0,     0,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     5,     0,
       0,     0,     0,    98,     7,     0,     0,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,     0,    16,    17,
       0,   100,     0,   101,   144,   103,   104,   156,     0,     0,
      85,    86,     0,     0,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     5,     0,
       0,     0,     0,    98,     7,     0,     0,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,     0,    16,    17,
       0,   100,     0,   101,   144,   103,   104,   177,    85,    86,
       0,     0,    87,    88,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,     0,     0,    91,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     5,     0,     0,     0,
       0,    98,     7,     0,     0,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,     0,    16,    17,     0,   100,
       0,   101,   144,   103,   104,    84,    85,    86,     0,     0,
      87,    88,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,    91,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     5,     0,     0,     0,     0,    98,
       7,    51,     0,     9,    10,    11,    12,    13,    14,    15,
       0,     0,    73,     0,    16,    17,     0,   100,     0,   101,
     144,   103,   104,     0,     0,     0,     3,     4,     0,     0,
       0,     0,     5,     0,     0,     0,     6,     0,     7,     0,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
      85,    86,    16,    17,    87,    88,    89,     0,    74,     0,
       0,     0,     0,     0,     0,    90,     0,     0,   170,     0,
       0,     0,     3,     4,     0,     0,     0,     0,     5,     0,
       0,     0,     6,    98,     7,     0,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,     0,    16,    17,
       0,   100,     0,   101,   144,   103,   104,    85,    86,     0,
       0,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,     0,     0,    91,     0,     0,     0,     0,
       4,     0,     0,     0,     0,     5,     0,     0,     0,     0,
      98,     7,     0,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,     0,     0,    16,    17,     0,   100,     0,
     101,   144,   103,   104,    85,    86,     0,     0,    87,    88,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,     0,   170,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     5,     0,     0,     0,     0,    98,     7,     0,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
       0,     0,    16,    17,     0,   100,     0,   101,   144,   103,
     104,    85,    86,     0,     0,    87,    88,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,     0,     0,    91,
     258,     0,     0,     0,     4,     0,     0,     0,     0,     5,
       0,     0,     0,     0,    98,     7,     0,     0,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,     0,    16,
      17,     0,   100,     0,   101,   144,   103,   104,    85,    86,
       0,     0,    87,    88,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,     0,     0,    91,   317,     0,     0,
       0,     4,     0,     0,     0,     0,     5,     0,     0,     0,
       0,    98,     7,     0,     0,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,     0,    16,    17,     0,   100,
       0,   101,   144,   103,   104,    85,    86,     0,     0,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,     0,     0,    91,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     5,     0,     0,     0,     0,    98,     7,
       0,     0,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    16,    17,     0,   100,     0,   101,   144,
     103,   104,    85,    86,     0,     0,    87,    88,    89,    85,
      86,     0,     0,    87,    88,    89,     0,    90,     0,     0,
      91,     0,     0,   143,    90,     0,     0,    91,    85,    86,
     284,     0,    87,    88,    89,    98,     0,     0,     0,     0,
       0,     0,    98,    90,     0,     0,    91,     0,     0,   310,
       0,     0,     0,   100,     0,   101,   144,   103,   104,     0,
     100,    98,   101,   144,   103,   104,     0,     0,     0,     0,
      85,    86,     0,     0,    87,    88,    89,     0,     0,   100,
       0,   101,   144,   103,   104,    90,    85,    86,   170,     0,
      87,    88,    89,     0,    85,    86,     0,     0,    87,    88,
      89,    90,     0,    98,   185,     0,     0,     0,     0,    90,
       0,     0,    91,     0,     0,     0,     0,     0,     0,    98,
       0,   100,     0,   101,   144,   103,   104,    98,    51,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,   101,
     144,   103,   104,     0,     0,   100,     0,   101,   144,   103,
     104,   162,     0,     3,     4,     0,     0,     0,     0,     5,
       0,     0,     0,     6,     0,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,   245,     4,     0,     0,    16,
      17,     5,     0,     0,     0,     0,     0,     7,     0,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
       4,    16,    17,     0,     0,     5,     0,     0,     0,     0,
       0,     7,     0,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,     0,     1,    16,    17,   224,   281,   225,
       0,     3,     4,     0,     0,     0,     0,     5,     0,     0,
       0,     6,     0,     7,     0,     8,     9,    10,    11,    12,
      13,    14,    15,     1,     0,     0,     2,    16,    17,     0,
       3,     4,     0,    18,     0,     0,     5,     0,     0,     0,
       6,     0,     7,     0,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,   136,    16,    17,     3,     4,
       0,     0,    18,     0,     5,     0,     0,     0,     6,     0,
       7,     0,     8,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,     0,    16,    17,     0,     0,     1,     0,
     137,   247,   281,   225,     0,     3,     4,     0,     0,     0,
       0,     5,     0,     0,     0,     6,     0,     7,     0,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
     308,    16,    17,     3,     4,     0,     0,     0,     0,     5,
       0,     0,     0,     6,     0,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,     3,     4,     0,     0,    16,
      17,     5,     0,     0,     0,     6,     0,     7,     0,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     4,     0,
       0,    16,    17,     5,     0,     0,     0,     0,     0,     7,
       0,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    16,    17
};

static const yytype_int16 yycheck[] =
{
       0,     2,     0,    57,     1,    56,    29,    29,    78,   184,
      95,     7,   156,     7,    27,     4,    18,   138,    64,    20,
      25,    21,    22,    21,    22,     1,    26,    27,    26,    73,
       9,    31,    45,    31,   108,    25,   227,    64,    28,    36,
     151,    46,    55,   128,    25,    45,    25,    28,    48,    28,
       9,    51,    53,   164,   175,    55,    56,   248,    56,     8,
      36,     7,    64,    76,    28,    24,    91,    92,    64,    55,
      64,    72,    48,    62,    64,    24,    76,    77,    78,    80,
     255,    81,    82,    64,    77,    64,    67,    25,    81,    24,
      28,    91,    30,    14,    15,    95,    31,   151,    91,   169,
      64,    77,    78,   188,     8,    81,    82,    28,     8,    30,
     164,     0,   156,    57,   225,    91,    28,     9,    30,    28,
      24,    30,     7,   123,    24,   123,    64,   127,   128,   203,
     204,   205,    24,   244,    55,    56,   221,   138,    27,    10,
      11,   138,    31,    87,    88,   170,     9,   191,   292,    17,
       9,    19,    64,     3,    98,   180,    45,   201,   183,    62,
     185,    24,    51,    24,   108,    24,    55,   192,    29,   169,
      24,   225,    18,   217,   174,    29,   250,   288,   175,   123,
      45,   174,    12,    13,    24,   185,    51,    76,   188,    29,
     244,    25,   185,   169,    28,    25,    30,    24,   174,     9,
      24,    24,    29,    24,   227,    29,    29,   151,    29,   185,
      28,   296,    30,   298,   158,     3,     4,     5,     6,    28,
     164,   221,    28,   224,   224,    28,   224,   224,   206,   207,
     174,   231,   317,   231,   288,   279,   287,   322,   127,     9,
     325,    18,   243,    20,    21,    22,    23,   247,   292,   247,
     247,   208,   209,   210,   211,    60,    28,   301,    30,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   297,    26,   299,   212,   213,    27,    29,    24,
      57,   225,     0,    31,    64,    67,    29,   287,    40,   287,
      64,    64,    28,    64,    29,    29,   296,    29,   298,    37,
     244,    31,    29,    31,     9,   215,   250,    25,   214,    72,
      28,   218,   243,    82,    32,    33,    70,   317,   153,   185,
      38,    31,   322,   231,    42,   325,    44,   127,    46,    47,
      48,    49,    50,    51,    52,    53,    39,    -1,    -1,    -1,
      58,    59,    -1,    -1,   288,    -1,    64,     7,     8,     9,
      10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    61,    -1,    63,    64,    65,    66,     7,     8,     9,
      10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    61,    -1,    63,    64,    65,    66,     7,     8,     9,
      10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    61,    -1,    63,    64,    65,    66,     7,     8,     9,
      10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    61,    -1,    63,    64,    65,    66,     7,    -1,     9,
      10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    61,    -1,    63,    64,    65,    66,     7,     8,    -1,
      10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    61,    -1,    63,    64,    65,    66,     7,    -1,    -1,
      10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    61,    -1,    63,    64,    65,    66,     9,    10,    11,
      -1,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    58,    59,    -1,    61,
      -1,    63,    64,    65,    66,     9,    10,    11,    -1,    -1,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,
      44,     7,    -1,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    18,    -1,    58,    59,    -1,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    44,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      10,    11,    58,    59,    14,    15,    16,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    61,    -1,    63,    64,    65,    66,    10,    11,    -1,
      -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      43,    44,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    58,    59,    -1,    61,    -1,
      63,    64,    65,    66,    10,    11,    -1,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    44,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    58,    59,    -1,    61,    -1,    63,    64,    65,
      66,    10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,
      59,    -1,    61,    -1,    63,    64,    65,    66,    10,    11,
      -1,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    58,    59,    -1,    61,
      -1,    63,    64,    65,    66,    10,    11,    -1,    -1,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    59,    -1,    61,    -1,    63,    64,
      65,    66,    10,    11,    -1,    -1,    14,    15,    16,    10,
      11,    -1,    -1,    14,    15,    16,    -1,    25,    -1,    -1,
      28,    -1,    -1,    31,    25,    -1,    -1,    28,    10,    11,
      31,    -1,    14,    15,    16,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    25,    -1,    -1,    28,    -1,    -1,    31,
      -1,    -1,    -1,    61,    -1,    63,    64,    65,    66,    -1,
      61,    43,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,    61,
      -1,    63,    64,    65,    66,    25,    10,    11,    28,    -1,
      14,    15,    16,    -1,    10,    11,    -1,    -1,    14,    15,
      16,    25,    -1,    43,    28,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    61,    -1,    63,    64,    65,    66,    43,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    61,    -1,    63,    64,    65,
      66,     8,    -1,    32,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    -1,    44,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,     8,    33,    -1,    -1,    58,
      59,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      33,    58,    59,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    25,    58,    59,    28,    29,    30,
      -1,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    -1,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    25,    -1,    -1,    28,    58,    59,    -1,
      32,    33,    -1,    64,    -1,    -1,    38,    -1,    -1,    -1,
      42,    -1,    44,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    29,    58,    59,    32,    33,
      -1,    -1,    64,    -1,    38,    -1,    -1,    -1,    42,    -1,
      44,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    25,    -1,
      64,    28,    29,    30,    -1,    32,    33,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      29,    58,    59,    32,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    -1,    44,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    32,    33,    -1,    -1,    58,
      59,    38,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    33,    -1,
      -1,    58,    59,    38,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    59
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
       7,     9,    24,    18,    64,   121,   122,    94,    97,    98,
      99,   105,     7,     8,     9,    10,    11,    14,    15,    16,
      25,    28,    34,    35,    36,    39,    40,    41,    43,    45,
      61,    63,    64,    65,    66,    69,    70,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    87,    89,    94,   119,   120,   121,   122,   123,   124,
     127,   128,   129,   106,    89,   121,    29,    64,    90,   110,
     111,   112,   113,    31,    64,    72,    84,    88,    55,     3,
      62,    18,     8,    24,   103,    92,     7,    85,    94,   117,
     121,    99,     8,    98,    67,   100,   101,   106,    99,    97,
      28,    72,    72,    87,    94,    99,   114,     9,    87,     9,
      28,    89,   119,    28,    28,    28,    72,     9,    60,    14,
      15,    28,    30,    55,    56,    18,    20,    21,    22,    23,
      57,    86,    74,    12,    13,    25,    10,    11,     3,     4,
       5,     6,    17,    19,    26,    27,     9,    24,    72,     8,
      89,   123,     8,   119,    28,    30,   106,   108,   115,   116,
      29,    24,    24,    29,    31,    64,    88,   104,     8,   117,
     118,    88,     9,    24,    67,     8,    29,    28,   108,   115,
      29,     9,    87,    40,    87,   124,   114,   119,    29,    71,
      85,    87,    64,    64,    85,    74,    74,    74,    75,    75,
      76,    76,    76,    76,    77,    77,    81,    82,    85,    86,
       8,    29,   110,   115,    31,    88,   116,    28,    30,   112,
      64,     8,    24,   101,    88,    74,    29,    28,    29,   124,
      29,    24,    29,    31,    85,    29,    29,    31,    29,   110,
      31,    88,     8,   117,   119,    87,   119,    29,    87,    85,
      29,    31,    37,    29,   119,    29,   119,     9,   119
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
		printf("multiply %lf\n",(yyval.dbl));
		if(!start){
			rightside = (yyvsp[(1) - (3)].dbl);
			start=1;
		}
		rightside = rightside*(yyvsp[(3) - (3)].dbl);
		(yyval.dbl)=(yyval.dbl)*(yyvsp[(3) - (3)].dbl);
		printf("multiply %lf\n",(yyval.dbl));
	}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 87 "yacc.y"
    {
		printf("divide  %lf\n",(yyval.dbl));
		if(!start){
			rightside = (yyvsp[(1) - (3)].dbl);
			start=1;
		}
		rightside = rightside/(yyvsp[(3) - (3)].dbl);
		(yyval.dbl)=(yyval.dbl)/(yyvsp[(3) - (3)].dbl);
		printf("divide  %lf\n",(yyval.dbl));
	}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 97 "yacc.y"
    {
		//printf("mod\n");
		if(!start){
			rightside = (yyvsp[(1) - (3)].dbl);
			start=1;
		}
		rightside = (int)rightside%(int)(yyvsp[(3) - (3)].dbl);
		(yyval.dbl)=(int)(yyval.dbl)%(int)(yyvsp[(3) - (3)].dbl);
	}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 110 "yacc.y"
    {
		printf("addition %lf\n",(yyval.dbl),(yyvsp[(3) - (3)].dbl));
		//printf("sum %lf\n",(double)$<dbl>1+(double)$<dbl>3);
		if(!start){
			rightside = (yyvsp[(1) - (3)].dbl);
			start=1;
		}
		rightside = rightside+(yyvsp[(3) - (3)].dbl);
		(yyval.dbl)=(yyval.dbl)+(yyvsp[(3) - (3)].dbl);
		printf("addition %lf\n",(yyval.dbl),(yyvsp[(3) - (3)].dbl));
	}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 121 "yacc.y"
    {
		printf("subtraction %lf\n",(yyval.dbl));
		if(!start){
			rightside = (yyvsp[(1) - (3)].dbl);
			start=1;
		}
		//printf("%d subtraction %lf %lf\n",start, rightside,$<dbl>3);
		//printf("diff %lf\n",(double)rightside-(double)$<dbl>3);
		//rightside = (double)$<dbl>2-(double)$<dbl>3 - rightside;
		//printf("final = %lf\n",rightside);
		rightside=rightside-(yyvsp[(3) - (3)].dbl);
		(yyval.dbl)=(yyval.dbl)-(yyvsp[(3) - (3)].dbl);
		printf("subtraction %lf\n",(yyval.dbl));
	}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 179 "yacc.y"
    {
		printf("\ntype specifier Assignment value %lf\n",(yyvsp[(4) - (4)].dbl));
		start=0;
	}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 183 "yacc.y"
    {
		printf("\nAssignment vaule %lf\n",(yyval.dbl));
		start=0;
	}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 315 "yacc.y"
    {
		//printf("direct declarator\n");
	}
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 368 "yacc.y"
    {
		printf("hi?\n");
	}
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 455 "yacc.y"
    {
		//printf("return expr semi\n");
	}
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 461 "yacc.y"
    {
		//printf("translation unit\n");
	}
    break;

  case 192:

/* Line 1464 of yacc.c  */
#line 464 "yacc.y"
    {
		//printf("translation unit\n");
	}
    break;



/* Line 1464 of yacc.c  */
#line 2232 "y.tab.c"
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
#line 481 "yacc.y"

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


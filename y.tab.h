/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1685 of yacc.c  */
#line 13 "yacc.y"

	double dbl;



/* Line 1685 of yacc.c  */
#line 189 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;



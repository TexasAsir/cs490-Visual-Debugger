//functions to do for yacc
//recognize struct, standard lib funcs - wrappers, std arith
//user def funcs, typedefs, var decls, loops, if/else, arrays 1d only
//breaks, continue, handle returns in gen, deal with ptr bs

%token NEWLINE GREAT LESS GREATEQUALS LESSEQUALS OPENBRACE 
%token CLOSEBRACE SEMICOLON PLUS MINUS DIVIDE MOD PLUSPLUS 
%token MINUSMINUS NOT EQUALSEQUALS EQUALS NOTEQUALS PLUSEQUALS
%token MINUSEQUALS DIVEQUALS MULEQUALS COMMA STAR AND OR OPENPAR
%token CLOSEPAR OPENBRACKET CLOSEBRACKET TYPEDEF INCLUDE RETURN
%token BREAK IF ELSE STRUCT DO WHILE FOR STATIC SIZEOF VOID CONTINUE
%token CONST UNSIGNED INT CHAR SHORT LONG FLOAT DOUBLE BAZINGA
%token CHARACTER WORD IDENTIFIER NUMERAL NOTOKEN

%%

goal
    : external_declaration
    | goal external_declaration
    ;

external_declaration
    : function_definition
    | declaration
    ;

function_definition
    : 
    |
    |
    |
    ;














%%
#include <stdio.h>

extern char yytext[];
extern int column;

yyeror(s)
char *s;
{
  fflush(stdout);
  printf("\n%*s\n%*s\n", column, "^", column, s);
}

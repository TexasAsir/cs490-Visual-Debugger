%{

#include <string.h>
#include <stdio.h>
#include "y.tab.h"


////////////  Start added code ///////////


/////////// End added code ///////////



%}

%option noyywrap

%%

\n|\'\\n\' {
		////printf("nl\n");
		//count(); return NEWLINE;
	}
"/*" {
		comment();
	}
"#include" {
		return INCLUDE;
}
(\t|" "|\r|\f|\v) {
		//printf("white space\n");
     	}	

">" 	{
		////printf("great\n");
		count(); return GREAT;
	}
"<"     {
		////printf("less\n");
		count(); return LESS;
	}
">=" 	{
		count(); return GREATEQUALS;
	}
"<="     {
		////printf("less equals\n");
		count(); return LESSEQUALS;
	}
"\""	{
		return QUOTE;
	}
"{"     {
		//printf("openbrace\n");
		count(); return OPENBRACE;
	}
"}"	{
		//printf("closebrace\n");
		count(); return CLOSEBRACE;
	}
"->" {
		count(); return ARROW;
	}
";"	{
		//printf("semicolon\n");
		count(); return SEMICOLON;
	}
"+"	{
		count(); return PLUS;
	}	
"-"	{
		count(); return MINUS;
	}	
"/"	{
		count(); return DIVIDE;
	}
"%"	{
		count(); return MOD;
	}
"++"	{
		count(); return PLUSPLUS;
	}
"--"	{
		count(); return MINUSMINUS;
	}
"!"	{
		count(); return NOT;
	}
"=="	{
		count(); return EQUALSEQUALS;
	}
"="	{
		count(); return EQUALS;
	}
"!="	{
		count(); return NOTEQUALS;
	}
"+=" 	{
		count(); return PLUSEQUALS;
	}
"-="    {
		count(); return MINUSEQUALS;
	}
"*=" 	{
		count(); return MULEQUALS;
	}
"/="    {
		count(); return DIVEQUALS;
	}
"%="	{
		count(); return MODEQUALS;
	}
","     {
		count(); return COMMA;
	}
"*"     {
		count(); return STAR;
	}
"&&"    {
		count(); return AND;
	}
"&" 	{
		count(); return ADDR;
	}
"||"    {
		//printf("OR\n");
		count(); return OR;
	}
"(" 	{
		//printf("openpar\n");
		count(); return OPENPAR;
	}
")"     {
		//printf("closepar\n");
		count(); return CLOSEPAR;
	}
"[" 	{
		count(); return OPENBRACKET;
	}
"]"     {
		count(); return CLOSEBRACKET;
	}
"typedef" 	{
		count(); return TYPEDEF;
	}
"include"    {
		count(); return INCLUDE;
	}
"return" 	{
		count(); return RETURN;
	}
"break" {
		count(); return BREAK;
	}
"signed" {
		count(); return SIGNED;
	}
"enum" {
		count(); return ENUM;
	}
"if"    {
		count(); return IF;
	}
"else"  {
		count(); return ELSE;
	}
"struct" {
		count(); return STRUCT;
	}
"do"    {
		count(); return DO;
	}
"while" {
		count(); return WHILE;
	}
"for"   {
		count(); return FOR;
	}
"static" {
		count(); return STATIC;
	}
"sizeof" {
		count(); return SIZEOF;
	}
"void" {
		count(); return VOID;
	}
"continue" {
		count(); return CONTINUE;
	}
"const" {
		count(); return CONST;
	}
"unsigned" {
		count(); return UNSIGNED;
	}
"int"   {
		//printf("int \n");
		count(); return INT;
	}
"char"  {
		count(); return CHAR;
	}
"short" {
		count(); return SHORT;	
	}
"long" {
		count(); return LONG;
	}
"float" {
		count(); return FLOAT;
	}
"double" {
		count(); return DOUBLE;
	}
\/\/[^\n]*\n {
		
	}
"//#!" {
		count(); return BAZINGA;
	}

\'[^\n\']?\' {
		count(); return CHARACTER;
	}
\"[^\n\"]*\" {
		//printf("asfd\n");
		strcpy(yytext,yytext+1);
		yytext[strlen(yytext)-1]=0;
		yylval.wd = strdup(yytext);
		count(); return WORD;
	}
[0-9]+ {
	//printf("numeral %s\n",yytext);
	//printf("yylval %d",yylval);
	yylval.dbl = atoi(yytext);
  count(); return NUMERAL;
}
[0-9]+\.[0-9]* {
	//sscanf(yytext,"%lf",&yylval);
	//perror("scanf");
	yylval.dbl=atof(yytext);
	printf("yytext val %s\n",yytext);
	double val = 0.0;
	val = atof(yytext);
	printf("yylval %lf\n",val);
	count(); return NUMERAL;
}
[a-zA-Z_][a-zA-Z_0-9]* {
	//printf("\nid %s\n",yytext);
	
	count(); return IDENTIFIER;
}

"." {
	//printf("dot\n");
    count(); return DOT;
}
":" {
   count(); return COLON; 
}    
.	{
		////printf(".\n");
		//count(); return NOTOKEN;
	}

%%

int column = 0;

comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0)
		putchar(c1);
}

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}

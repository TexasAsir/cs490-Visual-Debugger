%{

#include <string.h>
#include <stdio.h>
#include "y.tab.h"


////////////  Start added code ///////////
int main(int argc, char* argv[])
{
    /* Call the lexer, then quit. */
    yyin = fopen(argv[1],"r");
    yylex();
    return 0;
}

/////////// End added code ///////////



%}

%option noyywrap

%%

\n|\'\\n\' {
		printf("nl\n");
		//return NEWLINE;
	}

([ \t]|[" "]|\r|\f)+ {
		printf("white space\n");
     	}	

">" 	{
		printf("great\n");
		//return GREAT;
	}
"<"     {
		printf("less\n");
		//return LESS;
	}
">=" 	{
		//return GREATEQUALS;
	}
"<="     {
		printf("less equals\n");
		//return LESSEQUALS;
	}
"{"     {
		//return OPENBRACE;
	}
"}"	{
		//return CLOSEBRACE;
	}
";"	{
		//return SEMICOLON;
	}
"+"	{
		//return PLUS;
	}	
"-"	{
		//return MINUS;
	}	
"/"	{
		//return DIVIDE;
	}
"%"	{
		//return MOD;
	}
"++"	{
		//return PLUSPLUS;
	}
"--"	{
		//return MINUSMINUS;
	}
"!"	{
		//return NOT;
	}
"=="	{
		//return EQUALSEQUALS;
	}
"="	{
		//return EQUALS;
	}
"!="	{
		//return NOTEQUALS;
	}
"+=" 	{
		//return PLUSEQUALS;
	}
"-="    {
		//return MINUSEQUALS;
	}
"*=" 	{
		//return MULEQUALS;
	}
"/="    {
		//return DIVEQUALS;
	}
","     {
		//return COMMA;
	}
"!"	{
		//return NOT;
	}
"*"     {
		//return STAR;
	}
"&&"    {
		//return AND;
	}
"||"    {
		//return OR;
	}
"(" 	{
		//return OPENPAR;
	}
")"     {
		//return CLOSEPAR;
	}
"[" 	{
		//return OPENBRACKET;
	}
"]"     {
		//return CLOSEBRACKET;
	}
"typedef" 	{
		//return TYPEDEF;
	}
"include"    {
		//return INCLUDE;
	}
"//return" 	{
		//return //return;
	}
"break" {
		//return BREAK;
	}
"if"    {
		//return IF;
	}
"else"  {
		//return ELSE;
	}
"struct" {
		//return STRUCT;
	}
"do"    {
		//return DO;
	}
"while" {
		//return WHILE;
	}
"for"   {
		//return FOR;
	}
"static" {
		//return STATIC;
	}
"sizeof" {
		//return SIZEOF;
	}
"void" {
		//return VOID;
	}
"continue" {
		//return CONTINUE;
	}
"const" {
		//return CONST;
	}
"unsigned" {
		//return UNSIGNED;
	}
"int"   {
		//return INT;
	}
"char"  {
		//return CHAR;
	}
"short" {
		//return SHORT;	
	}
"long" {
		//return LONG;
	}
"float" {
		//return FLOAT;
	}
"double" {
		//return DOUBLE;
	}
\/\/[^\n]*\n {
		
	}
"//#!" {
		//return BAZINGA;
	}

\'[^\n\']?\' {
		printf("c\n");
		//return CHAR;
	}
\"[^\n\"]*\" {
		printf("asfd\n");
		//return WORD;
	}
[a-z|A-Z|_][a-z|A-Z|_|0-9]* {
	printf("id %s\n",yytext);
	//return IDENTIFIER;
}
.	{
		printf(".\n");
		//return NOTOKEN;
	}

%%

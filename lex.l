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
		//printf("nl\n");
		//return NEWLINE;
	}

([ \t]|[" "]|\r|\f)+ {
		//printf("white space\n");
     	}	

">" 	{
		//printf("great\n");
		return GREAT;
	}
"<"     {
		//printf("less\n");
		return LESS;
	}
">=" 	{
		return GREATEQUALS;
	}
"<="     {
		//printf("less equals\n");
		return LESSEQUALS;
	}
"{"     {
		return OPENBRACE;
	}
"}"	{
		return CLOSEBRACE;
	}
"->" {
		return ARROW;
	}
";"	{
		return SEMICOLON;
	}
"+"	{
		return PLUS;
	}	
"-"	{
		return MINUS;
	}	
"/"	{
		return DIVIDE;
	}
"%"	{
		return MOD;
	}
"++"	{
		return PLUSPLUS;
	}
"--"	{
		return MINUSMINUS;
	}
"!"	{
		return NOT;
	}
"=="	{
		return EQUALSEQUALS;
	}
"="	{
		return EQUALS;
	}
"!="	{
		return NOTEQUALS;
	}
"+=" 	{
		return PLUSEQUALS;
	}
"-="    {
		return MINUSEQUALS;
	}
"*=" 	{
		return MULEQUALS;
	}
"/="    {
		return DIVEQUALS;
	}
"%="	{
		return MODEQUALS;
	}
","     {
		return COMMA;
	}
"*"     {
		return STAR;
	}
"&&"    {
		return AND;
	}
"||"    {
		return OR;
	}
"(" 	{
		return OPENPAR;
	}
")"     {
		return CLOSEPAR;
	}
"[" 	{
		return OPENBRACKET;
	}
"]"     {
		return CLOSEBRACKET;
	}
"typedef" 	{
		return TYPEDEF;
	}
"include"    {
		return INCLUDE;
	}
"return" 	{
		return RETURN;
	}
"break" {
		return BREAK;
	}
"signed" {
		return SIGNED;
	}
"enum" {
		return ENUM;
	}
"if"    {
		return IF;
	}
"else"  {
		return ELSE;
	}
"struct" {
		return STRUCT;
	}
"do"    {
		return DO;
	}
"while" {
		return WHILE;
	}
"for"   {
		return FOR;
	}
"static" {
		return STATIC;
	}
"sizeof" {
		return SIZEOF;
	}
"void" {
		return VOID;
	}
"continue" {
		return CONTINUE;
	}
"const" {
		return CONST;
	}
"unsigned" {
		return UNSIGNED;
	}
"int"   {
		return INT;
	}
"char"  {
		return CHAR;
	}
"short" {
		return SHORT;	
	}
"long" {
		return LONG;
	}
"float" {
		return FLOAT;
	}
"double" {
		return DOUBLE;
	}
\/\/[^\n]*\n {
		
	}
"//#!" {
		return BAZINGA;
	}

\'[^\n\']?\' {
		printf("c\n");
		return CHARACTER;
	}
\"[^\n\"]*\" {
		printf("asfd\n");
		return WORD;
	}
[a-z|A-Z|_][a-z|A-Z|_|0-9]* {
	//printf("id %s\n",yytext);
	return IDENTIFIER;
}
[0-9]+ {
  return NUMERAL;
}
"." {
    return DOT;
}
":" {
   return COLON; 
}    
.	{
		//printf(".\n");
		//return NOTOKEN;
	}

%%

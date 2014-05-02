%token GREAT LESS GREATEQUALS LESSEQUALS OPENBRACE CLOSEBRACE SEMICOLON 
%token PLUS MINUS DIVIDE MOD PLUSPLUS MINUSMINUS NOT EQUALSEQUALS EQUALS
%token NOTEQUALS PLUSEQUALS MINUSEQUALS MULEQUALS DIVEQUALS COMMA STAR AND 
%token OR OPENPAR CLOSEPAR OPENBRACKET CLOSEBRACKET TYPEDEF INCLUDE 
%token RETURN BREAK IF ELSE STRUCT DO WHILE FOR STATIC SIZEOF VOID CONTINUE 
%token CONST UNSIGNED INT CHAR SHORT LONG FLOAT DOUBLE BAZINGA 
%token DOT ARROW MODEQUALS SIGNED ENUM COLON ADDR QUOTE
%token <dbl> NUMERAL
%token <dbl> IDENTIFIER
%token <dbl> WORD
%token <dbl> CHARACTER

%union	{
	double dbl;
	char * wd;
	int leaf;
}

%{
	//#include "functions.cpp"
	#include <stdio.h>
	#include <stdlib.h>
	//#include "stack.h"
	#include <string.h>
	#include <math.h>  
	#include "step.cpp"
	extern "C" int yylex();
	extern int linecount;
	int expcount;
	char * var[2];
	int yyerror(char* s);
	int whilecount;
	int ifcount;
	//struct varble** globls;
	//int globalcount =0;
	//int globalmax =100;
%}

%start translation_unit
%%

primary_expression
	: IDENTIFIER {
		int size = strlen($<wd>1);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//id ");
		strcat($<wd>$,$<wd>1);
		//printf("identifier %s\n",$<wd>$);
	}
	| NUMERAL {
		//printf("numeral %d\n",$1);
		if(!strchr($<wd>1,'.')){
			int size = strlen($<wd>1);
			size=size+7;
			$<wd>$=(char *)malloc(sizeof(char)*size);
			strcat($<wd>$,"//int ");
			strcat($<wd>$,$<wd>1);
		}
		else{
			int size = strlen($<wd>1);
			size=size+7;
			$<wd>$=(char *)malloc(sizeof(char)*size);
			strcat($<wd>$,"//dbl ");
			strcat($<wd>$,$<wd>1);
		}
	} 
	| CHARACTER {
		
		int size = strlen($<wd>1);
		size=size+8;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//char ");
		strcat($<wd>$,$<wd>1);
		//printf("character %s\n",$<wd>$);
	}
	| WORD {
		int size = strlen($<wd>1);
		size=size+8;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//word ");
		strcat($<wd>$,$<wd>1);
		//printf("word %s\n",$<wd>$);
	}
    	| OPENPAR expression CLOSEPAR{
		$<wd>$ = $<wd>2;
	}
	;

postfix_expression
	: primary_expression
	| postfix_expression OPENBRACKET expression CLOSEBRACKET{
		//printf("array2!\n");
		int size = strlen($<wd>1)+strlen($<wd>3);
		size=size+9;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//index ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//printf("index %s\n",$<wd>$);
	}
	| postfix_expression OPENPAR CLOSEPAR
	| postfix_expression OPENPAR argument_expression_list CLOSEPAR{
		int size = strlen($<wd>1)+strlen($<wd>3);
		size=size+8;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//call ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//printf("call %s\n",$<wd>$);
	}
	| postfix_expression DOT IDENTIFIER{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+12;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//dot ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$, "//id ");
		strcat($<wd>$,$<wd>3);
		//printf("DOT %s\n",$<wd>$);
	}
	| postfix_expression ARROW IDENTIFIER{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+9;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//arrow ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//printf("ARROW %s\n",$<wd>$);
	}
	| postfix_expression PLUSPLUS{
		int size = strlen($<wd>2);
		size=size+8;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//++pf ");
		strcat($<wd>$,$<wd>1);
		//printf("pppp %s\n",$<wd>$);
	}
	| postfix_expression MINUSMINUS{
		int size = strlen($<wd>2);
		size=size+8;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//--pf ");
		strcat($<wd>$,$<wd>2);
		//printf("mmmm %s\n",$<wd>$);
	}
	;

argument_expression_list
	: assignment_expression{
		int size = strlen($<wd>$);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//arg ");
		strcat($<wd>$,$<wd>1);
		//printf("argument %s\n",$<wd>$);
	}
	| argument_expression_list COMMA assignment_expression{
		int size = strlen($<wd>$)+strlen($<wd>2)+strlen($<wd>3);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,"//arg ");
		strcat($<wd>$,$<wd>3);
		//printf("argument %s\n",$<wd>$);
	}
	;

unary_expression
	: postfix_expression
	| PLUSPLUS unary_expression{
		int size = strlen($<wd>2);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//++ ");
		strcat($<wd>$,$<wd>2);
		//printf("plosplos %s\n",$<wd>$);
	}
	| MINUSMINUS unary_expression{
		int size = strlen($<wd>2);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//-- ");
		strcat($<wd>$,$<wd>2);
		//printf("minusminus %s\n",$<wd>$);
	}
	| unary_operator cast_expression{
		int size = strlen($<wd>$)+strlen($<wd>2);
		size=size+8;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//unop ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>2);
		//printf("unop %s\n",$<wd>$);	
	}
	/*| SIZEOF OPENPAR type_name superstar CLOSEPAR{//waht
		int size = strlen($<wd>2);
		size=size+10;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//sizeof ");
		strcat($<wd>$,$<wd>2);
		printf("sizeof %s\n",$<wd>$);
	}*/
	| SIZEOF OPENPAR type_name CLOSEPAR{
		int size = strlen($<wd>3);
		size=size+14;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//sizeoftype ");
		strcat($<wd>$,$<wd>3);
		//printf("sizeoftype %s\n",$<wd>$);
	}
	;
unary_operator
	: STAR{
		//printf("pointer dereferenced\n");
		$<wd>$="* ";
	}
	| PLUS{
		$<wd>$="+ ";
	}
	| MINUS{
		$<wd>$="- ";
	}
	| NOT{
		$<wd>$="! ";
	}
	| ADDR{
		$<wd>$="& ";
	}
	;

cast_expression
	: unary_expression
	| OPENPAR type_name CLOSEPAR cast_expression{
		int size = strlen($<wd>2)+strlen($<wd>4);
		size=size+8;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//cast ");
		strcat($<wd>$,$<wd>2);
		strcat($<wd>$,$<wd>4);
		//printf("CAST %s\n",$<wd>$);
	}
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression STAR cast_expression {
		//printf("multiply %lf\n",$<dbl>$);
		//$<dbl>$=$<dbl>$*$<dbl>3;
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//mul ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//printf("multiply %s\n",$<wd>$);
	}
	| multiplicative_expression DIVIDE cast_expression {
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//div ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$/$<dbl>3;
		//printf("divide  %s\n",$<wd>$);
	}
	| multiplicative_expression MOD cast_expression {
		//printf("mod\n");
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//mod ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=(int)$<dbl>$%(int)$<dbl>3;
	}
	;

additive_expression
	: multiplicative_expression
	| additive_expression PLUS multiplicative_expression {
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//add ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$+$<dbl>3;
		//printf("addition %s\n",$<wd>$);
	}
	| additive_expression MINUS multiplicative_expression {
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//sub ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$-$<dbl>3;
		//printf("subtraction %s\n",$<wd>$);
	}
	;

relational_expression
	: additive_expression
	| relational_expression LESS additive_expression{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+8;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//less ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$-$<dbl>3;
		//printf("less op %s\n",$<wd>$);
	}
	| relational_expression GREAT additive_expression{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//gt ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$-$<dbl>3;
		//printf("great  %s\n",$<wd>$);
	}
	| relational_expression LESSEQUALS additive_expression{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//le ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$-$<dbl>3;
		//printf("less eq %s\n",$<wd>$);
	}
	| relational_expression GREATEQUALS additive_expression{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//ge ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$-$<dbl>3;
		//printf("great eq %s\n",$<wd>$);
	}
	;

equality_expression
	: relational_expression
	| equality_expression EQUALSEQUALS relational_expression{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+8;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//eqeq ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$-$<dbl>3;
		//printf("equalsequals %s\n",$<wd>$);
	}
	| equality_expression NOTEQUALS relational_expression{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//neq ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$-$<dbl>3;
		//printf("notequals %s\n",$<wd>$);
	}
	;

and_expression
	: equality_expression
	;

exclusive_or_expression
	: and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND inclusive_or_expression{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//and ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//printf("AND %s\n",$<wd>$);
	}
	;

logical_or_expression
	: logical_and_expression
    	| logical_or_expression OR logical_and_expression{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//or ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//printf("OR %s\n",$<wd>$);
	}
	;

conditional_expression
	: logical_or_expression
	
	;

assignment_expression
	: conditional_expression
	|  declaration_specifiers unary_expression assignment_operator assignment_expression {
		//assg destination op expression
		int size = strlen($<wd>$)+strlen($<wd>2)+strlen($<wd>3)+strlen($<wd>4);
		size=size+11;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//decassg ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>2);
		strcat($<wd>$,$<wd>3);
		strcat($<wd>$,$<wd>4);
		//printf("ASSIGNMENT %s\n",$<wd>$);
	}
	//|  declaration_specifiers unary_expression SEMICOLON
	| unary_expression assignment_operator assignment_expression {
		int size = strlen($<wd>$)+strlen($<wd>2)+strlen($<wd>3);
		size=size+8;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//assg ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>2);
		strcat($<wd>$,$<wd>3);
		//printf("ASSIGNMENT %s\n",$<wd>$);
	}


assignment_operator
	: EQUALS{
		$<wd>$=" = ";
	}
	| MULEQUALS{
		$<wd>$=" *= ";
	}
	| DIVEQUALS{
		$<wd>$=" /= ";
	}
	| MODEQUALS{
		$<wd>$=" %= ";
	}
	| PLUSEQUALS{
		$<wd>$=" += ";
	}
	| MINUSEQUALS{
		$<wd>$=" -= ";
	}
	;

expression
	: assignment_expression
	| expression COMMA assignment_expression//TODO
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers SEMICOLON//TODO
	| declaration_specifiers init_declarator_list SEMICOLON{
		int size = strlen($<wd>2)+strlen($<wd>1);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//dec ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$," ");
		strcat($<wd>$,$<wd>2);
		//printf("dec %s\n",$<wd>$);
		
		var[0]=$<wd>1;
		var[1]=$<wd>2;
	}
	;

declaration_specifiers//TODO
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier STAR{
		$<wd>$="int *";
	}
	| type_specifier
	| type_specifier declaration_specifiers 
	| type_qualifier
	| type_qualifier declaration_specifiers 
	;

init_declarator_list//TODO
	: init_declarator{
		//printf("declarator %s\n",$<wd>1);
	}
	| init_declarator_list COMMA init_declarator
	;

init_declarator//TODO idk waht these are
	: declarator{
		//printf("declarator UUUUUUUUUU\n");
	}
	| declarator EQUALS initializer {
		//printf("init assignment !@$@#%$@#$#\n");
	}
	| declarator IDENTIFIER {
		//printf("identifier GGGGGGG\n");
	}
	;

storage_class_specifier//TODO
	: TYPEDEF
	| STATIC
	;

type_specifier
	: VOID{
		$<wd>$="void";
	}
	| CHAR{
		$<wd>$="char";
	}
	| SHORT{
		$<wd>$="short";
	}
	| INT {
		$<wd>$="int";
	}
	| LONG{
		$<wd>$="long";
	}	
	| FLOAT{
		$<wd>$="float";
	}
	| DOUBLE{
		$<wd>$="double";
	}
	| SIGNED{
		$<wd>$="signed";
	}
	| UNSIGNED{
		$<wd>$="unsigned";
	}
	| struct_or_union_specifier
	| enum_specifier
	| include_statement
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER OPENBRACE struct_declaration_list CLOSEBRACE{
		int size = strlen($<wd>2)+strlen($<wd>4);
		size=size+16;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//struct ");
		strcat($<wd>$,$<wd>2);
		strcat($<wd>$,$<wd>4);
		strcat($<wd>$,"//ends ");
		//printf("struct %s\n",$<wd>$);
	}
	| struct_or_union OPENBRACE struct_declaration_list CLOSEBRACE
	| struct_or_union IDENTIFIER{
		int size = strlen($<wd>2);
		size=size+12;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//structvar ");
		strcat($<wd>$,$<wd>2);
		//printf("struct %s\n",$<wd>$);
	}
	;

struct_or_union
	: STRUCT
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration{
		int size = strlen($<wd>1)+strlen($<wd>2);
		size=size+2;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,",");//maby dont need the comma
		strcat($<wd>$,$<wd>2);
	}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list SEMICOLON{
		int size = strlen($<wd>2)+strlen($<wd>1);
		size=size+9;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//dec ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$," ");//maby dont need the comma
		strcat($<wd>$,$<wd>2);
		//printf("dec %s\n",$<wd>$);
	}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list{
		int size = strlen($<wd>2)+strlen($<wd>1);
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>2);
	}
	| type_specifier
	| type_qualifier specifier_qualifier_list{
		int size = strlen($<wd>2)+strlen($<wd>1);
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>2);
	}
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list COMMA struct_declarator
	;

struct_declarator//might need changed?
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier//TODO
	: ENUM OPENBRACE enumerator_list CLOSEBRACE
	| ENUM IDENTIFIER OPENBRACE enumerator_list CLOSEBRACE
	| ENUM IDENTIFIER
	;

enumerator_list//TODO
	: enumerator
	| enumerator_list COMMA enumerator
	;

enumerator
	: IDENTIFIER{
		int size = strlen($<wd>1);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//id ");
		strcat($<wd>$,$<wd>1);
		//printf("identifier %s\n",$<wd>$);
	}
	| IDENTIFIER EQUALS constant_expression{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+11;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//assg ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$," = ");
		strcat($<wd>$,$<wd>3);
		//printf("ASSIGNMENT12 %s\n",$<wd>$);
	}
	;

type_qualifier
	: CONST{
		$<wd>$="const ";
	}
	;

declarator
	: pointer direct_declarator{
		int size = strlen($<wd>2);
		size=size+3;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"* ");
		strcat($<wd>$,$<wd>2);
		//printf("pointer %s\n",$<wd>$);
	}
	| direct_declarator {
	}
	;

direct_declarator
	: IDENTIFIER {//TODO
	}
	| OPENPAR declarator CLOSEPAR//TODO
	| direct_declarator OPENBRACKET constant_expression CLOSEBRACKET{//TODO
		
	}
	| direct_declarator OPENBRACKET CLOSEBRACKET{//TODO
		
	}
	| direct_declarator OPENPAR parameter_type_list CLOSEPAR//TODO
	| direct_declarator OPENPAR identifier_list CLOSEPAR//TODO
	| direct_declarator OPENPAR CLOSEPAR{//TODO
		
	}
	;

pointer
	: STAR{
		$<wd>$="";
	}
	| STAR type_qualifier_list//TODO
	| STAR pointer{
		int size = strlen($<wd>2);
		size=size+1;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,$<wd>2);
	}
	| STAR type_qualifier_list pointer{//TODO
	}
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier{//TODO
	}
	;


parameter_type_list//no ellipsis
	: parameter_list
	| parameter_list COMMA//might not be needed TODO
	;

parameter_list
	: parameter_declaration
	| parameter_list COMMA parameter_declaration//TODO
	;

parameter_declaration
	: declaration_specifiers declarator//TODO
	| declaration_specifiers abstract_declarator//TODO
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list COMMA IDENTIFIER//TODO
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator{
		int size = strlen($<wd>2) + strlen($<wd>1);
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>2);
	}
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator{
		//printf("hello?\n");
	}
	| pointer direct_abstract_declarator {//TODO
		//printf("does this shit get called?\n");
	}
	;

direct_abstract_declarator
	: OPENPAR abstract_declarator CLOSEPAR//TODO
	| OPENBRACKET CLOSEBRACKET
	| OPENBRACKET constant_expression CLOSEBRACKET{//TODO
		//printf("why god why %s\n",$<wd>1);
	}
	| direct_abstract_declarator OPENBRACKET CLOSEBRACKET//TODO
	| direct_abstract_declarator OPENBRACKET constant_expression CLOSEBRACKET{//TODO
		//printf("why god why %s\n",$<wd>1);
	}
	| OPENPAR CLOSEPAR
	| OPENPAR parameter_type_list CLOSEPAR//TODO
	| direct_abstract_declarator OPENPAR CLOSEPAR{//TODO
	}
	| direct_abstract_declarator OPENPAR parameter_type_list CLOSEPAR{//TODO
	}
	;

initializer
	: assignment_expression
	| OPENBRACE initializer_list CLOSEBRACE{
		$<wd>$=$<wd>2;
	}
	| OPENBRACE initializer_list COMMA CLOSEBRACE{//TODO
	
	
	}
	;

initializer_list
	: initializer
	| initializer_list COMMA initializer{//TODO
	
	}
	;

statement
	: labeled_statement
	| declaration
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	| array_declaration
	;

array_declaration
	: declaration_specifiers IDENTIFIER OPENBRACKET constant_expression CLOSEBRACKET {
		int size = strlen($<wd>1)+strlen($<wd>3)+strlen($<wd>4);
		size=size+12;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//indexdec ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		strcat($<wd>$,$<wd>4);
		//printf("indexdec %s\n",$<wd>$);
	}
	| declaration_specifiers IDENTIFIER OPENBRACKET CLOSEBRACKET{
		int size = strlen($<wd>1)+strlen($<wd>3);
		size=size+9;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//index ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//printf("index %s\n",$<wd>$);
	}
	;
labeled_statement//is this needed?
	: IDENTIFIER COLON statement//TODO
	;

compound_statement
	: OPENBRACE CLOSEBRACE{
		$<wd>$="";
	}
	| OPENBRACE decstat_list CLOSEBRACE{
		$<wd>$=$<wd>2;
	}
	
	;

decstat
	: declaration_list
	| statement_list
	;
decstat_list
	: decstat
	| decstat decstat_list{
		int size = strlen($<wd>1)+strlen($<wd>2);
		size=size+2;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,",");
		strcat($<wd>$,$<wd>2);
	}
	;
declaration_list
	: declaration
	| declaration_list declaration{
		int size = strlen($<wd>1)+strlen($<wd>2);
		size=size+2;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,",");
		strcat($<wd>$,$<wd>2);
	}
	;

statement_list
	: statement
	| statement_list statement{
		int size = strlen($<wd>1)+strlen($<wd>2);
		size=size+2;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,",");
		strcat($<wd>$,$<wd>2);
	}
	;

expression_statement
	: SEMICOLON{
		$<wd>$="";
	}
	| expression SEMICOLON
	;
include_statement
	: INCLUDE LESS include_expression GREAT//tree dont care
	| INCLUDE QUOTE include_expression QUOTE
	;
include_expression
	: IDENTIFIER DOT IDENTIFIER//tree dont care yo
	| IDENTIFIER
	;
selection_statement
	: IF OPENPAR expression CLOSEPAR statement{
		int size = strlen($<wd>3)+strlen($<wd>5);
		size=size+14;
		int wcount=ifcount;
		ifcount++;
		int countlen=log10(wcount);
		countlen++;
		char wstring[countlen+1];
		sprintf(wstring,"%d",wcount);
		size+=countlen*2;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//if");
		strcat($<wd>$,wstring);
		strcat($<wd>$," ");
		strcat($<wd>$,$<wd>3);
		strcat($<wd>$,",");
		strcat($<wd>$,$<wd>5);
		strcat($<wd>$,",");
		strcat($<wd>$,"//endf");
		strcat($<wd>$,wstring);
		//printf("if %s\n",$<wd>$);
	
	
	}
	| IF OPENPAR expression CLOSEPAR statement ELSE statement{
		int size = strlen($<wd>3)+strlen($<wd>5)+strlen($<wd>7);
		size=size+22;
		int wcount=ifcount;
		ifcount++;
		int countlen=log10(wcount);
		countlen++;
		char wstring[countlen+1];
		sprintf(wstring,"%d",wcount);
		size+=countlen*3;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//if");
		strcat($<wd>$,wstring);
		strcat($<wd>$," ");
		strcat($<wd>$,$<wd>3);
		strcat($<wd>$,",");
		strcat($<wd>$,$<wd>5);
		strcat($<wd>$,",");
		strcat($<wd>$,"//else");
		strcat($<wd>$,wstring);
		strcat($<wd>$,$<wd>7);
		strcat($<wd>$,",");
		strcat($<wd>$,"//ende");
		strcat($<wd>$,wstring);
		//printf("ifelse %s\n",$<wd>$);
	}
	;

iteration_statement
	: WHILE OPENPAR expression CLOSEPAR statement{
		int size = strlen($<wd>3)+strlen($<wd>5);
		size=size+17;
		int wcount=whilecount;
		whilecount++;
		int countlen=log10(wcount);
		countlen++;
		char wstring[countlen+1];
		sprintf(wstring,"%d",wcount);
		size+=countlen*2;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		
		strcat($<wd>$,"//while");
		strcat($<wd>$,wstring);
		strcat($<wd>$," ");
		strcat($<wd>$,$<wd>3);
		strcat($<wd>$,",");
		strcat($<wd>$,$<wd>5);
		strcat($<wd>$,",");
		strcat($<wd>$,"//endw");
		strcat($<wd>$,wstring);
		//printf("while %s\n",$<wd>$);
	}
	| DO statement WHILE OPENPAR expression CLOSEPAR SEMICOLON{
		int size = strlen($<wd>2)+strlen($<wd>5);
		size=size+12;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//do ");
		strcat($<wd>$,$<wd>2);
		strcat($<wd>$,"//endd ");
		strcat($<wd>$,$<wd>5);
		//printf("dowhile %s\n",$<wd>$);
	}
	| FOR OPENPAR expression_statement expression_statement CLOSEPAR statement{
		int size = strlen($<wd>3)+strlen($<wd>4)+strlen($<wd>6);
		size=size+19;
		int wcount=whilecount;
		whilecount++;
		int countlen=log10(wcount);
		countlen++;
		char wstring[countlen+1];
		sprintf(wstring,"%d",wcount);
		size+=countlen*2;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,$<wd>3);
		strcat($<wd>$,",");
		strcat($<wd>$,"//while");
		strcat($<wd>$,wstring);
		strcat($<wd>$," ");
		strcat($<wd>$,$<wd>4);
		strcat($<wd>$,",");
		strcat($<wd>$,$<wd>6);
		strcat($<wd>$,",");
		strcat($<wd>$,"//endw");
		strcat($<wd>$,wstring);
		//printf("while %s\n",$<wd>$);
	}
	| FOR OPENPAR expression_statement expression_statement expression CLOSEPAR statement{
		int size = strlen($<wd>3)+strlen($<wd>4)+strlen($<wd>5)+strlen($<wd>7);
		size=size+19;
		int wcount=whilecount;
		whilecount++;
		int countlen=log10(wcount);
		countlen++;
		char wstring[countlen+1];
		sprintf(wstring,"%d",wcount);
		size+=countlen*2;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,$<wd>3);
		strcat($<wd>$,",");
		strcat($<wd>$,"//while");
		strcat($<wd>$,wstring);
		strcat($<wd>$," ");
		strcat($<wd>$,$<wd>4);
		strcat($<wd>$,",");
		strcat($<wd>$,$<wd>5);
		strcat($<wd>$,",");
		strcat($<wd>$,$<wd>7);
		strcat($<wd>$,",");
		strcat($<wd>$,"//endw");
		strcat($<wd>$,wstring);
		//printf("for %s\n",$<wd>$);
	}
	;

jump_statement
	: CONTINUE SEMICOLON{
		int size =7 ;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//cont ");
	}
	| BREAK SEMICOLON{
		int size =8 ;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//break ");
	}
	| RETURN SEMICOLON{
		int size = 15;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//return //null");
		//printf("return %s\n",$<wd>$);
	}
	| RETURN expression SEMICOLON {
		int size =7 + strlen($<wd>2) ;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//return ");
		strcat($<wd>$,$<wd>2);
		//printf("return %s\n",$<wd>$);
	}
	;

translation_unit
	: external_declaration {
		//printf("translation unit\n");
	}
	| translation_unit external_declaration {
		//printf("translation unit\n");
	}
	;

external_declaration
	: function_definition
	| declaration {//TODO
		//printf("global variable %s\n",$<wd>$);
		//(((struct varble *)globls+globalcount))->name=var[1];
		//(((struct varble *)globls+globalcount))->type=var[0];
		//globalcount++;
		//if(globalcount >=globalmax){
		//	globalmax *=2;
		//	globls = realloc(globls,sizeof(struct varble)*globalmax);
		//}
		 char * body=$<wd>$;
   		 step(body);
		//cstack::thiscstack.curframe
	}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement{
		//printf("does this shit get called?\n");
	}
	| declaration_specifiers declarator compound_statement{
		cstack::thiscstack.funcs[cstack::thiscstack.funcount] = new function;
		cstack::thiscstack.funcs[cstack::thiscstack.funcount]->type=$<wd>1;
		cstack::thiscstack.funcs[cstack::thiscstack.funcount]->name=$<wd>2;
		cstack::thiscstack.funcs[cstack::thiscstack.funcount]->body=$<wd>3;
		//printf("function %s body %s\n",$<wd>2,$<wd>3);
		cstack::thiscstack.funcount++;
		if(cstack::thiscstack.funcount >=cstack::thiscstack.funcmax){
			cstack::thiscstack.funcmax *=2;
			cstack::thiscstack.funcs = (function **)realloc(cstack::thiscstack.funcs,sizeof(function *)*cstack::thiscstack.funcmax);
		}
	}
	| declarator declaration_list compound_statement{//TODO
		//printf("does this shit get called?\n");
	}
	| declarator compound_statement{//TODO
		//printf("does this shit get called2?\n");
	}
	;

%%
#include <stdio.h>
extern char yytext[];
extern FILE * yyin;
extern int column;
//comment
int yyerror(char * s)
{
	fflush(stdout);
	////printf("error %s\n",s);
	//printf("hue\n%*s\n%*s\n", column, "^", column, s);
}
extern int expcount;
cstack cstack::thiscstack;
int main(int argc, char* argv[])
{
    /* Call the lexer, then quit. */
    yyin = fopen(argv[1],"r");
    expcount=0;
    whilecount=1;
    ifcount=1;
    //perror("fopen");
    //printf("input file: %s %d\n",argv[1],yyin);
	cstack::thiscstack.funcs = (struct function **) malloc(sizeof(function *)*50);
	cstack::thiscstack.funcmax=50;
	cstack::thiscstack.funcount=0;
	frame *f = new frame;
	f->stacksize =0;
	f->maxsize = 10;
	f->pframe =0;
	f->sstack=(stack **) malloc(sizeof(stack *)*10);
	cstack::thiscstack.push(f);
	cstack::thiscstack.curframe=f;
	yyparse();
    //printf("hue%d\n",yyparse());
    int ret=cstack::thiscstack.findfunc("main");
    if(ret<0){
    	printf("main not found\n");
    	return 0;
    }
    function * mmain=cstack::thiscstack.funcs[ret];
    char * body=mmain->body;
    step(body);
    //perror("yyparse");
    return 0;
}

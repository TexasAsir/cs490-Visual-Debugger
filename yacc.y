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
%}

%start translation_unit
%%

primary_expression
	: IDENTIFIER {
		//printf("identifier %s\n",$<wd>1);
	}
	| NUMERAL {
		//printf("numeral %d\n",$1);
		if(!strchr($<wd>1,'.')){
			int size = strlen($<wd>1);
			size=size+6;
			$<wd>$=(char *)malloc(sizeof(char)*size);
			strcat($<wd>$,"//int");
			strcat($<wd>$,$<wd>1);
		}
		else{
			int size = strlen($<wd>1);
			size=size+6;
			$<wd>$=(char *)malloc(sizeof(char)*size);
			strcat($<wd>$,"//dbl");
			strcat($<wd>$,$<wd>1);
		}
	} 
	| CHARACTER
	| WORD {
		printf("word yo %s\n",$<wd>1);
	}
    | OPENPAR expression CLOSEPAR
	;

postfix_expression
	: primary_expression
	| postfix_expression OPENBRACKET expression CLOSEBRACKET
	| postfix_expression OPENPAR CLOSEPAR
	| postfix_expression OPENPAR argument_expression_list CLOSEPAR
	| postfix_expression DOT IDENTIFIER
	| postfix_expression ARROW IDENTIFIER
	| postfix_expression PLUSPLUS
	| postfix_expression MINUSMINUS
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list COMMA assignment_expression
	;

unary_expression
	: postfix_expression
	| PLUSPLUS unary_expression
	| MINUSMINUS unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF OPENPAR type_name CLOSEPAR
	;

unary_operator
	: STAR{
		printf("pointer dereferenced\n");
	}
	| PLUS
	| MINUS
	| NOT
	| ADDR
	;

cast_expression
	: unary_expression
	| OPENPAR type_name CLOSEPAR cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression STAR cast_expression {
		//printf("multiply %lf\n",$<dbl>$);
		//$<dbl>$=$<dbl>$*$<dbl>3;
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//time");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		printf("multiply %s\n",$<wd>$);
	}
	| multiplicative_expression DIVIDE cast_expression {
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//divi");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$/$<dbl>3;
		printf("divide  %s\n",$<wd>$);
	}
	| multiplicative_expression MOD cast_expression {
		//printf("mod\n");
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//mod");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=(int)$<dbl>$%(int)$<dbl>3;
	}
	;

additive_expression
	: multiplicative_expression
	| additive_expression PLUS multiplicative_expression {
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//add");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$+$<dbl>3;
		printf("addition %s\n",$<wd>$);
	}
	| additive_expression MINUS multiplicative_expression {
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//sub");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$-$<dbl>3;
		printf("subtraction %s\n",$<wd>$);
	}
	;

relational_expression
	: additive_expression
	| relational_expression LESS additive_expression
	| relational_expression GREAT additive_expression
	| relational_expression LESSEQUALS additive_expression
	| relational_expression GREATEQUALS additive_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQUALSEQUALS relational_expression
	| equality_expression NOTEQUALS relational_expression
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
	| logical_and_expression AND inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
    | logical_or_expression OR logical_and_expression
	;

conditional_expression
	: logical_or_expression
	;

assignment_expression
	: conditional_expression
	|  declaration_specifiers unary_expression assignment_operator assignment_expression {
		printf("\ntype specifier Assignment value %lf\n",$<dbl>4);
	}
	| unary_expression assignment_operator assignment_expression {
		printf("\nAssignment vaule %lf\n",$<dbl>3);
	}


assignment_operator
	: EQUALS
	| MULEQUALS
	| DIVEQUALS
	| MODEQUALS
	| PLUSEQUALS
	| MINUSEQUALS
	;

expression
	: assignment_expression
	| expression COMMA assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers SEMICOLON
	| declaration_specifiers init_declarator_list SEMICOLON{
		var[0]=$<wd>1;
		var[1]=$<wd>2;
	}
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier STAR{
		printf("pointer declared\n");
	}
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator{
		//printf("declarator %s\n",$<wd>1);
	}
	| init_declarator_list COMMA init_declarator
	;

init_declarator
	: declarator{
		//printf("declarator %s\n",$<wd>1);
	}
	| declarator EQUALS initializer {
		printf("init assignment %lf\n",$<dbl>3);
	}
	| declarator IDENTIFIER {
		//printf("identifier %s\n",$<wd>1);
	}
	;

storage_class_specifier
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
	: struct_or_union IDENTIFIER OPENBRACE struct_declaration_list CLOSEBRACE
	| struct_or_union OPENBRACE struct_declaration_list CLOSEBRACE
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list SEMICOLON
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
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

enum_specifier
	: ENUM OPENBRACE enumerator_list CLOSEBRACE
	| ENUM IDENTIFIER OPENBRACE enumerator_list CLOSEBRACE
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list COMMA enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER EQUALS constant_expression
	;

type_qualifier
	: CONST
	;

declarator
	: pointer direct_declarator{
		printf("pointer found h4h4h4h4h4hh4\n");
	}
	| direct_declarator {
		//printf("declarator %s\n",$<wd>1);
		$<wd>$=$<wd>1;
	}
	;

direct_declarator
	: IDENTIFIER {
		//printf("direct declarator %s\n",$<wd>1);
		$<wd>$=$<wd>1;
	}
	| OPENPAR declarator CLOSEPAR
	| direct_declarator OPENBRACKET constant_expression CLOSEBRACKET
	| direct_declarator OPENBRACKET CLOSEBRACKET
	| direct_declarator OPENPAR parameter_type_list CLOSEPAR
	| direct_declarator OPENPAR identifier_list CLOSEPAR
	| direct_declarator OPENPAR CLOSEPAR
	;

pointer
	: STAR
	| STAR type_qualifier_list
	| STAR pointer
	| STAR type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list//no ellipsis
	: parameter_list
	| parameter_list COMMA
	;

parameter_list
	: parameter_declaration
	| parameter_list COMMA parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list COMMA IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator {
		printf("hi?\n");
	}
	;

direct_abstract_declarator
	: OPENPAR abstract_declarator CLOSEPAR
	| OPENBRACKET CLOSEBRACKET
	| OPENBRACKET constant_expression CLOSEBRACKET
	| direct_abstract_declarator OPENBRACKET CLOSEBRACKET
	| direct_abstract_declarator OPENBRACKET constant_expression CLOSEBRACKET
	| OPENPAR CLOSEPAR
	| OPENPAR parameter_type_list CLOSEPAR
	| direct_abstract_declarator OPENPAR CLOSEPAR
	| direct_abstract_declarator OPENPAR parameter_type_list CLOSEPAR
	;

initializer
	: assignment_expression
	| OPENBRACE initializer_list CLOSEBRACE
	| OPENBRACE initializer_list COMMA CLOSEBRACE
	;

initializer_list
	: initializer
	| initializer_list COMMA initializer
	;

statement
	: labeled_statement
	| declaration
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement//maby issues here?
	: IDENTIFIER COLON statement
	;

compound_statement
	: OPENBRACE CLOSEBRACE
	| OPENBRACE decstat_list CLOSEBRACE
	;

decstat
	: statement_list
	| declaration_list
	;
decstat_list
	: decstat
	| decstat decstat_list
	;
declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: SEMICOLON
	| expression SEMICOLON
	;
include_statement
	: INCLUDE LESS include_expression GREAT
	| INCLUDE QUOTE include_expression QUOTE
	;
include_expression
	: IDENTIFIER DOT IDENTIFIER
	| IDENTIFIER
	;
selection_statement
	: IF OPENPAR expression CLOSEPAR statement
	| IF OPENPAR expression CLOSEPAR statement ELSE statement
	;

iteration_statement
	: WHILE OPENPAR expression CLOSEPAR statement
	| DO statement WHILE OPENPAR expression CLOSEPAR SEMICOLON
	| FOR OPENPAR expression_statement expression_statement CLOSEPAR statement
	| FOR OPENPAR expression_statement expression_statement expression CLOSEPAR statement
	;

jump_statement
	: CONTINUE SEMICOLON
	| BREAK SEMICOLON
	| RETURN SEMICOLON
	| RETURN expression SEMICOLON {
		//printf("return expr semi\n");
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
	| declaration {
		printf("global variable %s %s\n",var[0], var[1]);
		//(((struct varble *)globls+globalcount))->name=var[1];
		//(((struct varble *)globls+globalcount))->type=var[0];
		//globalcount++;
		//if(globalcount >=globalmax){
		//	globalmax *=2;
		//	globls = realloc(globls,sizeof(struct varble)*globalmax);
		//}
	}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement{
	}
	| declaration_specifiers declarator{
		printf("function line %d %s %s\n",linecount,$<wd>1,$<wd>2);
		cstack::thiscstack.funcs[cstack::thiscstack.funcount] = new function;
		cstack::thiscstack.funcs[cstack::thiscstack.funcount]->startpoint=linecount;
		cstack::thiscstack.funcs[cstack::thiscstack.funcount]->type=$<wd>1;
		cstack::thiscstack.funcs[cstack::thiscstack.funcount]->name=$<wd>2;
		cstack::thiscstack.funcount++;
		if(cstack::thiscstack.funcount >=cstack::thiscstack.funcmax){
			cstack::thiscstack.funcmax *=2;
			cstack::thiscstack.funcs = (function **)realloc(cstack::thiscstack.funcs,sizeof(function *)*cstack::thiscstack.funcmax);
		}
	}compound_statement{
		//printf("function definition2\n");
	}
	| declarator declaration_list compound_statement{
	}
	| declarator compound_statement{
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
	printf("hue\n%*s\n%*s\n", column, "^", column, s);
}


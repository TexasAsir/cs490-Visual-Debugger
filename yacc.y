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
		int size = strlen($<wd>1);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//id ");
		strcat($<wd>$,$<wd>1);
		printf("identifier %s\n",$<wd>$);
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
		printf("character %s\n",$<wd>$);
	}
	| WORD {
		int size = strlen($<wd>1);
		size=size+8;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//word ");
		strcat($<wd>$,$<wd>1);
		printf("word %s\n",$<wd>$);
	}
    	| OPENPAR expression CLOSEPAR{
		$<wd>$ = $<wd>2;
	}
	;

postfix_expression
	: primary_expression
	| postfix_expression OPENBRACKET expression CLOSEBRACKET{
		printf("array2!\n");
		int size = strlen($<wd>1)+strlen($<wd>3);
		size=size+9;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//index ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		printf("index %s\n",$<wd>$);
	}
	| postfix_expression OPENPAR CLOSEPAR
	| postfix_expression OPENPAR argument_expression_list CLOSEPAR{
		printf("TYPE\n");
	}
	| postfix_expression DOT IDENTIFIER{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//dot ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		printf("DOT %s\n",$<wd>$);
	}
	| postfix_expression ARROW IDENTIFIER{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+9;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//arrow ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		printf("ARROW %s\n",$<wd>$);
	}
	| postfix_expression PLUSPLUS{
		int size = strlen($<wd>2);
		size=size+8;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//++pf ");
		strcat($<wd>$,$<wd>2);
		printf("pppp %s\n",$<wd>$);
	}
	| postfix_expression MINUSMINUS{
		int size = strlen($<wd>2);
		size=size+8;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//--pf ");
		strcat($<wd>$,$<wd>2);
		printf("mmmm %s\n",$<wd>$);
	}
	;

argument_expression_list
	: assignment_expression{
		int size = strlen($<wd>$);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//arg ");
		strcat($<wd>$,$<wd>1);
		printf("argument %s\n",$<wd>$);
	}
	| argument_expression_list COMMA assignment_expression{
		int size = strlen($<wd>$)+strlen($<wd>2)+strlen($<wd>3);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//arg ");
		strcat($<wd>$,$<wd>1);
//		strcat($<wd>$,$<wd>2);
		strcat($<wd>$,$<wd>3);
		printf("argument %s\n",$<wd>$);
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
		printf("plosplos %s\n",$<wd>$);
	}
	| MINUSMINUS unary_expression{
		int size = strlen($<wd>2);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//-- ");
		strcat($<wd>$,$<wd>2);
		printf("minusminus %s\n",$<wd>$);
	}
	| unary_operator cast_expression{
		int size = strlen($<wd>$)+strlen($<wd>2);
		size=size+8;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//unop ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>2);
		printf("unop %s\n",$<wd>$);	
	}
	| SIZEOF unary_expression{
		int size = strlen($<wd>2);
		size=size+10;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//sizeof ");
		strcat($<wd>$,$<wd>2);
		printf("sizeof %s\n",$<wd>$);
	}
	| SIZEOF OPENPAR type_name CLOSEPAR{
		int size = strlen($<wd>3);
		size=size+14;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//sizeoftype ");
		strcat($<wd>$,$<wd>3);
		printf("sizeoftype %s\n",$<wd>$);
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
		printf("CAST %s\n",$<wd>$);
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
		printf("multiply %s\n",$<wd>$);
	}
	| multiplicative_expression DIVIDE cast_expression {
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//div ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$/$<dbl>3;
		printf("divide  %s\n",$<wd>$);
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
	| relational_expression LESS additive_expression{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+8;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//less ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$-$<dbl>3;
		printf("less op %s\n",$<wd>$);
	}
	| relational_expression GREAT additive_expression{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//gt ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$-$<dbl>3;
		printf("great  %s\n",$<wd>$);
	}
	| relational_expression LESSEQUALS additive_expression{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//le ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$-$<dbl>3;
		printf("less eq %s\n",$<wd>$);
	}
	| relational_expression GREATEQUALS additive_expression{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+6;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//ge ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$-$<dbl>3;
		printf("great eq %s\n",$<wd>$);
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
		printf("equalsequals %s\n",$<wd>$);
	}
	| equality_expression NOTEQUALS relational_expression{
		int size = strlen($<wd>$)+strlen($<wd>3);
		size=size+7;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//neq ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		//$<dbl>$=$<dbl>$-$<dbl>3;
		printf("notequals %s\n",$<wd>$);
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
		printf("AND %s\n",$<wd>$);
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
		printf("OR %s\n",$<wd>$);
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
		printf("ASSIGNMENT %s\n",$<wd>$);
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
		printf("ASSIGNMENT %s\n",$<wd>$);
	}


assignment_operator
	: EQUALS{
		$<wd>$=" = ";
	}
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
		//printf("declarator UUUUUUUUUU\n");
	}
	| declarator EQUALS initializer {
		//printf("init assignment !@$@#%$@#$#\n");
	}
	| declarator IDENTIFIER {
		//printf("identifier GGGGGGG\n");
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
	| IDENTIFIER EQUALS constant_expression{
		//printf("ASFDSGSG\n");
	}
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
		printf("direct declarator FUCK TEEMO\n");
		$<wd>$=$<wd>1;
	}
	| OPENPAR declarator CLOSEPAR
	| direct_declarator OPENBRACKET constant_expression CLOSEBRACKET{
		printf("why god why %s\n",$<wd>1);
	}
	| direct_declarator OPENBRACKET CLOSEBRACKET{
		printf("why god why %s\n",$<wd>1);
	}
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
	| OPENBRACKET constant_expression CLOSEBRACKET{
		printf("why god why %s\n",$<wd>1);
	}
	| direct_abstract_declarator OPENBRACKET CLOSEBRACKET
	| direct_abstract_declarator OPENBRACKET constant_expression CLOSEBRACKET{
		printf("why god why %s\n",$<wd>1);
	}
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
		printf("indexdec %s\n",$<wd>$);
	}
	| declaration_specifiers IDENTIFIER OPENBRACKET CLOSEBRACKET{
		int size = strlen($<wd>1)+strlen($<wd>3);
		size=size+9;
		$<wd>$=(char *)malloc(sizeof(char)*size);
		strcat($<wd>$,"//index ");
		strcat($<wd>$,$<wd>1);
		strcat($<wd>$,$<wd>3);
		printf("index %s\n",$<wd>$);
	}
	;
labeled_statement//maby issues here?
	: IDENTIFIER COLON statement
	;

compound_statement
	: OPENBRACE CLOSEBRACE
	| OPENBRACE decstat_list CLOSEBRACE
	;

decstat
	: declaration_list
	| statement_list
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


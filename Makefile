#makefile

all: lex yacc functions prog
	
yacc: yacc.y
	yacc -d yacc.y
lex: lex.l
	lex lex.l
functions: functions.cpp
	g++ -c functions.cpp
prog: y.tab.c y.tab.h lex.yy.c
	gcc y.tab.c lex.yy.c

#makefile

all: lex yacc functions stack.o prog
	
yacc: yacc.y
	yacc -d yacc.y
lex: lex.l
	lex lex.l
functions: functions.cpp
	g++ -c functions.cpp
lex.yy.o:
	gcc -c lex.yy.c
stack.o: stack.cpp stack.h
	g++ stack.cpp -c
prog: y.tab.c y.tab.h lex.yy.o stack.o
	g++ y.tab.c lex.yy.o stack.o -w -o interpreter

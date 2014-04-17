#makefile

all: lex yacc functions.o step stack.o prog
	
yacc: yacc.y
	yacc -d yacc.y
lex: lex.l
	lex lex.l
lex.yy.o: lex.yy.c
	gcc -c lex.yy.c
stack.o: stack.cpp stack.h 
	g++ stack.cpp -c
functions.o: functions.cpp functions.h
	g++ -c functions.cpp
step: step.cpp step.h functions.h stack.o functions.o
	g++ -o step step.cpp functions.o stack.o
prog: y.tab.c y.tab.h lex.yy.o stack.o
	g++ y.tab.c lex.yy.o stack.o -w -o interpreter

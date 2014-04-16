#makefile

all: lex yacc step.o functions stack.o prog
	
yacc: yacc.y
	yacc -d yacc.y
lex: lex.l
	lex lex.l
step.o: step.cpp
	g++ -c step.cpp
functions: functions.cpp step.h step.o
	g++ -o function functions.cpp step.o
lex.yy.o: lex.yy.c
	gcc -c lex.yy.c
stack.o: stack.cpp stack.h
	g++ stack.cpp -c
prog: y.tab.c y.tab.h lex.yy.o stack.o
	g++ y.tab.c lex.yy.o stack.o -w -o interpreter

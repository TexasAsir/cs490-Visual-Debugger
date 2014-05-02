#makefile

all: lex yacc functions.o stack.o prog
	
yacc: yacc.y
	yacc -d yacc.y
lex: lex.l
	lex lex.l
lex.yy.o: lex.yy.c
	gcc -c lex.yy.c
stack.o: stack.cpp stack.h 
	g++ stack.cpp -c
functions.o: functions.cpp functions.h
	g++ -c -w functions.cpp
#step: step.cpp step.h functions.h stack.o functions.o viz.cc
	#g++ -o step -w step.cpp functions.o stack.o
prog: y.tab.c y.tab.h lex.yy.o stack.o step.cpp functions.o viz.cc functions.h step.h
	g++ y.tab.c lex.yy.o stack.o -w -o interpreter functions.o


#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

cstack::cstack(){
	fframe = (frame**)malloc(sizeof(frame *)*1006);
	stacksize=0;
	maxsize=1006;
	//printf("hi i am bob, this is god\n");
}
void cstack::push(frame *aframe){
	if(stacksize>=maxsize){
		maxsize *=2;
		fframe=(frame**)realloc((void *)fframe,sizeof(frame *)*maxsize);
	}
	fframe[stacksize]=aframe;
	stacksize++;
}
void cstack::pop(){
	//free(fframe[stacksize]);
	stacksize--;
}
frame* cstack::getframe(int i){
	return fframe[i];
}



//extern char yytext[];
extern FILE * yyin;
cstack cstack::thiscstack;
int yyparse(void);
int main(int argc, char* argv[])
{
    /* Call the lexer, then quit. */
    yyin = fopen(argv[1],"r");
    //perror("fopen");
    //printf("input file: %s %d\n",argv[1],yyin);
	cstack::thiscstack.funcs = (struct function **) malloc(sizeof(function *)*50);
	cstack::thiscstack.funcmax=50;
	cstack::thiscstack.funcount=0;
    printf("hue%d\n",yyparse());
    //perror("yyparse");
    return 0;
}

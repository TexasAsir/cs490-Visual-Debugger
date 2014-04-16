
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	for(int i=0;i<fframe[stacksize]->stacksize;i++){
		free(fframe[stacksize]->sstack[i]);
	}
	free(fframe[stacksize]->sstack);
	free(fframe[stacksize]);
	stacksize--;
}
void cstack::pushsstack(stack * s, frame *f){
	if(find(f,s->var.name)>-1){
		printf("variable already declared %s\n",s->var.name);
		exit(-1);
	}
	if(f->stacksize>=f->maxsize){
		f->maxsize *=2;
		f->sstack=(stack**)realloc((void *)f->sstack,sizeof(stack *)*f->maxsize);
	}
	f->sstack[f->stacksize]=s;
	f->stacksize++;
}

int cstack::find(frame * f, char * var){
	int ind = 0;
	while(ind < f->maxsize){
		if(!strcmp(f->sstack[ind]->var.name,var)){
			return ind;
		}	
		ind++;					
	}
	return -1;
}

frame* cstack::getframe(int i){
	return fframe[i];
}



//extern char yytext[];
extern FILE * yyin;
extern int expcount;
cstack cstack::thiscstack;
int yyparse(void);
int main(int argc, char* argv[])
{
    /* Call the lexer, then quit. */
    yyin = fopen(argv[1],"r");
    expcount=0;
    //perror("fopen");
    //printf("input file: %s %d\n",argv[1],yyin);
	cstack::thiscstack.funcs = (struct function **) malloc(sizeof(function *)*50);
	cstack::thiscstack.funcmax=50;
	cstack::thiscstack.funcount=0;
    printf("hue%d\n",yyparse());
    //perror("yyparse");
    return 0;
}

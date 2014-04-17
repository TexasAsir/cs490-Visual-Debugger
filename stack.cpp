
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
	while(ind < f->stacksize){
		if(!strcmp(f->sstack[ind]->var.name,var)){
			return ind;
		}	
		ind++;					
	}
	return -1;
}
void cstack::printframe(frame *f){
	printf("---------Variables---------\n");
	printf("[type]		[name]		[value]\n");
	//printf("stacksize=%d\n",f->stacksize);
	for(int i=0;i<f->stacksize;i++){
		stack *s = f->sstack[i];
		//printf("s %x s ident %d\n",s,s->var.ident);
		if(!s->var.ident){
			varble *v = (varble *)s;
			//printf("type %d\n",v->value);
			printf("%s\t\t%s\t\t",v->type,v->name);
			//printf("%s=	",v->name);
			if(v->value==0){
				printf("null\n");
			}
			else if(strcmp(v->type,"int")==0){
				printf("%d\n",*(int *)(v->value));	
			}
			else if(strcmp(v->type,"double")==0){
				printf("%lf\n",*(double *)(v->value));	
			}
			else if(strcmp(v->type,"char")==0){
				printf("%c\n",*(char *)(v->value));	
			}
			else if(strcmp(v->type,"float")==0){
				printf("%f\n",*(float *)(v->value));	
			}
			else if(strcmp(v->type,"string")==0){
				printf("%s\n",(char *)(v->value));	
			}
			else{
				printf("Invalid Variable");
				printf("\n");
			}
		}
	}
}
frame* cstack::getframe(int i){
	return fframe[i];
}





#include <stdio.h>
#include "stack.h"
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;


void printSLL(struct sstruct *s,int * ptr){
	printf("Made it here\n");
	varble * v=new varble[10];
	int count=0;
	for(int i=0;s->var[i]!=NULL;i++){
		v[i].type=strdup(s->var[i]->type);
		v[i].name=strdup(s->var[i]->name);
		v[i].value=(void *)s->var[i]->value;
		count++;
	}
	for(int i=0;i<count;i++){
		printf("Type\t%s\n",v[i].type);
		printf("Name\t%s\n",v[i].name);
		printf("Value\t");
		if(strcmp(v[i].type,"int")==0){
			printf("%d",(int *)v[i].value);
		}
		else if(strcmp(v[i].type,"double")==0){
			printf("%lf",(int *)v[i].value);
		}
		else if(strcmp(v[i].type,"float")==0){
			printf("%f",(int *)v[i].value);
		}
		else if(strcmp(v[i].type,"char")==0){
			printf("%c",(int *)v[i].value);
		}
		else if(strcmp(v[i].type,"string")==0){
			printf("%s",(int *)v[i].value);
		}
		else{
			//this is the next pointer
			
		}

		printf("\n\n");

		
	}
}

void printArray(struct sstruct *s){

}

void printDLL(struct sstruct *s){

}

void printBTREE(struct sstruct *s){

}




void viz(union stack * s){
	struct varble *v=(varble*)s;
	if(v->ident==0){
		//is varble
		//type name value
		printf("---------Variables---------\n");
		printf("[type]		[name]		[value]\n");
		printf("%s\t\t%s\t\t",v->type,v->name);
	
		
		//printf("%s=	",v->name);
		if(strcmp(v->type,"int")==0){
			printf("%d\n",*(int *)(v->value));	
		}
		else if(strcmp(v->type,"double")==0){
			printf("%lf\n",*(int *)(v->value));	
		}
		else if(strcmp(v->type,"char")==0){
			printf("%c\n",*(int *)(v->value));	
		}
		else if(strcmp(v->type,"float")==0){
			printf("%f\n",*(int *)(v->value));	
		}
		else if(strcmp(v->type,"string")==0){
			printf("%s\n",*(int *)(v->value));	
		}
		else{
			printf("Invalid Variable");
		}
		printf("\n");


	}


	else{
		//is a structure
		struct sstruct *st=(sstruct*)s;
		if(strcmp(st->label,"SLL")==0){
			printSLL(st,NULL);
		}
		else if(strcmp(st->label,"DLL")==0){

		}
		else if(strcmp(st->label,"ARRAY")==0){

		}
		else if(strcmp(st->label,"BTREE")==0){

		}
		else{
			printf("Invalid or unaccepted strucutre\n");
		}
		
		


	}





}




int main(){


	/*
		sstruct s;
		s.ident=1;
		s.name="n";
		s.type="node";
	*/
	//char * test="Gooby plz\n";
	int test=5;
	varble v;
	v.ident=0;
	v.name="test";
	v.type="int";
	v.value=(void *)&test;
	stack *S=(stack *)&v;

	viz(S);

	
	




	sstruct array;
	sstruct arrayB;

	arrayB.ident=1;
	arrayB.label=strdup("SLL");
	arrayB.name=strdup("zombieDust");
	arrayB.type=strdup("Node");
	arrayB.var=(varble **)malloc(sizeof(varble *)*2);
	arrayB.var[0]=new varble;
	arrayB.var[1]=new varble;
	arrayB.var[0]->ident=0;
	arrayB.var[0]->name=strdup("val");
	arrayB.var[0]->type=strdup("int");	
	arrayB.var[0]->value=(void *)10;
	
	arrayB.var[1]->ident=0;
	arrayB.var[1]->name=strdup("next");
	arrayB.var[1]->type=strdup("node *");
	arrayB.var[1]->value=NULL;





	array.ident=1;
	printf("You wont like how I allocate strings\n");
	array.label=strdup("SLL");
	array.name=strdup("alphaKing");
	array.type=strdup("Node");
	array.var=(varble **)malloc(sizeof(varble *)*2);
	array.var[0]=new varble;
	array.var[1]=new varble;

	array.var[0]->ident=0;
	array.var[0]->name=strdup("val");
	array.var[0]->type=strdup("int");	
	array.var[0]->value=(void *)5;

	array.var[1]->ident=0;
	array.var[1]->name=strdup("next");
	array.var[1]->type=strdup("node *");
	array.var[1]->value=(void *)&arrayB;

	stack *two=(stack*)&array;

	viz(two);



}

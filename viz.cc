#include <stdio.h>
#include "stack.h"
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <math.h>
#include <unistd.h>

using namespace std;

int tree[1000];
int numNodes=0;
int height;
void *prevList[10];
void *nextList[10];

char dllSend[1000];

char sllSend[1000];



void printStack(int index, int offset){
	//You need to compile as
	//gcc bTree.c -lm


	//implement a print position
	
    int i;
    int j=0;
    int k;
    int width;
    for(i=0;i<height+1;i++){
        printf("\t");
    }
    printf("%d",tree[0]);
	for(i=0;i<height+1;i++){
            printf("\n");
            for(width=0;width<pow(2,i);width++){
                for(k=0;k<((height+1)-i);k++){
                    printf("\t");
                }
                printf("%d  %d",tree[((2*j)+1)],tree[((2*j)+2)]);
                //printf("%d  %d",((2*j)+1),((2*j)+2));
                j++;
            }
    }

}










void setStack(struct sstruct *s,char * left, char * right, char * infoVar, int index){
	//printf("It's time to set the stack\n");
	//printf("The name of this struct is %s\n",s->name);
	//may have to do something else for characters and such
	int infoPos=-1;
	int leftPos=-1;
	int rightPos=-1;	

	for(int i=0;s->var[i+1]!=NULL;i++){

		if(strcmp(s->var[i]->name,infoVar)==0){
			infoPos=i;
		}
		else if(strcmp(s->var[i]->name,left)==0){
			leftPos=i;
		}
		else if(strcmp(s->var[i]->name,right)==0){
			rightPos=i;
		}
	}
	//printf("the three values are %d %d %d\n",infoPos,leftPos,rightPos);
	//printf("The name of the thing i want to save is %s\n",s->var[infoPos]->name);
	/*varble info;
	info.ident=0;
	info.type=strdup(s->var[infoPos]->type);
	info.name=strdup(s->var[infoPos]->name);
	info.value=s->var[infoPos]->value;
	int* value = (int*)info.value;
	*/
	//printf("%d",(int *)v[i].value);
	//printf("The derpy i want to save is %d\n",(int *)s->var[infoPos]->value);
	char tmp[10];
	sprintf(tmp,"%d",(int *)s->var[infoPos]->value);
	tree[index]=atoi(tmp);
	
	//int rly=(int *)s->var[infoPos]->value;
	//tree[index]=rly;
	//tree[index]=*(int *)s->var[infoPos]->value;
	
	//printf("The value of tree[index] is %d\n",tree[index]);
	numNodes++;
	if(s->var[leftPos]->value!=NULL){
			//setStack(root->left,((2*index)+1));
			setStack((sstruct *)s->var[leftPos]->value,left,right,infoVar,((2*index)+1));
	}	
	if(s->var[rightPos]->value!=NULL){
			//setStack(root->right,((2*index)+2));
			setStack((sstruct *)s->var[rightPos]->value,left,right,infoVar,((2*index)+2));
	}
}

void printBTree(struct sstruct *s){
	//will only allow one infovar
	int numInfo=0;
	char * infoVar;
	//printf("Made it into b tree printing\n");
	varble * v = new varble[10];
	int count=0;
	while(s->var[count+1]!=NULL){
		v[count].ident=0;
		v[count].type=strdup(s->var[count]->type);
		v[count].name=strdup(s->var[count]->name);
		v[count].value=(void *)s->var[count]->value;
		count++;
	}
	char * leftCand=NULL;
	char * rightCand=NULL;	
	for(int i=0;i<count;i++){
		if(numInfo>1){
			printf("You have too many information variables, we can only visualize one\n");
			return;
		}
		if(strcmp(v[i].type,"int")==0){
				infoVar=strdup(v[i].name);
				numInfo++;
			}
			else if(strcmp(v[i].type,"double")==0){
				infoVar=strdup(v[i].name);
				numInfo++;
			}
			else if(strcmp(v[i].type,"float")==0){
				infoVar=strdup(v[i].name);
				numInfo++;
			}
			else if(strcmp(v[i].type,"char")==0){
				infoVar=strdup(v[i].name);
				numInfo++;
			}
			else if(strcmp(v[i].type,"string")==0){
				infoVar=strdup(v[i].name);
				numInfo++;
			}
			else{
				if(leftCand==NULL){
					leftCand=strdup(v[i].name);
				}
				else if(rightCand==NULL){
					rightCand=strdup(v[i].name);
				}
				else{
					printf("You have too many self referencing pointers\n");
					return;
				}
			}
	
	}
	if(numInfo!=1){
		printf("You did not include an infomation variable\n");
		return;
	}
	if(leftCand==NULL || rightCand==NULL){
		printf("You do not have enough self referencing pointers");
		return;
	}
	char * left=NULL;
	char * right=NULL;	
	printf("You have two self referencing pointers, %s and %s\n",leftCand,rightCand);
	printf("If %s is your left pointer, enter 1, if %s is your left pointer, enter 2\n",leftCand,rightCand);
	int response;
	while(response !=1 && response !=2){
		scanf("%d",&response);
		printf("The response is %d\n",response);
		if(response==1){
			left=strdup(leftCand);
			right=strdup(rightCand);
		}
		else if(response==2){
			right=strdup(leftCand);
			left=strdup(rightCand);
		}
		else{
			printf("Try again\n");
		}

	}

	setStack(s,left,right,infoVar,0);
	//printf("The number of nodes is %d\n",numNodes);
	height=floor(log(numNodes)/log(2));
	//printf("The height of this tree is %d\n",height);
	int offset=pow(2,height);
	//printf("The offset is %d\n",offset);

	printf("\n\n\n");
	printStack(0,offset);
	printf("\n");
	
	
}


void enqueSLL(struct varble * v, int count){
	printf("[type]    [name]      [value]-------->\n");
		for(int i=0;i<count;i++){
			printf("%s\t%s\t",v[i].type,v[i].name);
			if(strcmp(v[i].type,"int")==0){
				printf("%d",(int *)v[i].value);
			}
			else if(strcmp(v[i].type,"double")==0){
				printf("%lf",(double *)v[i].value);
			}
			else if(strcmp(v[i].type,"float")==0){
				printf("%f",(float *)v[i].value);
			}
			else if(strcmp(v[i].type,"char")==0){
				printf("%c",(int *)v[i].value);
			}
			else if(strcmp(v[i].type,"string")==0){
				printf("%s",(int *)v[i].value);
			}
			else{
				//this is the next pointer
				if(v[i].value!=NULL){
					printf("%p",v[i].value);
					printf("\n\n");
					

				}
				else{
					printf("NULL");
				    printf("\n\n");
				}
			}
		
		}		
	

}


void printNode(struct sstruct *s){
	char header[300];
	sprintf(header,"struct %s [%s]\n[type]	[name]	[value]\n",s->type,s->name);
	//printf("[type]    [name]      [value]\n");
	strcat(dllSend,header);
	char typeName[100];
	char var[100];
	for(int i=0;s->var[i+1]!=NULL;i++){
		sprintf(typeName,"%s	%s	",s->var[i]->type,s->var[i]->name);
		strcat(dllSend,typeName);
		
		if(strcmp(s->var[i]->type,"int")==0){
			sprintf(var,"%d\n",(int *)(s->var[i]->value));	
		}
		else if(strcmp(s->var[i]->type,"double")==0){
			sprintf(var,"%lf\n",(int *)(s->var[i]->value));	
		}
		else if(strcmp(s->var[i]->type,"char")==0){
			sprintf(var,"%c\n",(int *)(s->var[i]->value));	
		}
		else if(strcmp(s->var[i]->type,"float")==0){
			sprintf(var,"%f\n",(int *)(s->var[i]->value));	
		}
		else if(strcmp(s->var[i]->type,"string")==0){
			sprintf(var,"%s\n",(int *)(s->var[i]->value));	
		}
		else{
			if(s->var[i]->value==NULL){
				sprintf(var,"%s","NULL\n");
				//continue;
			}
			else{
				sprintf(var,"%p\n",s->var[i]->value);
			}
		}
		strcat(dllSend,var);
	}


}







void printSLL(struct sstruct *s){
	//printf("Made it here\n");

	printf("-------struct %s [%s]------------\n",s->type,s->name);
	varble * v=new varble[10];
	int count=0;
	for(int i=0;s->var[i]!=NULL;i++){
		v[i].type=strdup(s->var[i]->type);
		v[i].name=strdup(s->var[i]->name);
		v[i].value=(void *)s->var[i]->value;
		count++;
	}
		//char header[50];
		//sprintf(header,"#!SLL\nnum vars %d\n",count);
		//strcat(dllSend,header);
		int next=-1;
		char var[50];
		for(int i=0;i<count;i++){
			//printf("Type\t%s\n",v[i].type);
			//printf("Name\t%s\n",v[i].name);
			//printf("Value\t");
			if(strcmp(v[i].type,"int")==0){
				//printf("%d",(int *)v[i].value);
				//sprintf(var,"%s\t%s\t%d\n",v[i].type,v[i].name,(int *)v[i].value);
				//strcat(dllSend,var);	

			}
			else if(strcmp(v[i].type,"double")==0){
				//printf("%lf",(double *)v[i].value);
			}
			else if(strcmp(v[i].type,"float")==0){
				//printf("%f",(float *)v[i].value);
			}
			else if(strcmp(v[i].type,"char")==0){
				//printf("%c",(int *)v[i].value);
			}
			else if(strcmp(v[i].type,"string")==0){
				//printf("%s",(int *)v[i].value);
			}
			else{
				//this is the next pointer
				if(v[i].value!=NULL){
					//printf("%p",v[i].value);
					//printf("\n\n");
					next=i;

				}
				else{
					//printf("NULL");
				    //printf("\n\n");
				}
			}

			
		printf("\n\n");
		
		}
		//interate to next node if there is one
		
		if(next!=-1){
			//	printf("SCOOOBY DOOBY DOOO!!!!!!!!!!\n");
				//enqueSLL(v,count);
				printNode(s);
				printSLL((sstruct *)v[next].value);
		}	
		else{
				printf("\n\n");
				printNode(s);
				enqueSLL(v,count);
		}		


			printf("\n\n");

	
}

void printArray(struct sstruct *s, int * ptr){
	printf("In array mode\n");
	int drawMode=0;
	if(ptr==NULL){
		drawMode=1;
	}
	
	printf("Printing Array %s---------\n",s->name);
	for(int i=0;s->var[i+1]!=NULL;i++){
		printf("%d ",s->var[i]->value);
	}
	
	
	printf("\n");

}


/*void createLists(struct sstruct *s, int prev, int  next,int index){
	printf("Made it to create list \n");
	if(s->var[prev]->value!=NULL){
		printf("The value i am putting in is %p\n",s->var[prev]->value);
		prevList[index]=(int *)s->var[prev]->value;
		//printSLL((sstruct *)v[next].value);		
		createLists((sstruct *)s->var[prev]->value,prev,next,(index+1));
	}
	if(s->var[next]->value!=NULL){
		nextList[index]=(int *)s->var[next]->value;
		//printSLL((sstruct *)v[next].value);		
		createLists((sstruct *)s->var[next]->value,prev,next,(index+1));
	}



}
*/






void printDLL(struct sstruct *s){
	printf("got to the dll printing\n");
	int count=0;
	int infoVars=0;
	varble * v = new varble[10];
	for(int i=0;s->var[i+1]!=NULL;i++){
		v[i].type=strdup(s->var[i]->type);
		v[i].name=strdup(s->var[i]->name);
		v[i].value=(void *)s->var[i]->value;
		count++;
	}
	printf("Made it to the next cand stuff\n");
	int nextCand;
	int prevCand;
	for(int i=0;i<count;i++){
		if(strcmp(v[i].type,"int")==0){
			//printf("%d\n",*(int *)(v->value));	
		}
		else if(strcmp(v[i].type,"double")==0){
			//printf("%lf\n",*(int *)(v->value));	
		}
		else if(strcmp(v[i].type,"char")==0){
			//printf("%c\n",*(int *)(v->value));	
		}
		else if(strcmp(v[i].type,"float")==0){
			//printf("%f\n",*(int *)(v->value));	
		}
		else if(strcmp(v[i].type,"string")==0){
			//printf("%s\n",*(int *)(v->value));	
		}
		else{
			if(infoVars>2){
				printf("You have too many self referencing variables\n");
				return;
			}
			else if(infoVars==0){
				prevCand=i;
				infoVars++;
			}
			else if(infoVars==1){
				nextCand=i;
				infoVars++;
			}
	
		}

	}
	if(infoVars!=2){
		printf("You did not include enough self referencing variables\n");
		return;
	}
	printf("You have two self referencing variables, %s and %s\n",v[prevCand].name,v[nextCand].name);
	int response;	
	printf("If %s is your previous pointer enter 1, if %s is your previous pointer enter 2",v[prevCand].name,v[nextCand].name);
	int previous;
	int next;
	while(response !=1 && response !=2){
		scanf("%d",&response);
		printf("The response is %d\n",response);
		if(response==1){
			previous=prevCand;
			next=nextCand;
		}
		else if(response==2){
			previous=nextCand;
			next=prevCand;
		}
		else{
			printf("Try again\n");
		}

	}
	//createLists(s,previous,next,0);
	//sstruct * pTemp=(sstruct*)s->var[previous]->value;
	
	//build the previous list
	sstruct * pTemp=(sstruct *)s;	
	int prevIndex=0;
	printf("The thing i want to save is %p\n",pTemp->var[previous]->value);	
	while(pTemp->var[previous]->value!=NULL){ 
		printf("\n");
		printf("The thing i want to save is %p\n",pTemp->var[previous]->value);
		//prevList[prevIndex]=(int *)pTemp->var[previous]->value;
		prevList[prevIndex]=(void *)pTemp->var[previous]->value;
		pTemp=(sstruct*)pTemp->var[previous]->value;

	}	

	//build the next list
	sstruct * nTemp=(sstruct *)s;	
	int nextIndex=0;
	printf("The thing i want to save is %p\n",nTemp->var[next]->value);	
	while(nTemp->var[next]->value!=NULL){ 
		printf("\n");
		printf("The thing i want to save is %p\n",nTemp->var[next]->value);
		//prevList[prevIndex]=(int *)pTemp->var[previous]->value;
		nextList[nextIndex]=(void *)nTemp->var[next]->value;
		nTemp=(sstruct*)nTemp->var[next]->value;

	}	


	printf("The previous list is \n");
	for(int i=0;i<5;i++){
		printf("%p ",prevList[i]);
	}
	printf("\n");
	printf("The next list is \n");
	for(int i=0;i<5;i++){
		printf("%p ",nextList[i]);
	}
	printf("\n");


strcat(dllSend,"#!DLL\n");
//print through the previous nodes

	for(int i=0;i<10;i++){
		if(prevList[i]!=NULL){
			pTemp=(sstruct*)prevList[i];
			printf("The name of what I have gotten is %s\n",pTemp->name);
			printNode(pTemp);
		}
	
	}

//print through the current node
	printNode(s);



//print through the next nodes
	for(int i=0;i<10;i++){
		if(nextList[i]!=NULL){
			nTemp=(sstruct*)nextList[i];			
			printNode(nTemp);
			

		}
	
	}









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
			//char header[50];
		//sprintf(header,"#!SLL\nnum vars %d\n",count);
		//strcat(dllSend,header);
			char lable[10];		
			sprintf(lable,"#!SLL\n");
			strcat(dllSend,lable);

			printSLL(st);
		}
		else if(strcmp(st->label,"DLL")==0){
			printDLL(st);
		}
		else if(strcmp(st->label,"ARRAY")==0){
			printArray(st,NULL);

		}
		else if(strcmp(st->label,"BTREE")==0){
			printBTree(st);
		}
		else{
			printf("Invalid or unaccepted strucutre\n");
		}
		
		


	}





}

void sendBTree(){
	FILE * f;
  	//f = fopen ("bTreeTest.txt","w");
  	f = fopen ("draw.txt","w");
	char buffer[1500];
	sprintf(buffer,"#!BTREE\nNum Nodes %d\nHeight %d\n",numNodes,height);
	int upper=pow(2,height+1);

	fwrite(buffer,sizeof(char),strlen(buffer),f);
	char buffB[10];
	for(int i=0;i<upper;i++){

		sprintf(buffB,"%d\n",tree[i]);
		fwrite(buffB,sizeof(char),strlen(buffB),f);

	}
	sprintf(buffB,"---\n");
	fwrite(buffB,sizeof(char),strlen(buffB),f);
	fclose(f);


}


int main(){


	/*
		sstruct s;
		s.ident=1;
		s.name="n";
		s.type="node";
	*/
	//char * test="Gooby plz\n";


//print a simple variable
	//File *f;
	int test=5;
	varble v;
	v.ident=0;
	v.name="test";
	v.type="int";
	v.value=(void *)&test;
	stack *S=(stack *)&v;

	viz(S);

	
	



//print a singley linked list
	sstruct array;
	sstruct arrayB;

	arrayB.ident=1;
	arrayB.label=strdup("SLL");
	arrayB.name=strdup("zombieDust");
	arrayB.type=strdup("Node");
	arrayB.var=(varble **)malloc(sizeof(varble *)*2);
	arrayB.var[0]=new varble;
	arrayB.var[1]=new varble;
	arrayB.var[1]->ident=0;
	arrayB.var[1]->name=strdup("val");
	arrayB.var[1]->type=strdup("int");	
	arrayB.var[1]->value=(void *)10;
	
	arrayB.var[0]->ident=0;
	arrayB.var[0]->name=strdup("next");
	arrayB.var[0]->type=strdup("node *");
	arrayB.var[0]->value=NULL;





	array.ident=1;
	printf("You wont like how I allocate strings\n");
	array.label=strdup("SLL");
	array.name=strdup("alphaKing");
	array.type=strdup("Node");
	array.var=(varble **)malloc(sizeof(varble *)*2);
	array.var[0]=new varble;
	array.var[1]=new varble;

	array.var[1]->ident=0;
	array.var[1]->name=strdup("val");
	array.var[1]->type=strdup("int");	
	array.var[1]->value=(void *)5;

	array.var[0]->ident=0;
	array.var[0]->name=strdup("next");
	array.var[0]->type=strdup("node *");
	array.var[0]->value=(void *)&arrayB;

	stack *two=(stack*)&array;

	viz(two);
	printf("\n\n\n\n");
	printf("%s\n",dllSend);

	FILE * sllTest;
	//sllTest=fopen("sllTest.txt","w");
  	sllTest = fopen ("draw.txt","w");
	fwrite(dllSend,sizeof(char),strlen(dllSend),sllTest);
	fclose(sllTest);


	memset (dllSend,0,strlen(dllSend));



//print an array
	sstruct aTest;
	aTest.label=strdup("ARRAY");
	aTest.name=strdup("a");
	aTest.type=strdup("array");
	aTest.var=(varble **)malloc(sizeof(varble *)*3);
	
	aTest.var[0]=new varble;
	aTest.var[1]=new varble;
	aTest.var[2]=new varble;

	aTest.var[0]->ident=0;
	aTest.var[0]->name=strdup("Aa");
	aTest.var[0]->type=strdup("int");
	aTest.var[0]->value=(void*)1;

	printf("the first element is %d\n",aTest.var[0]->value);

	aTest.var[1]->ident=0;
	aTest.var[1]->name=strdup("Aa");
	aTest.var[1]->type=strdup("int");
	aTest.var[1]->value=(void*)2;

	aTest.var[2]->ident=0;
	aTest.var[2]->name=strdup("Aa");
	aTest.var[2]->type=strdup("int");
	aTest.var[2]->value=(void*)3;

	stack *three=(stack*)&aTest;

	viz(three);



	//print a binary tree





	//left node
	sstruct bTestL;
	bTestL.label=strdup("BTREE");
	bTestL.name=strdup("left");
	bTestL.type=strdup("Node");
	bTestL.var=(varble **)malloc(sizeof(varble *)*3);
	bTestL.var[0]=new varble;
	bTestL.var[1]=new varble;
	bTestL.var[2]=new varble;
	bTestL.var[0]->ident=0;
	bTestL.var[0]->name=strdup("Left");
	bTestL.var[0]->type=strdup("Node*");
	bTestL.var[0]->value=NULL;
	bTestL.var[1]->ident=0;
	bTestL.var[1]->name=strdup("Right");
	bTestL.var[1]->type=strdup("Node*");
	bTestL.var[1]->value=NULL;
	bTestL.var[2]->ident=0;
	bTestL.var[2]->name=strdup("Val");
	bTestL.var[2]->type=strdup("int");
	bTestL.var[2]->value=(void*)1;


	//right node
	sstruct bTestR;
	bTestR.label=strdup("BTREE");
	bTestR.name=strdup("tree");
	bTestR.type=strdup("Node");
	bTestR.var=(varble **)malloc(sizeof(varble *)*3);
	bTestR.var[0]=new varble;
	bTestR.var[1]=new varble;
	bTestR.var[2]=new varble;
	bTestR.var[0]->ident=0;
	bTestR.var[0]->name=strdup("Left");
	bTestR.var[0]->type=strdup("Node*");
	bTestR.var[0]->value=NULL;
	bTestR.var[1]->ident=0;
	bTestR.var[1]->name=strdup("Right");
	bTestR.var[1]->type=strdup("Node*");
	bTestR.var[1]->value=NULL;
	bTestR.var[2]->ident=0;
	bTestR.var[2]->name=strdup("Val");
	bTestR.var[2]->type=strdup("int");
	bTestR.var[2]->value=(void*)10;


		//root node
	sstruct bTest;
	bTest.label=strdup("BTREE");
	bTest.name=strdup("root");
	bTest.type=strdup("Node");
	bTest.var=(varble **)malloc(sizeof(varble *)*3);
	bTest.var[0]=new varble;
	bTest.var[1]=new varble;
	bTest.var[2]=new varble;
	bTest.var[0]->ident=0;
	bTest.var[0]->name=strdup("Left");
	bTest.var[0]->type=strdup("Node*");
	bTest.var[0]->value=&bTestL;
	bTest.var[1]->ident=0;
	bTest.var[1]->name=strdup("Right");
	bTest.var[1]->type=strdup("Node*");
	bTest.var[1]->value=&bTestR;
	bTest.var[2]->ident=0;
	bTest.var[2]->name=strdup("Val");
	bTest.var[2]->type=strdup("int");
	bTest.var[2]->value=(void*)5;


	stack * four=(stack*)&bTest;
	viz(four);


	//test a dll
	sstruct dTestP;
	sstruct dTestN;
	sstruct dTest;
	//previous node

	dTestP.label=strdup("DLL");
	dTestP.name=strdup("Pride and Joy");
	dTestP.type=strdup("Node");
	dTestP.var=(varble **)malloc(sizeof(varble *)*3);
	dTestP.var[0]=new varble;
	dTestP.var[1]=new varble;
	dTestP.var[2]=new varble;
	dTestP.var[0]=new varble;
	dTestP.var[1]=new varble;
	dTestP.var[2]=new varble;
	dTestP.var[0]->ident=0;
	dTestP.var[0]->name=strdup("Next");
	dTestP.var[0]->type=strdup("Node*");
	dTestP.var[0]->value=&dTest;
	dTestP.var[1]->ident=0;
	dTestP.var[1]->name=strdup("Prev");
	dTestP.var[1]->type=strdup("Node*");
	dTestP.var[1]->value=NULL;
	dTestP.var[2]->ident=0;
	dTestP.var[2]->name=strdup("Val");
	dTestP.var[2]->type=strdup("int");
	dTestP.var[2]->value=(void*)10;

	
	//next node

	dTestN.label=strdup("DLL");
	dTestN.name=strdup("Robert the Bruce");
	dTestN.type=strdup("Node");
	dTestN.var=(varble **)malloc(sizeof(varble *)*3);
	dTestN.var[0]=new varble;
	dTestN.var[1]=new varble;
	dTestN.var[2]=new varble;
	dTestN.var[0]=new varble;
	dTestN.var[1]=new varble;
	dTestN.var[2]=new varble;
	dTestN.var[0]->ident=0;
	dTestN.var[0]->name=strdup("Next");
	dTestN.var[0]->type=strdup("Node*");
	dTestN.var[0]->value=NULL;
	dTestN.var[1]->ident=0;
	dTestN.var[1]->name=strdup("Prev");
	dTestN.var[1]->type=strdup("Node*");
	dTestN.var[1]->value=&dTest;
	dTestN.var[2]->ident=0;
	dTestN.var[2]->name=strdup("Val");
	dTestN.var[2]->type=strdup("int");
	dTestN.var[2]->value=(void*)10;



	//middle node 

	dTest.label=strdup("DLL");
	dTest.name=strdup("Gumball head");
	dTest.type=strdup("Node");
	dTest.var=(varble **)malloc(sizeof(varble *)*3);
	dTest.var[0]=new varble;
	dTest.var[1]=new varble;
	dTest.var[2]=new varble;
	dTest.var[0]=new varble;
	dTest.var[1]=new varble;
	dTest.var[2]=new varble;
	dTest.var[0]->ident=0;
	dTest.var[0]->name=strdup("Next");
	dTest.var[0]->type=strdup("Node*");
	dTest.var[0]->value=&dTestN;
	dTest.var[1]->ident=0;
	dTest.var[1]->name=strdup("Prev");
	dTest.var[1]->type=strdup("Node*");
	dTest.var[1]->value=&dTestP;
	dTest.var[2]->ident=0;
	dTest.var[2]->name=strdup("Val");
	dTest.var[2]->type=strdup("string");
	dTest.var[2]->value=(void*)"THIS IS A STRING";

	stack * five=(stack*)&dTest;
	viz(five);

	sendBTree();

	printf("\n\n\n\n\n\n");
	printf("This is the string that is being sent to the vizuallizer\n");
	printf("%s\n",dllSend);

	FILE * dllTest;
	//dllTest=fopen("dllTest.txt","w");
  	dllTest = fopen ("draw.txt","w");
	fwrite(dllSend,sizeof(char),strlen(dllSend),dllTest);
	fclose(dllTest);


	memset (dllSend,0,strlen(dllSend));



}

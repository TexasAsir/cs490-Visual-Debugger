#include <stdio.h>
#include <string.h>
#include "functions.h"
#include <stdlib.h>

void step(char *body){
	char in[100];
	int takeinput=1;
	int lastcommand=0;
	
	while(takeinput){
		scanf("%s",in);
		printf("in %s\n",in);
		printf("body %s\n",body);
		if(!strcmp(in,"step")||!strcmp(in,"s")){
			//take next step in program
			lastcommand=1;
			char nextstep[strlen(body)];
			int i;
			if(strncmp(body,"//struct",strlen("//struct"))){
				for(i=0;body[i]!=','&&body[i]!=0;i++){
					nextstep[i]=body[i];
				}
			}
			else{
				i=0;
				while(strncmp(body+i,"//ends",strlen("//ends"))){
					nextstep[i]=body[i];
					i++;
				}
				if(body[i]!=0){
					body+=6;
				}
				else//were done
					takeinput=0;
				
			}
			if(body[i]!=0){
				body+=i+1;
			}
			else//were done
				takeinput=0;
			nextstep[i]=0;
			printf("nextstep %s %d\n",nextstep,i);
			executeStatement* e = new executeStatement(nextstep);
			e->execute();
		}
		else if(!strcmp(in,"continue")||!strcmp(in,"c")){
			//continue the program
			lastcommand=2;
		}
		else if(!strcmp(in,"quit")||!strcmp(in,"q")){
			//quit the program
			takeinput=0;
		}
		//insert more commands here possibly break, print, set, etc
	}  

  return;
}
cstack cstack::thiscstack;
int main(){
	frame *f = new frame;
	f->stacksize =0;
	f->maxsize = 10;
	f->pframe =0;
	f->sstack=(stack **) malloc(sizeof(stack *)*10);
	cstack::thiscstack.push(f);
	step("//struct varble//dec int ident,//dec char * name,//dec char * type,//dec void * value//ends,//call //id printf//arg //word \"hi %d%d\\n\\n\"//arg //int 5//arg //int 6,//-- //int 3,//dec int j,//decassg double//id x = //dbl 0.5,//assg //id j = //int 5,//decassg char//id t = //char 'c'");
	cstack::thiscstack.printframe(f);
}

#include <stdio.h>
#include <string.h>
#include "functions.h"
#include <stdlib.h>
#include "viz.cc"

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
			for(i=0;body[i]!=','&&body[i]!=0;i++){
				nextstep[i]=body[i];
			}
			nextstep[i]=0;
			printf("nextstep %s %d\n",nextstep,i);
			if(!strncmp(nextstep,"//while",7)){
				char * condition = nextstep+7;
				char num[strlen(nextstep)];
				int k=0;
				printf("condition number %s\n",condition);
				while(*condition!=' '&&*condition){
					num[k]=*condition;
					condition++;
					k++;
				}
				num[k]=0;
				condition++;
				char cond[strlen(nextstep)];
				k=0;
				while(*condition!=','&&*condition){
					cond[k]=*condition;
					condition++;
					k++;
				}
				cond[k]=0;
				printf("while condition %s\n",cond);
				executeStatement* e = new executeStatement(cond);
				void * ret=e->execute();
				printf("ret %d\n",*(int *)ret);
				char loopbody[strlen(body)];
				loopbody[0]=0;
				//strcat(loopbody,nextstep);
				//loopbody[strlen(loopbody)]=',';
				//loopbody[strlen(loopbody)+1]=0;
				k=i+1;
				int wbool=1;
				while(wbool){
					for(i=0;body[k]!=','&&body[k]!=0;k++,i++){
						nextstep[i]=body[k];
						//printf("i = %d body=%c\n",i,body[k]);
					}
					nextstep[i]=body[k];
					k++;
					i++;
					nextstep[i]=0;
					//printf("nextstep %s num %s\n",nextstep,num);
					if(!strncmp(nextstep,"//endw",6)){
						//printf("got 1\n");
						if(!strncmp(nextstep+6,num,strlen(num))){
							wbool=0;
							//printf("got 2\n");
							continue;
						}
					}
					
					strcat(loopbody,nextstep);
				}
				loopbody[strlen(loopbody)-1]=0;
				//printf("loopbody %s\n",loopbody);
				if(*(int *)ret!=0){
					step(loopbody);
				}
				else{
					//printf("nextstep1251521 %s\nbody %s\nloopbody %s\n",nextstep,body,loopbody);
					//printf("nextstep %d body %d loopbody %d i %d\n",strlen(nextstep),strlen(body),strlen(loopbody),i);
					body+=i+strlen(loopbody)+strlen(nextstep)+strlen(cond)+3;
					if(*body==0)
						takeinput=0;
					//printf("body %s\n",body);
				}
				//printf("body123 %s\n",body);
			}
			else if(!strncmp(nextstep,"//if",4)){
				char * condition = nextstep+4;
				char num[strlen(nextstep)];
				int k=0;
				printf("condition number %s\n",condition);
				while(*condition!=' '&&*condition){
					num[k]=*condition;
					condition++;
					k++;
				}
				num[k]=0;
				condition++;
				char cond[strlen(nextstep)];
				k=0;
				while(*condition!=','&&*condition){
					cond[k]=*condition;
					condition++;
					k++;
				}
				cond[k]=0;
				printf("if condition %s\n",cond);
				executeStatement* e = new executeStatement(cond);
				void * ret=e->execute();
				printf("ret %d\n",*(int *)ret);
				if(*(int *)ret!=0){
					char ifbody[strlen(body)];
					ifbody[0]=0;
					k=i+1;
					int wbool=1;
					int haselse=0;
					while(wbool){
						for(i=0;body[k]!=','&&body[k]!=0;k++,i++){
							nextstep[i]=body[k];
							//printf("i = %d body=%c\n",i,body[k]);
						}
						nextstep[i]=body[k];
						k++;
						i++;
						nextstep[i]=0;
						//printf("nextstep %s num %s\n",nextstep,num);
						if(!strncmp(nextstep,"//endf",6)||!strncmp(nextstep,"//else",6)){
							//printf("got 1\n");
							if(!strncmp(nextstep+6,num,strlen(num))){
								if(!strncmp(nextstep,"//else",6)){
									haselse=1;
								}
								wbool=0;
								//printf("got 2\n");
								continue;
							}
						}
					
						strcat(ifbody,nextstep);
					}
					ifbody[strlen(ifbody)-1]=0;
					printf("ifbody %s\n",ifbody);
					step(ifbody);
					body+=i+strlen(ifbody)+strlen(nextstep)+strlen(cond)+3;
					printf("body ifsasdf %s\n",body);
					if(haselse){
						ifbody[0]=0;
						k=0;
						wbool=1;
						while(wbool){
							for(i=0;body[k]!=','&&body[k]!=0;k++,i++){
								nextstep[i]=body[k];
								//printf("i = %d body=%c\n",i,body[k]);
							}
							nextstep[i]=body[k];
							k++;
							i++;
							nextstep[i]=0;
							//printf("nextstep %s num %s\n",nextstep,num);
							if(!strncmp(nextstep,"//ende",6)||!strncmp(nextstep,"//else",6)){
								//printf("got 1\n");
								if(!strncmp(nextstep+6,num,strlen(num))){
									wbool=0;
									//printf("got 2\n");
									continue;
								}
							}
					
							strcat(ifbody,nextstep);
						}
						ifbody[strlen(ifbody)-1]=0;
						printf("ifbody %s\n",ifbody);
						body+=i+strlen(ifbody)+strlen(nextstep)+strlen(cond)+3;
					}
					if(*body==0)
						takeinput=0;
				}
				else{
					char ifbody[strlen(body)];
					ifbody[0]=0;
					k=i+1;
					int wbool=1;
					int haselse=0;
					while(wbool){
						for(i=0;body[k]!=','&&body[k]!=0;k++,i++){
							nextstep[i]=body[k];
							//printf("i = %d body=%c\n",i,body[k]);
						}
						nextstep[i]=body[k];
						k++;
						i++;
						nextstep[i]=0;
						//printf("nextstep %s num %s\n",nextstep,num);
						if(!strncmp(nextstep,"//endf",6)||!strncmp(nextstep,"//else",6)){
							//printf("got 1\n");
							if(!strncmp(nextstep+6,num,strlen(num))){
								if(!strncmp(nextstep,"//else",6)){
									haselse=1;
								}
								wbool=0;
								//printf("got 2\n");
								continue;
							}
						}
					
						strcat(ifbody,nextstep);
					}
					ifbody[strlen(ifbody)-1]=0;
					printf("ifbody %s\n",ifbody);
					body+=i+strlen(ifbody)+strlen(nextstep)+strlen(cond)+3;
					if(*body==0)
						takeinput=0;
					printf("body ifsasdf %s\n",body);
					if(haselse){
					
					}
				}
			}
			else{
				//printf("adding body\n");
				if(body[i]!=0)
					body+=i+1;
				else//were done
					takeinput=0;
				executeStatement* e = new executeStatement(nextstep);
				e->execute();
			}
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
		else if(!strcmp(in,"print")||!strcmp(in,"p")){
			frame * curframe=cstack::thiscstack.getframe(cstack::thiscstack.stacksize-1);
			scanf("%s",in);
			
			int ret=cstack::thiscstack.find(curframe,in);
			if(ret>=0){
				stack *s = curframe->sstack[ret];
				viz(s);
			}
			else
				printf("variable does not exist %s\n",in);
		}
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
	step("//call //id printf//arg //word \"hi %d%d\\n\\n\"//arg //int 5//arg //int 6,//-- //int 3,//dec int j,//decassg double//id x = //dbl .5,//assg //id j = //int 1,//decassg int//id a = //less //int 1//id j,//decassg char//id t = //char 'c',//call //id scanf//arg //word \"%c\"//arg //id t,//dec int i,//assg //id i = //int 6,//if1 //less //id i//int 6,//++pf //id i,//endf1");
	cstack::thiscstack.printframe(f);
}

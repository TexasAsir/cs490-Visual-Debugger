#include <stdio.h>
#include <string.h>

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
			if(body[i]!=0)
				body+=i+1;
			else//were done
				takeinput=0;
			nextstep[i]=0;
			printf("nextstep %s\n",nextstep);
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

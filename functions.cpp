#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "step.h"
#include "stack.h"

int myprintf(const char* format, ...){
	va_list arguments;
	va_start(arguments,format);
	int ret = vprintf(format,arguments);
	va_end(arguments);
	return ret;
}

int myscanf(const char* format, ...){
	va_list arguments;
	va_start(arguments,format);
	int ret = vscanf(format,arguments);
	va_end(arguments);
	return ret;
}

int myfscanf(FILE * ptr,const char* format, ...){
	va_list arguments;
	va_start(arguments,format);
	int ret = vfscanf(ptr, format,arguments);
	va_end(arguments);
	return ret;
}

int myfprintf(FILE * ptr,const char* format, ...){
	va_list arguments;
	va_start(arguments,format);
	int ret = vfprintf(ptr, format,arguments);
	va_end(arguments);
	return ret;
}

FILE * myfopen(const char * filename,const char* mode){
	return fopen(filename,mode);
}

int myfclose(FILE * cfile){
	return fclose(cfile);
}

class executeStatement{
	char * statement;
	public : 
		executeStatement(char * statement){
			this->statement=statement;
		}
		void setStatement(char * statement){
			this->statement=statement;
		}
		void * execute(){
			char expression[11];
			int i=2;
			while(statement[i]!=' '){
				expression[i-2]=statement[i];
				i++;
			}
			expression[i-2]=0;
			//printf("expression %s statement %s\n",expression,statement);
			if(!strcmp(expression,"add")){
				statement+=6;
				void * l=execute();
				void * r=execute();
				return addfun(l,r);
			}
			if(!strcmp(expression,"mul")){
				statement+=6;
				void * l=execute();
				void * r=execute();
				return mulfun(l,r);
			}
			if(!strcmp(expression,"sub")){
				statement+=6;
				void * l=execute();
				void * r=execute();
				return subfun(l,r);
			}
			if(!strcmp(expression,"mod")){
				statement+=6;
				void * l=execute();
				void * r=execute();
				return modfun(l,r);
			}
			if(!strcmp(expression,"div")){
				statement+=6;
				void * l=execute();
				void * r=execute();
				return divfun(l,r);
			}
			if(!strcmp(expression,"and")){
				statement+=6;
				void * l=execute();
				void * r=execute();
				return andfun(l,r);
			}
			if(!strcmp(expression,"or")){
				statement+=5;
				void * l=execute();
				void * r=execute();
				return orfun(l,r);
			}
			if(!strcmp(expression,"less")){
				statement+=7;
				void * l=execute();
				void * r=execute();
				return lessfun(l,r);
			}
			if(!strcmp(expression,"gt")){
				statement+=5;
				void * l=execute();
				void * r=execute();
				return gtfun(l,r);
			}
			if(!strcmp(expression,"le")){
				statement+=5;
				void * l=execute();
				void * r=execute();
				return lefun(l,r);
			}
			if(!strcmp(expression,"ge")){
				statement+=5;
				void * l=execute();
				void * r=execute();
				return gefun(l,r);
			}
			if(!strcmp(expression,"eqeq")){
				statement+=7;
				void * l=execute();
				void * r=execute();
				return eqfun(l,r);
			}
			if(!strcmp(expression,"neq")){
				statement+=6;
				void * l=execute();
				void * r=execute();
				return neqfun(l,r);
			}
			if(!strcmp(expression,"cast")){
				statement+=7;
				void * l=execute();
				return castfun(l);
			}
			if(!strcmp(expression,"unop")){
				statement+=7;
				void * l=execute();
				return unfun(l);
			}
			if(!strcmp(expression,"++")){
				statement+=5;
				void * l=execute();
				return plusfun(l);
			}
			if(!strcmp(expression,"--")){
				statement+=5;
				void * l=execute();
				return minusfun(l);
			}
			if(!strcmp(expression,"sizeof")){
				statement+=9;
				void * l=execute();
				return sizefun(l);
			}
			if(!strcmp(expression,"sizeoftype")){
				statement+=13;
				void * l=execute();
				return sizetfun(l);
			}
			if(!strcmp(expression,"++pf")){
				statement+=7;
				void * l=execute();
				return ppfun(l);
			}
			if(!strcmp(expression,"--pf")){
				statement+=7;
				void * l=execute();
				return mmfun(l);
			}
			if(!strcmp(expression,"dot")){
	
			}
			if(!strcmp(expression,"arrow")){
	
			}
			if(!strcmp(expression,"index")){
	
			}
			if(!strcmp(expression,"indexdec")){
	
			}
			if(!strcmp(expression,"call")){
				statement+=7;
				char * id =(char *)execute();
				if(!strcmp(id,"printf")){
					char * input=(char *)execute();
					//printf("input %s\n",input);
					while (*input){
						if(*input != '%'){
							if(!strncmp(input,"\\n",2)){
								printf("\n");
								input+=2;
								continue;
							}
							printf("%c",*input);
							input++;
							continue;
						}
						input++;
						if(*input=='d'){
							if(strncmp(statement,"//arg",5)){
								printf("not enough arguments to printf\n");
								return (void *)-1;
							}
							int * arg=(int *)execute();
							printf("%d",*arg);
							input++;
						}
					}
				}
			
				/*if(!strcmp(i,"scanf")){
				//TODO					
				char * input=(char *)execute();
					while(*input){
						if(*input != '%'){
							char tmp[2];
							tmp[1]=0;
							tmp[0]=*input;
							if(scanf(tmp))
						}
					}
				}*/
			}
			if(!strcmp(expression,"arg")){
				statement+=6;
				void * l = execute();
				return l;
			}
			if(!strcmp(expression,"struct")){
				
			}
			if(!strcmp(expression,"structvar")){
				
			}
			if(!strcmp(expression,"dbl")){
				statement+=6;
				char number[20];
				int i=0;
				while(*statement!='/'&&*statement!=0){
					number[i]=*statement;
					i++;
					statement++;
				}
				number[i]=0;
				double ret=atof(number);
				//printf("int ret %d\n",ret);
				void * retval=malloc(8);
				*(double *)retval=ret;
				return retval;
			}
			if(!strcmp(expression,"int")){
				statement+=6;
				char number[20];
				int i=0;
				while(*statement!='/'&&*statement!=0){
					number[i]=*statement;
					i++;
					statement++;
				}
				number[i]=0;
				int ret=atoi(number);
				//printf("int ret %d\n",ret);
				void * retval=malloc(4);
				*(int *)retval=ret;
				return retval;
			}
			if(!strcmp(expression,"id")){
				statement+=5;
				int i=0;
				while(statement[i]!=' '&& statement[i]!='/'){
					i++;
				}
				char * ret=(char *)malloc(i+1);
				strncpy(ret,statement,i);
				ret[i]=0;
				//printf("ret %s\n",ret);
				statement+=i;
				return (void *)ret;
			}
			if(!strcmp(expression,"char")){
				//TODO
			}
			if(!strcmp(expression,"word")){
				statement+=8;
				int i=0;
				while(statement[i]!='"'){
					i++;
				}
				char * ret=(char *)malloc(i+1);
				strncpy(ret,statement,i);
				//printf("ret %s\n",ret);
				statement++;
				statement+=i;
				return (void *)ret;
			}
			if(!strcmp(expression,"assg")){
				
			}
			if(!strcmp(expression,"decassg")){
				
			}
			if(!strcmp(expression,"dec")){
				frame * curframe=cstack::thiscstack.getframe(cstack::thiscstack.stacksize);
				int i;
				for(i=0;curframe->sstack[i];i++);
				varble *v = new varble;
				curframe->sstack[i]= (stack *)v;
				v->ident=0;
				int j=0;
				char c[100];
				while(statement[j]!=' '){
					c[j]=statement[j];
					j++;
				}
				c[j]=0;
				v->type=strdup(c);
				statement+=j;
				j=0;
				while(statement[j]!=','&&statement[j]){
					c[j]=statement[j];
					j++;
				}
				c[j]=0;
				v->name=strdup(c);
				curframe->sstack[++i]=0;
			}
			if(!strcmp(expression,"do")){
				
			}
			if(!strcmp(expression,"if")){
				
			}
			if(!strcmp(expression,"while")){
				
			}
		}
	private:
		void * addfun(void * l, void* r){
			//printf("addfun\n");
			int * left= (int*)l;
			int * right=(int *)r;
			int ret=*right+*left;
			void * retval=malloc(4);
			*(int *)retval=ret;
			//printf("add ret %d\n",ret);
			return retval;
		}
		void * mulfun(void * l, void* r){
			int  left= *(int*)l;
			int  right=*(int *)r;
			int ret=(right)*(left);
			void * retval=malloc(4);
			*(int *)retval=ret;
			return retval;
		}
		void * divfun(void * l, void* r){
			int * left= (int*)l;
			int * right=(int *)r;
			int ret=*left / *right;
			void * retval=malloc(4);
			*(int *)retval=ret;
			return retval;
		}
		void * subfun(void * l, void* r){
			int * left= (int*)l;
			int * right=(int *)r;
			int ret=*left-*right;
			void * retval=malloc(4);
			*(int *)retval=ret;
			//printf("sub ret %d\n",ret);
			return retval;
		}
		void * modfun(void * l, void* r){
			int * left= (int*)l;
			int * right=(int *)r;
			int ret=*left%*right;
			void * retval=malloc(4);
			*(int *)retval=ret;
			return retval;
		}
		void * andfun(void * l, void* r){
			int * left= (int*)l;
			int * right=(int *)r;
			void * retval=malloc(4);
			*(int *) retval = ((*left)&&(*right));
			return (retval);
		}
		void * orfun(void * l, void* r){
			int * left= (int*)l;
			int * right=(int *)r;
			void * retval=malloc(4);
			*(int *) retval = ((*left)||(*right));
			return (retval);
		}
		void * lessfun(void * l, void* r){
			int * left= (int*)l;
			int * right=(int *)r;
			void * retval=malloc(4);
			*(int *) retval = ((*left)<(*right));
			return (retval);
		}
		void * gtfun(void * l, void* r){
			int * left= (int*)l;
			int * right=(int *)r;
			void * retval=malloc(4);
			*(int *) retval = ((*left)>(*right));
			return (retval);
		}
		void * gefun(void * l, void* r){
			int * left= (int*)l;
			int * right=(int *)r;
			void * retval=malloc(4);
			*(int *) retval = ((*left)>=(*right));
			return (retval);
		}
		void * lefun(void * l, void* r){
			int * left= (int*)l;
			int * right=(int *)r;
			void * retval=malloc(4);
			*(int *) retval = ((*left)<=(*right));
			return (retval);
		}
		void * eqfun(void * l, void* r){
			int * left= (int*)l;
			int * right=(int *)r;
			void * retval=malloc(4);
			*(int *) retval = ((*left)==(*right));
			return (retval);
		}
		void * neqfun(void * l, void* r){
			int * left= (int*)l;
			int * right=(int *)r;
			void * retval=malloc(4);
			*(int *) retval = ((*left)!=(*right));
			return (retval);
		}
		void * unfun(void * l){
			char * left= (char *)l;
			void * retval=malloc(4);			
			if(!strcmp(left,"*")){
				//*(int *) retval = *(int *)(*left);
				//return (retval);
			}
			if(!strcmp(left,"&")){
				//*(int *) retval = *(int *)(*left);
				//return (retval);
			}
			if(!strcmp(left,"+")){
				*(int *) retval = +*(int *)(left);
				return (retval);
			}
			if(!strcmp(left,"-")){
				*(int *) retval = -*(int *)(left);
				return (retval);
			}
			if(!strcmp(left,"!")){
				*(int *) retval = !*(int *)(left);
				return (retval);
			}
			
			
		}
		void * castfun(void * l){
			//TODO
		}
		void * plusfun(void * l){
			int * left= (int*)l;
			void * retval=malloc(4);
			*(int *) retval = ++(*left);
			return (retval);
		}void * minusfun(void * l){
			int * left= (int*)l;
			void * retval=malloc(4);
			*(int *) retval = --(*left);
			return (retval);
		}
		void * sizefun(void * l){
			int * left= (int*)l;
			void * retval=malloc(4);
			*(int *) retval = sizeof(*left);
			return (retval);
		}
		void * sizetfun(void * l){
			char * left = (char *)l;
			void * retval=malloc(4);
			if(!strcmp(left,"int")){
				*(int *) retval = sizeof(int);				
				return retval;
			}
			if(!strcmp(left,"char")){
				*(int *) retval = sizeof(char);				
				return retval;
			}
			if(!strcmp(left,"void")){
				*(int *) retval = sizeof(void);				
				return retval;
			}
			if(!strcmp(left,"long")){
				*(int *) retval = sizeof(long);				
				return retval;
			}
			if(!strcmp(left,"int*")){
				*(int *) retval = sizeof(int*);			
				return retval;
			}
			if(!strcmp(left,"char*")){
				*(int *) retval = sizeof(char*);				
				return retval;
			}
			if(!strcmp(left,"void*")){
				*(int *) retval = sizeof(void*);				
				return retval;
			}
			if(!strcmp(left,"long*")){
				*(int *) retval = sizeof(long*);			
				return retval;
			}
		}
		void * ppfun(void * l){
			int * left= (int*)l;
			void * retval=malloc(4);
			*(int *) retval = (*left)++;
			return (retval);
		}

		void * mmfun(void * l){
			int * left= (int*)l;
			void * retval=malloc(4);
			*(int *) retval = (*left)--;
			return (retval);
		}void * dotfun(void * l, void* r){

		}

		void * arrowfun(void * l, void* r){

		}
		void * indexfun(void * l, void* r){

		}
		void * indexdfun(void * l, void* r){

		}void * callfun(void * l, void* r){

		}
		void * argfun(void * l, void* r){

		}
		void * structfun(void * l, void* r){

		}
		void * structvfun(void * l, void* r){

		}
		void * dblfun(void * l){

		}
		void * intfun(void * l){

		}
		void * ifun(void * l){

		}
		void * voidfun(void * l){

		}
		void * funword(void * l){

		}

		void * assfun(void * l, void* r){

		}
		void * dassfun(void * l, void* r){

		}
		void * decfun(void * l, void* r){

		}
		void * dofun(void * l, void* r){

		}
		void * iffun(void * l, void* r){

		}
		void * allkindsoffun(void * l, void* r){

		}
};

int main(){
	step("//call //id printf//arg //word \"hi %d%d\\n\\n\"//arg //int 5//arg //int 6,//-- //int 3");
}

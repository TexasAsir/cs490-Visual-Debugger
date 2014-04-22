#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"


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
char * statement;
executeStatement::executeStatement(char * statement){
	this->statement=statement;
}
void executeStatement::setStatement(char * statement){
	this->statement=statement;
}
void * executeStatement::execute(){
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
		//int x[5];
		statement+=10;
		//void * l = execute();
		//return l; ?
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
		statement += 9;
		frame * curframe=cstack::thiscstack.getframe(cstack::thiscstack.stacksize-1);
		sstruct *s = new sstruct;
		int i=0;
		while(statement[i]!='/'&&statement[i]!=0){
			i++;
		}
		char * name=(char *)malloc(i+1);
		strncpy(name,statement,i);
		name[i]=0;
		s->type=name;
		//printf("name %s\n",name);
		statement+=i;
		varble *v = (varble *)execute();
		s->var = (struct varble **) malloc(sizeof(varble *)*5);
		//printf("malloc worked? %x\n",s->var);
		int size=5;
		s->var[0]=v;
		//printf("statemment %s\n",statement);
		int cursize=0;
		while(*statement==','){
			printf("problem?\n");
			statement++;
			v = (varble *)execute();
			cursize++;
			if(cursize>=size){
				size*=2;
				s->var=(varble **)realloc(s->var,sizeof(varble *)*size);
			}
			s->var[cursize]=v;
			
		}
		printf("...\n");
		//statement+=6;
		s->size=cursize;
		s->ident=1;
		stack *st = (stack *)s;
		cstack::thiscstack.pushsstack(st,curframe);
		printf("!!\n");
		return (void *)s;
	}
	if(!strcmp(expression,"structvar")){
		statement += 12;
		frame * curframe=cstack::thiscstack.getframe(cstack::thiscstack.stacksize-1);
		int i=0;
		while(statement[i]!=' '&&statement[i]!=0){
			i++;
		}
		char * name=(char *)malloc(i+1);
		strncpy(name,statement,i);
		name[i]=0;
		printf("before find %s\n",name);
		int ret=cstack::thiscstack.findstruct(curframe,name);
		sstruct *s = (sstruct *)curframe->sstack[ret];
		printf("before memcpy\n");
		sstruct *thiss=(sstruct *)malloc(sizeof(sstruct));
		memcpy(thiss,s,sizeof(sstruct));
		thiss->var=(varble **)malloc(sizeof(varble*)*s->size);
		for(int x=0;x<s->size;x++){
			thiss->var[x]=new varble;
			memcpy(thiss->var[x],s->var[x],sizeof(varble));
		}
		printf("aftuh memcpy\n");
		statement+=i+1;
		i=0;
		while(statement[i]!='/'&&statement[i]!=0){
			i++;
		}
		name=(char *)malloc(i+1);
		strncpy(name,statement,i);
		name[i]=0;
		thiss->name=name;
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
		printf("dbl ret %lf\n",ret);
		void * retval=malloc(8);
		*(double *)retval=ret;
		printf("retval = %lf\n",*(double *)retval);
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
		statement+=8;
		int i=0;
		while(statement[i]!='\''){
			i++;
		}
		char * ret=(char *)malloc(1);
		if(i>1){
			statement++;
			switch(*statement){
				case 'n':
					*ret='\n';
					break;
				case '\'':
					*ret='\'';
					break;
				case 't':
					*ret='\t';
					break;//maby put more cases here
			}
		}
		else{
			*ret=*statement;
		}
		return (void *)ret;
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
		statement+=7;
		frame * curframe=cstack::thiscstack.getframe(cstack::thiscstack.stacksize-1);
		char *name = (char *)execute();
		printf("name %s\n",name);
		int ret=cstack::thiscstack.find(curframe,name);
		stack *s = curframe->sstack[ret];
		printf("stack %x\n",s);
		statement++;
		char c = *statement;
		statement+=2;
		if(c=='='){
			void * value=execute();
			s->var.value=value;
		}
		
	}
	if(!strcmp(expression,"decassg")){
		statement+=10;
		frame * curframe=cstack::thiscstack.getframe(cstack::thiscstack.stacksize-1);
		int i;
		varble *v = new varble;
		stack *s= (stack *)v;
		v->ident=0;
		int j=0;
		char c[100];
		printf("statement %s\n",statement);
		while(statement[j]!='/'){
			c[j]=statement[j];
			j++;
		}
		c[j]=0;
		v->type=strdup(c);
		printf("type %s\n",c);
		statement+=j;
		printf("statement %s\n",statement);
		char * name=(char *)execute();
		v->name=name;
		printf("name %s\n",name);
		statement+=3;//the op has to be an equals or else bleh well just treat it like an equals because fu
		printf("statement %s\n",statement);
		void * value = execute();
		v->value=value;
		printf("value %d\n",*((int *)value));
		printf("s %x curframe %x\n",s,curframe);
		cstack::thiscstack.pushsstack(s,curframe);
	}
	if(!strcmp(expression,"dec")){
		statement+=6;
		frame * curframe=cstack::thiscstack.getframe(cstack::thiscstack.stacksize-1);
		int i;
		varble *v = new varble;
		stack *s= (stack *)v;
		v->ident=0;
		int j=0;
		char c[100];
		printf("statement %s\n",statement);
		while(statement[j]!=' '){
			c[j]=statement[j];
			j++;
		}
		c[j]=0;
		v->type=strdup(c);
		printf("type %s\n",c);
		statement+=(j+1);
		j=0;
		while(statement[j]!=','&&statement[j]){//might need to change comma to space 
			c[j]=statement[j];
			j++;
		}
		c[j]=0;
		statement+=j;
		v->name=strdup(c);
		printf("name %s\n",c);
		printf("s %x curframe %x\n",s,curframe);
		cstack::thiscstack.pushsstack(s,curframe);
		printf("stackpushed\n");
		return (void *)v;
	}
	if(!strcmp(expression,"do")){
		
	}
	if(!strcmp(expression,"if")){
		
	}
	if(!strcmp(expression,"while")){
		
	}
}
void * executeStatement::addfun(void * l, void* r){
	//printf("addfun\n");
	int * left= (int*)l;
	int * right=(int *)r;
	int ret=*right+*left;
	void * retval=malloc(4);
	*(int *)retval=ret;
	//printf("add ret %d\n",ret);
	return retval;
}
void * executeStatement::mulfun(void * l, void* r){
	int  left= *(int*)l;
	int  right=*(int *)r;
	int ret=(right)*(left);
	void * retval=malloc(4);
	*(int *)retval=ret;
	return retval;
}
void * executeStatement::divfun(void * l, void* r){
	int * left= (int*)l;
	int * right=(int *)r;
	int ret=*left / *right;
	void * retval=malloc(4);
	*(int *)retval=ret;
	return retval;
}
void * executeStatement::subfun(void * l, void* r){
	int * left= (int*)l;
	int * right=(int *)r;
	int ret=*left-*right;
	void * retval=malloc(4);
	*(int *)retval=ret;
	//printf("sub ret %d\n",ret);
	return retval;
}
void * executeStatement::modfun(void * l, void* r){
	int * left= (int*)l;
	int * right=(int *)r;
	int ret=*left%*right;
	void * retval=malloc(4);
	*(int *)retval=ret;
	return retval;
}
void * executeStatement::andfun(void * l, void* r){
	int * left= (int*)l;
	int * right=(int *)r;
	void * retval=malloc(4);
	*(int *) retval = ((*left)&&(*right));
	return (retval);
}
void * executeStatement::orfun(void * l, void* r){
	int * left= (int*)l;
	int * right=(int *)r;
	void * retval=malloc(4);
	*(int *) retval = ((*left)||(*right));
	return (retval);
}
void * executeStatement::lessfun(void * l, void* r){
	int * left= (int*)l;
	int * right=(int *)r;
	void * retval=malloc(4);
	*(int *) retval = ((*left)<(*right));
	return (retval);
}
void * executeStatement::gtfun(void * l, void* r){
	int * left= (int*)l;
	int * right=(int *)r;
	void * retval=malloc(4);
	*(int *) retval = ((*left)>(*right));
	return (retval);
}
void * executeStatement::gefun(void * l, void* r){
	int * left= (int*)l;
	int * right=(int *)r;
	void * retval=malloc(4);
	*(int *) retval = ((*left)>=(*right));
	return (retval);
}
void * executeStatement::lefun(void * l, void* r){
	int * left= (int*)l;
	int * right=(int *)r;
	void * retval=malloc(4);
	*(int *) retval = ((*left)<=(*right));
	return (retval);
}
void * executeStatement::eqfun(void * l, void* r){
	int * left= (int*)l;
	int * right=(int *)r;
	void * retval=malloc(4);
	*(int *) retval = ((*left)==(*right));
	return (retval);
}
void * executeStatement::neqfun(void * l, void* r){
	int * left= (int*)l;
	int * right=(int *)r;
	void * retval=malloc(4);
	*(int *) retval = ((*left)!=(*right));
	return (retval);
}
void * executeStatement::unfun(void * l){
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
void * executeStatement::castfun(void * l){
	//TODO
	//parse for cast?
	
	
}
void * executeStatement::plusfun(void * l){
	int * left= (int*)l;
	void * retval=malloc(4);
	*(int *) retval = ++(*left);
	return (retval);
}void * executeStatement::minusfun(void * l){
	int * left= (int*)l;
	void * retval=malloc(4);
	*(int *) retval = --(*left);
	return (retval);
}
void * executeStatement::sizefun(void * l){
	int * left= (int*)l;
	void * retval=malloc(4);
	*(int *) retval = sizeof(*left);
	return (retval);
}
void * executeStatement::sizetfun(void * l){
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
void * executeStatement::ppfun(void * l){
	int * left= (int*)l;
	void * retval=malloc(4);
	*(int *) retval = (*left)++;
	return (retval);
}

void * executeStatement::mmfun(void * l){
	int * left= (int*)l;
	void * retval=malloc(4);
	*(int *) retval = (*left)--;
	return (retval);
}
void * executeStatement::dotfun(void * l, void* r){
	
}

void * executeStatement::arrowfun(void * l, void* r){
	
}
void * executeStatement::indexfun(void * l, void* r){
	
}
void * executeStatement::indexdfun(void * l, void* r){
	
}
void * executeStatement::callfun(void * l, void* r){
	
}
void * executeStatement::argfun(void * l, void* r){
	
}
void * executeStatement::structfun(void * l, void* r){
	
}
void * executeStatement::structvfun(void * l, void* r){
	
}
void * executeStatement::dblfun(void * l){
	
}
void * executeStatement::intfun(void * l){
	
}
void * executeStatement::ifun(void * l){
	
}
void * executeStatement::voidfun(void * l){
	
}
void * executeStatement::funword(void * l){
	
}

void * executeStatement::assfun(void * l, void* r){
	
}
void * executeStatement::dassfun(void * l, void* r){
	
}
void * executeStatement::decfun(void * l, void* r){
	
}
void * executeStatement::dofun(void * l, void* r){
	
}
void * executeStatement::iffun(void * l, void* r){
	
}
void * executeStatement::allkindsoffun(void * l, void* r){
	
}

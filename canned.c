#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char * argv[]){
	if(argc!=2){
		printf("Proper usage: canned SLL|DLL|BTREE\n");
		exit(0);
	}

	if(strcmp(argv[1],"SLL")==0){
		char * nameQ = "What do you want to name a node?\n";
		char * pointerQ = "What do you want to name your next pointer?\n";
		char * contentsQ= "Name the variable that you would like the node to store\n";
		char name[20];
		char pointer[20];
		char varname[30];

        char type[10];
		printf("%s",nameQ);
		scanf("%s",name);
		printf("%s",pointerQ);
		scanf("%s",pointer);
		printf("%s",contentsQ);
		scanf("%s %s",type,varname);
		char definiton[1000];
		
		sprintf(definiton,"//structure definition\nstruct %s{\n%s %s\nstruct %s * %s;\n};",name,type,varname,name,pointer);
		printf("%s\n",definiton);
		printf("Helpful Hints:\n");
		printf("To allocate a new node:\n");
		printf("struct %s * name = malloc(sizeof(struct %s))\n",name,name);
		printf("If you had a node named head and you wanted to move to the next node:\n");
		printf("head = head->%s\n",pointer);
		printf("To modify a variable:\n");
		printf("%s->varname=...\n",name);
	
	}
	else if(strcmp(argv[1],"DLL")==0){
        char * nameQ = "What do you want to name a node?\n";
		char * forQ = "What do you want to name a forward pointer?\n";
		char * backQ = "What do you want to name a backward pointer?\n"; 
        char * contentQ="What is the name of the variable that you would like to hold?\n";
        char name[20];
        char forward[20];
        char backward[20]; 
        char content[30];  
        char type[10];
        char definiton[100]; 
        printf("%s",nameQ);
        scanf("%s",name);
        printf("%s",forQ);
        scanf("%s",forward);
        printf("%s",backQ);
        scanf("%s",backward);
        printf("%s",contentQ);
        scanf("%s %s",type,content); 
        //scanf("%s",content);
        sprintf(definiton,"//structure definition\nstruct %s{\n%s %s\nstruct %s * %s \nstruct %s * %s;\n};",name,content,type,name,forward,name,backward);
        printf("%s\n",definiton);
        printf("Helpful Hints:\n");
        printf("Remember that the last node in the list should have it's next pointer pointing to the head of the list\n");
        printf("and the first node should have it's previous pointer pointing to the tail\n");
		printf("To allocate a new node:\n");
        printf("struct %s * name = malloc(sizeof(struct %s))\n",name,name);
        printf("Given a node named Node\n");
        printf("To cycle back\n");
        printf("Node = Node->%s\n",backward);
        printf("To cycle forward\n");
        printf("Node = Node->%s\n",forward);
        printf("To modify the stored data\n");
        printf("Node -> %s =...\n",content);
	}
	else if(strcmp(argv[1],"BTREE")==0){
		char * nameQ = "What do you want to name a node?\n";
		char * leftQ = "What do you want to name a left child pointer?\n";
		char * rightQ = "What do you want to name a right child pointer?\n"; 
        char * contentQ="What is the name of the variable that you would like to hold?\n";
        char name[20];
        char left[20];
        char right[20]; 
        char content[30];  
        char definition[100];     
        char type[10];
        printf("%s",nameQ);
        scanf("%s",name);
        printf("%s",leftQ);
        scanf("%s",left);
        printf("%s",rightQ);
        scanf("%s",right);
        printf("%s",contentQ);
        scanf("%s %s",type,content); 
        sprintf(definition,"//structure definition\nstruct %s{\n%s %s\nstruct %s * %s\nstruct %s * %s;\n};",name,type,content,name,left,name,right);
		printf("%s\n",definition);
		printf("Helpful Hints:\n");
		printf("To allocate a new node:\n");
        printf("struct %s * name = malloc(sizeof(struct %s))\n",name,name);
        printf("To add a left node called name to a node called root:\n");
        printf("root -> %s = name",left);
        printf("To add a right node called name to a node called root:\n");
        printf("root -> %s = name",right);
        printf("To descend to the left:\n");
        printf("root = root->%s\n",left);
        printf("To descend to the right:\n");
        printf("root = root->%s\n",right);
        printf("To modify a variable:\n");
		printf("root->%s=...\n",content);
	}

}

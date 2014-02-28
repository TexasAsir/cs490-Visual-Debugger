#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int bStack[1000];
int numNodes=0;
int height;

struct sslNode{
	int val;
	struct sslNode * next;
};

struct dllNode{
    int val;
    struct dllNode * prev;
    struct dllNode * next;

};

struct bNode{
	int val;
	struct bNode * left;
	struct bNode * right; 
};


void addSSL(struct sslNode* head,int val){
	struct sslNode * node = malloc(sizeof(struct sslNode));	
	node->val=val;
	node->next=NULL;
	if(head->next==NULL){
		head->next=node;
		return;
	}
	
	else{
		while(head->next!=NULL){
			head=head->next;
		}
		
		head->next=node;
	}
}

/*
void addDLL(struct dllNode* head, int val){
    struct sslNode * node = malloc(sizeof(struct sslNode));	
	node->val=val;
	node->next=NULL;
    node->prev=NULL;
    if(head->next==NULL){
        head->next=node;
        node->next=head;
        node->prev=head;
        return;
    }
    while(head->next!=NULL){
        head=head->next
    }

}
*/

void arrayPrinter(int * ptr, int * array){

	//printf("The size of my array is %d\n",size);
	printf("The address of my pointer is %p\n",ptr);
	//printf("The address of the second element is %p\n",&array[2]);
	int i=0;	
	while(array[i]!=NULL){
		//printf("%d ",array[i]);
		i++;
	}
	//printf("\n");
	int size=i;
	int j;
	int found=-1;
	for(j=0;j<size;j++){
		if(&array[j]==ptr){
			found=j;
		}
	}
	//printf("The found value is %d\n",found);
	if(found==-1){
		printf("Your pointer is not pointing to this array at all\n");
	}
	else{
		/*for(j=0;j<found+1;j++){
			printf(" ");
		}
		//printf("\n");
		printf("ptr");
		printf("\n");
		*/
		for(j=0;j<size;j++){
			printf("%d",array[j]);
			if(j==found){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
	}

}

void printSSL(struct sslNode* head){
	
	while(head->next!=NULL){
		head=head->next;
		printf("[%d]",head->val);
		if(head->next!=NULL){
			printf("->");
		}
		else{
			printf("->[NULL]\n");
		}
	}

}




void addB(struct bNode * root, int val){
	if(val<root->val){
		if(root->left==NULL){
			struct bNode * node = malloc(sizeof(struct bNode));
			node->val=val;
			node->left=NULL;
			node->right=NULL;
			root->left=node;
		}
		else{
			addB(root->left,val);
		}
	}

	if(val>root->val){
		if(root->right==NULL){
			struct bNode * node = malloc(sizeof(struct bNode));
			node->val=val;
			node->left=NULL;
			node->right=NULL;
			root->right=node;
		}
		else{
			addB(root->right,val);
		}
	}


}

void setStack(struct bNode * root,int index){
	//printf("%d\n",root->val);
	bStack[index]=root->val;	
	numNodes++;
	if(root->left!=NULL){
			setStack(root->left,((2*index)+1));
	}	
	if(root->right!=NULL){
			setStack(root->right,((2*index)+2));
	}
}


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
    printf("%d",bStack[0]);
	for(i=0;i<height+1;i++){
            printf("\n");
            for(width=0;width<pow(2,i);width++){
                for(k=0;k<((height+1)-i);k++){
                    printf("\t");
                }
                printf("%d  %d",bStack[((2*j)+1)],bStack[((2*j)+2)]);
                //printf("%d  %d",((2*j)+1),((2*j)+2));
                j++;
            }
    }




/*
	if(offset<0){
		offset=1;
	}
	int i;
	for(i=0;i<offset;i++){
		printf("    ");
	}

	printf("%d",bStack[index]);
	printf("\n");
	for(i=0;i<offset;i++){
		printf("   ");
	}
	printf("/  \\");
	if(bStack[(2*index)+1]!=0){

		printStack((2*index)+1,offset-1);
	}
	
	if(bStack[(2*index)+2]!=0){
		//printf("\n");
		//printf("//");
		printStack((2*index)+2,offset-1);
	}

*/
	
	
	
	


}




int main(){
	//SINGLEY LINKED LIST
	struct sslNode * head = malloc(sizeof(struct sslNode));
	head -> next=NULL;
	head -> val = 0;	
	addSSL(head,5);
	printf("Success\n");
	addSSL(head,3);
	printf("Success\n");
	addSSL(head,9);
	printf("Success\n");
	printSSL(head);

	//BINARY TREE
	
	int i;
	for(i=0;i<1000;i++){
		bStack[i]=0;
	}



	struct bNode * root = malloc(sizeof(struct bNode));
	root->left=NULL;
	root->right=NULL;
	/*root->val=5;
	addB(root,3);
	addB(root,6);
	addB(root,9);
	addB(root,4);
    */
    /*
    root->val=1;
    addB(root,2);
	addB(root,3);
	addB(root,4);
	*/
    root->val=4;
    addB(root,3);
    addB(root,5);
	addB(root,1);
	addB(root,7);
    //addB(root,4);

    setStack(root,0);

	printf("The number of nodes is %d\n",numNodes);
	height=floor(log(numNodes)/log(2));
	printf("The height of this tree is %d\n",height);
	int offset=pow(2,height);
	printf("The offset is %d\n",offset);
	
	printStack(0,offset);
	printf("\n");

	int array[5] = {1,2,3,5,4};
	int * pointer;
	pointer= &array[2];
	arrayPrinter(pointer,array);
	pointer= &array[0];
	arrayPrinter(pointer,array);
	pointer= &array[4];
	arrayPrinter(pointer,array);
	pointer= &array[5];
	arrayPrinter(pointer,array);



}

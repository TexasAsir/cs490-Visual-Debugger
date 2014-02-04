#include <stdlib.h>

struct node {
	//#!LL
	int val;
	struct node * next;
};
struct node *root = NULL;

int main(){
	head = (struct node*)malloc(sizeof(struct node));
	head->val = 5;
	printf("%d\n",head->val);
	return 0;
}

#include <stdio.h>
#include <malloc.h>

struct node{
	int data;
	struct node *next;
};

struct node *top = NULL;

struct node *create(){
	return (struct node *) malloc(sizeof(struct node));
}

void push(int val){
	struct node *new_node = create();

	if (new_node == NULL)
	{
		printf("stack overflow\n");
		return;
	}

	new_node->data = val;
	new_node->next = NULL;

	if (top == NULL)
	{
		top = new_node;
	} else{
		new_node->next = top;
		top = new_node;
	}

}


int main(int argc, char const *argv[])
{
	push(1);
	push(2);
	push(3);


	//display stack
	struct node *ptr = top;
	while(ptr != NULL){
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
	
	return 0;
}
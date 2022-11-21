#include <stdio.h>
#include <malloc.h>

struct node{
	int data;
	struct node *next;
};

struct node *list = NULL;

struct node *create(){
	return (struct node *) malloc(sizeof(struct node));
}

void insert(int val){
	struct node *new_node = create();

	if (new_node == NULL)
	{
		printf("not enough memory\n");
		return;
	}

	new_node->data = val;
	new_node->next = NULL;

	if (list == NULL)
	{
		list = new_node;
	} else{
		struct node *ptr = list;
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}

}

int linearsearch(int val){
	struct node *ptr = list;
	int i=1;
	while(ptr != NULL){
		if (ptr->data == val)
		{
			printf("%d found at %d position\n", val, i);
			return i;			
		}
		ptr = ptr->next;
		i++;
	}
	printf("%d is not found\n", val);
	return -1;
}

int main(int argc, char const *argv[])
{
	insert(1);
	insert(2);
	insert(3);

	//display stack
	struct node *ptr = list;
	while(ptr != NULL){
		printf("%d\t", ptr->data);
		ptr = ptr->next;
	}
		
	printf("\n");

	linearsearch(1);
	linearsearch(2);
	linearsearch(3);
	linearsearch(4);

	return 0;
}
#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node* next;
} *head=NULL;

struct node *create(){
	return (struct node *) malloc(sizeof(struct node));
}

void insertaftersome(int pos, int val){
	struct node* new_node = create();
	if (new_node==NULL)
	{
		printf("memory not available\n");
		return;
	}

	new_node->data = val;
	new_node->next = NULL;

	if (head==NULL)
	{
		head=new_node;
	} else{
		struct node *ptr = head, *preptr=head;
		int i = 1;

		while(ptr != NULL){
			if (i==pos+1)
			{
				preptr->next = new_node;
				new_node->next = ptr;
				return;
			}
			preptr = ptr;
			ptr = ptr->next;
			i++;
		}
		printf("position out of bound\n");
	}
}

void insertatend(int val){
	struct node* new_node = create();
	if (new_node==NULL)
	{
		printf("memory not available\n");
		return;
	}

	new_node->data = val;
	new_node->next = NULL;

	if (head==NULL)
	{
		head=new_node;
	} else{
		struct node *ptr = head;
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}
}

int main(int argc, char const *argv[])
{
	insertatend(1);
	insertatend(2);
	insertatend(3);

	// insertaftersome(1, 4);
	// insertaftersome(1, 7);
	// insertaftersome(1, 6);
	insertaftersome(3, 5);
	// insertaftersome(1, 3);


	//display stack
	struct node *ptr = head;
	while(ptr != NULL){
		printf("%d\t", ptr->data);
		ptr = ptr->next;
	}
	
	return 0;
}
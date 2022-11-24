#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node* next;
} *head=NULL;

struct node *create(){
	return (struct node *) malloc(sizeof(struct node));
}

int deletefrombeg(){
	if (head==NULL)
	{
		printf("nothing to delete\n");
		return 0;
	} else{
		struct node *temp = head;
		head=head->next;
		printf("%d has been deleted\n", temp->data);
		return temp->data;
		free(temp);
		
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

	
	deletefrombeg();
	deletefrombeg();
	deletefrombeg();


	//display stack
	struct node *ptr = head;
	while(ptr != NULL){
		printf("%d\t", ptr->data);
		ptr = ptr->next;
	}
	
	return 0;
}
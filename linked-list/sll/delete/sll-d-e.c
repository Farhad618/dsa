#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node* next;
} *head=NULL;

struct node *create(){
	return (struct node *) malloc(sizeof(struct node));
}

void deletefromend(){
	if (head==NULL)
	{
		printf("nothing to delete\n");
		return;
	} else{
		if (head->next)
		{
			struct node *ptr = head, *preptr=head;
			while(ptr->next != NULL){
				preptr=ptr;
				ptr = ptr->next;
			}

			preptr->next=NULL;
			printf("%d has been deleted\n", ptr->data);
			free(ptr);			
		} else {
			printf("%d has been deleted\n", head->data);
			free(head);
			head=NULL;
		}

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

	
	deletefromend();
	deletefromend();
	deletefromend();
	deletefromend();

	//display stack
	struct node *ptr = head;
	while(ptr != NULL){
		printf("%d\t", ptr->data);
		ptr = ptr->next;
	}

	
	return 0;
}
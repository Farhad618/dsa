#include <stdio.h>
#include <malloc.h>

struct node{
	int data;
	struct node* next;
};

struct queue{
	struct node* front;
	struct node* rear;
};

struct queue* q =NULL;

struct node* create(){
	return (struct node*)malloc(sizeof(struct node));
}


void enqueue(int val){
	struct node* new_node = create();
	if (new_node==NULL)
	{
		printf("queue overflow\n");
		return;
	}

	new_node->data = val;
	new_node->next = NULL;

	if (q==NULL)
	{
		q=(struct queue*)malloc(sizeof(struct queue));
		q->front = new_node;
		q->rear = new_node;
	} else {
		q->rear->next = new_node;
		q->rear = new_node;
	}
}

int dequeue(){
	if (q->front==NULL)
	{
		printf("queue underflow\n");
		return 0;
	}

	struct node* temp = q->front;
	int val = temp->data;
	q->front = q->front->next;
	printf("%d has been dequeued\n", val);
	free(temp);
	return val;
}


int main(int argc, char const *argv[])
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);

	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();

	//display stack
	struct node *ptr = q->front;
	while(ptr != NULL){
		printf("%d\t", ptr->data);
		ptr = ptr->next;
	}

	return 0;
}
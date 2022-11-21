#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;


void enqueue(int val){
	if (rear == SIZE-1)
	{
		printf("queue overflow\n");
		return;
	}

	if (front == -1)
	{
		front =0;
		rear =0;
	} else {
		rear++;
	}
	queue[rear] = val;
}

int main(int argc, char const *argv[])
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(6);


	//display array
	for (int i = front; i <= rear; ++i)
	{
		printf("%d\t", queue[i]);
	}	
	return 0;
}
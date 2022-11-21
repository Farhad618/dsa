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

int dequeue(){
	if (front > rear)
	{
		printf("queue underflow\n");
		return 0;
	}

	int temp = queue[front];
	queue[front] = 0;
	front++;

	printf("%d dequeued\n", temp);
	return temp;
}

int main(int argc, char const *argv[])
{
	enqueue(1);
	enqueue(2);
	enqueue(3);

	dequeue();
	dequeue();
	dequeue();
	dequeue();

	enqueue(4);
	dequeue();

	//display array
	for (int i = front; i <= rear; ++i)
	{
		printf("%d\t", queue[i]);
	}	
	return 0;
}
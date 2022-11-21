#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;


void push(int val){
	if (top == SIZE-1)
	{
		printf("stack overflow\n");
		return;
	}

	top++;
	stack[top] = val;
}

int pop(){
	if (top == -1)
	{
		printf("stack underflow\n");
		return 0;
	}

	int val = stack[top];
	stack[top] = 0;
	top--;

	return val;
}



int main(int argc, char const *argv[])
{
	
	push(8);
	push(9);
	push(10);
	push(7);
	push(6);

	pop();
	pop();
	pop();
	pop();
	pop();
	pop();


	//display array
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d\t", stack[i]);
	}
	return 0;
}
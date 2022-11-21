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

int main(int argc, char const *argv[])
{
	
	push(8);
	push(9);
	push(10);
	push(7);
	push(6);
	push(8);
	//display array
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d\t", stack[i]);
	}
	return 0;
}
#include <stdio.h>
#define SIZE 5	

int arr[SIZE] = {1, 5, 3, 8, 6};

int linearsearch(int val){
	for (int i = 0; i < SIZE; ++i)
	{
		if (arr[i] == val)
		{
			printf("%d found at %d position\n", val, i);
			return i;
		}
	}

	printf("%d is not found\n", val);
	return -1;
}

int main(int argc, char const *argv[])
{


	// int searchkey;
	// printf("Enter the number you want to search: ");
	// scanf("%d", &searchkey);


	linearsearch(1);
	linearsearch(5);
	linearsearch(3);
	linearsearch(8);
	linearsearch(6);
	linearsearch(7);


	return 0;
}
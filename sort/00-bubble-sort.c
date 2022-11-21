#include <stdio.h>
#define SIZE 5

void bubble_sort(int arr[]){
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = i+1; j < SIZE; ++j)
		{
			if (arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}



int main(int argc, char const *argv[])
{
	int arr[SIZE] = {5,1,2,2,5};

	bubble_sort(arr);

	//display array
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d\t", arr[i]);
	}
	
	return 0;
}
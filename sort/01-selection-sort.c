#include <stdio.h>
#define SIZE 5

void selection_sort(int arr[]){
	for (int i = 0; i < SIZE; ++i){
		int min = i;
		for (int j = i+1; j < SIZE; ++j){
			if (arr[j]<arr[min]){
				min =j;
			}
		}
		if (min != i){
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}



int main(int argc, char const *argv[])
{
	int arr[SIZE] = {5,1,2,2,5};

	selection_sort(arr);

	//display array
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d\t", arr[i]);
	}
	
	return 0;
}
#include <stdio.h>
#define SIZE 5

void insertion_sort(int arr[]){
	for (int i = 1; i < SIZE; ++i){
		int temp = arr[i];
		int j = i-1;
		while(j>=0 && temp < arr[j]){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}



int main(int argc, char const *argv[])
{
	int arr[SIZE] = {5,1,2,2,5};

	insertion_sort(arr);

	//display array
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d\t", arr[i]);
	}
	
	return 0;
}
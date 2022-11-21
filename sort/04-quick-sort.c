#include <stdio.h>
#define SIZE 5

int pertition(int[], int, int);
void quickSort(int[], int, int);

int main(int argc, char const *argv[])
{
	int arr[SIZE] = {8, 0, 7, 1, 3};
	printf("Unsorted array:\n");
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	quickSort(arr, 0, SIZE-1);
	printf("Sorted array:\n");
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d\t", arr[i]);
	}	
	return 0;
}

int pertition(int arr[], int beg, int end){
	int pivot = arr[beg];
	int i = beg+1;
	int j = end;
	int temp;

	while(i<j){
		while(arr[i]<=pivot){i++;}
		while(arr[j]>=pivot){j--;}

		if (i<j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}		
	}

	temp = arr[beg];
	arr[beg] = arr[j];
	arr[j] = temp;
	
	return j;
}

void quickSort(int arr[], int beg, int end){
	if (beg<end)
	{
		int mid = pertition(arr, beg, end);
		quickSort(arr, beg, mid-1);
		quickSort(arr, mid+1, end);
	}
}
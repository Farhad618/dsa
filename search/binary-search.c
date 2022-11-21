#include <stdio.h>
#define SIZE 5

void binary_search(int arr[], int val){
	int beg =0;
	int end =SIZE-1;

	while(beg<=end){
		int mid = (beg+end)/2;

		if (arr[mid] == val)
		{
			printf("%d found at %d position\n", val, mid);
			return;
		} else if (arr[mid]<val)
		{
			beg=mid+1;
		} else if (arr[mid]>val)
		{
			end=mid-1;
		}
	}

	printf("%d is not found\n", val);
}



int main(int argc, char const *argv[])
{
	int arr[SIZE] = {1,2,5,8,9};

	//display array
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d\t", arr[i]);
	}

	printf("\n");
	
	binary_search(arr, 1);
	binary_search(arr, 2);
	binary_search(arr, 5);
	binary_search(arr, 8);
	binary_search(arr, 9);
	binary_search(arr, 10);

	return 0;
}
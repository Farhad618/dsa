#include <stdio.h>
#define SIZE 5


void merge(int arr[], int beg, int mid, int end){
	int temp[SIZE];
	int i = beg;
	int j = mid+1;
	int k = beg;

	while(i<=mid && j<=end){
		if (arr[i]<arr[j])
		{
			temp[k] = arr[i];
			i++;
		} else{
			temp[k] = arr[j];
			j++;
		}
		k++;
	}
	while(i<=mid){
		temp[k] = arr[i];
		i++;
		k++;
	}
	while(j<=end){
		temp[k] = arr[j];
		j++;
		k++;
	}

	for (int l = beg; l <= end; ++l)
	{
		arr[l] = temp[l];
	}

}


void divide(int arr[], int beg, int end){
	if (beg<end)
	{
		int mid = (beg+end)/2;
		divide(arr, beg, mid);
		divide(arr, mid+1, end);

		merge(arr, beg, mid, end);
	}
}

void merge_sort(int arr[]){
	divide(arr, 0, SIZE-1);
}


int main(int argc, char const *argv[])
{
	int arr[SIZE] = {5,1,2,2,5};

	merge_sort(arr);

	//display array
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d\t", arr[i]);
	}
	
	return 0;
}
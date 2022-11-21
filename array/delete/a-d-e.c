#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[10] = {5, 6, 7};
	int n = 2; //last index 

	arr[n] = 0;
	n = n-1;

	
	//display array
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\t", arr[i]);
	}


	return 0;
}
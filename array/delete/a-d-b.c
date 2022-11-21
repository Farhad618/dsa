#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[10] = {5, 6, 7};
	int n = 3; //no of elements

	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i+1];
	}

	n--;

	for (int i = 0; i < 10; ++i)
	{
		printf("%d\t", arr[i]);
	}


	return 0;
}
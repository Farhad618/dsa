#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[10] = {5, 6, 7};
	int n = 3;

	for (int i = n-1; i >= 0; i--)
	{
		arr[i+1] = arr[i];
	}

	arr[0] = 4;

	for (int i = 0; i < 10; ++i)
	{
		printf("%d\t", arr[i]);
	}


	return 0;
}
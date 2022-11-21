#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[10] = {5, 6, 7};
	int n = 2; //last index 

	int deletefrom = 2;

	for (int i = deletefrom; i < n; i++)
	{
		arr[i] = arr[i+1];
	}

	arr[n] = 0;
	n--;
	
	//display array
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\t", arr[i]);
	}


	return 0;
}
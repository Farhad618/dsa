#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[10] = {5, 6, 7};
	int n = 2; //last index 

	int insertbefore=2;
	int i;

	for (i = n; i >= insertbefore; i--)
	{
		arr[i+1] = arr[i];
	}
	

	
	//display array
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\t", arr[i]);
	}


	return 0;
}

\\not completed
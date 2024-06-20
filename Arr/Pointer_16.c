#include<stdio.h>

int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,0 };
	int* arr[2] = { arr1,arr2 };

	int** P1 = arr;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", *(*P1 + j));
		}
		printf("\n");
		P1++;
	}

	return 0;
}
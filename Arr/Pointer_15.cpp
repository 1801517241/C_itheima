#include<stdio.h>

int main()
{
	int arr[2][5] = {
		{1,2,3,4,5},
		{11,22,33,44,55}
	};

	int(*P1)[5] = arr;

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
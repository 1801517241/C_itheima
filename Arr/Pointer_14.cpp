#include<stdio.h>

int main()
{
	int arr[2][5] =
	{
		{1,2,3,4,5},
		{11,22,33,44,55}
	};

	int* p = *arr;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j <= 5; j++)
		{
			printf("%d ", *(p + i));
		}
	}

	return 0;
}
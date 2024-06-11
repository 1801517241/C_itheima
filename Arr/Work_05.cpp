#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Traverse(int arr[5], int len);

int main()
{
	srand(time(NULL));

	int arr[5], len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	Traverse(arr, len);

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			int Index = rand() % len;
			int Temp = arr[Index];
			arr[Index] = arr[i];
			arr[i] = Temp;
		}
	}

	Traverse(arr, len);

	return 0;
}

void Traverse(int arr[5], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
}
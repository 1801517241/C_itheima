//—°‘Ò≈≈–Ú
#include<stdio.h>

int main()
{
	int arr[] = { 3,5,2,1,4 };
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("≈≈–Ú«∞£∫");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

	printf("≈≈–Ú∫Û£∫");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}
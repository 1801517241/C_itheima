#include<stdio.h>

void getMaxAndMin(int arr[], int len, int* max, int* min);

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(int);
	int max = arr[0], min = arr[0];

	getMaxAndMin(arr, len, &max, &min);

	printf("最大值：%d | 最小值：%d\n", max, min);

	return 0;
}

void getMaxAndMin(int arr[], int len, int* max, int* min)
{
	*max = arr[0], *min = arr[0];

	for (int i = 1; i < len; i++)
	{
		if (*max < arr[i])
			*max = arr[i];
		if (*min > arr[i])
			*min = arr[i];
	}
}
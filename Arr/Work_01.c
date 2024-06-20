//练习：求最值
#include<stdio.h>

int main()
{
	int arr[] = { 33,5,22,44,55 };
	int Max = arr[0], Min = arr[0];
	
	for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (arr[i] > Max)
			Max = arr[i];
		else if (arr[i] < Min);
			Min = arr[i];
	}

	printf("最大值：%d\n", Max);
	printf("最小值：%d\n", Min);

	return 0;
}
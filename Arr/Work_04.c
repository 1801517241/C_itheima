//键盘录入5个数据并存入数组
#include<stdio.h>

void Traverse(int arr[5], int len);		//遍历数组

int main()
{
	int arr[5], len = sizeof(arr) / sizeof(arr[0]);

	//录入5个数
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	Traverse(arr,len);

	//逆序数组
	int Farr[5];
	for (int i = 0; i < 5; i++)
	{
		Farr[i] = arr[len - 1 - i];
	}

	Traverse(Farr,len);

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
//二分查找/折半查找(数组必须是有序的)
#include<stdio.h>

int main()
{
	int arr[] = { 7,23,79,81,103,127,131,147 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int Min = 0, Max = len - 1, Mid;
	int Number;

	printf("请输入要查找的数字：");
	scanf_s("%d", &Number);

	while (Min <= Max)
	{
		Mid = (Min + Max) / 2;
		if (arr[Mid] == Number)
		{
			printf("您查找的数字在第%d位", Mid + 1);
			return 0;
		}
		else
		{
			if (arr[Mid] > Number)
				Max = Mid - 1;
			else
				Min = Mid + 1;
		}
	}

	printf("查找的数字不存在\n");

	return 0;
}
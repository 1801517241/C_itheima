//插值查找
#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int Min = 0, Max = len - 1, Mid;
	int Number;

	printf("请输入要查找的数字：");
	scanf_s("%d", &Number);

	while (Min <= Max)
	{
		Mid = Min + (Number - arr[Min]) / (arr[Max] - arr[Min]) * (Max - Min);
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
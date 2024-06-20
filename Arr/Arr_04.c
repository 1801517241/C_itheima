//基本查找/顺序查找
#include<stdio.h>

int main()
{
	int arr[] = { 131,127,147,81,103,23,7,79 };
	int Number, location = 0;
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("请输入要查找的数字：");
	scanf_s("%d", &Number);

	for (int i = 0; i < len; i++)
	{
		if (arr[i] == Number)
		{
			location = i;
			location += 1;
			break;
		}
	}

	if (location == 0)
		printf("数字不存在\n");
	else
		printf("您要查找的数字在第%d位\n", location);

	return 0;
}
#include<stdio.h>

int getRemainder(int a, int b, int* res);

int main()
{
	int a = 10, b = 3, res = 0;

	int flag = getRemainder(a, b, &res);

	if (!flag)
		printf("余数是：%d\n", res);
	else
		printf("除数不能为0\n");

	return 0;
}

int getRemainder(int a, int b, int* res)
{
	if (b == 0)
	{
		return 1;
	}
	*res = a % b;
	return 0;
}
#include<stdio.h>

int getRemainder(int a, int b, int* res);

int main()
{
	int a = 10, b = 3, res = 0;

	int flag = getRemainder(a, b, &res);

	if (!flag)
		printf("�����ǣ�%d\n", res);
	else
		printf("��������Ϊ0\n");

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
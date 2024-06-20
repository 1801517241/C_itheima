#include<stdio.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int mutiply(int num1, int num2);
int divide(int num1, int num2);

int main()
{
	int a = 10, b = 20, choose = 1;

	int (*P1[4])(int, int) = { add,subtract,mutiply,divide };

	printf("请录入两个数字参与计算：");
	scanf_s("%d%d", &a, &b);

	printf("您输入的是%d %d\n", a, b);

	printf("请选择计算类型（1，加法；2，减法；3，乘法；4，除法）：");
	scanf_s("%d", &choose);

	int res = (P1[choose - 1])(a, b);

	printf("结果是%d",res);

	return 0;
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int subtract(int num1, int num2)
{
	return num1 - num2;
}

int mutiply(int num1, int num2)
{
	return num1 * num2;
}

int divide(int num1, int num2)
{
	return num1 / num2;
}
#include<stdio.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int mutiply(int num1, int num2);
int divide(int num1, int num2);

int main()
{
	int a = 10, b = 20, choose = 1;

	int (*P1[4])(int, int) = { add,subtract,mutiply,divide };

	printf("��¼���������ֲ�����㣺");
	scanf_s("%d%d", &a, &b);

	printf("���������%d %d\n", a, b);

	printf("��ѡ��������ͣ�1���ӷ���2��������3���˷���4����������");
	scanf_s("%d", &choose);

	int res = (P1[choose - 1])(a, b);

	printf("�����%d",res);

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
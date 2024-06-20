#include<stdio.h>

void method1();
int method2(int num1, int num2);

int main()
{
	void (*P1)() = method1;
	int (*P2)(int, int) = method2;

	P1();
	int num = P2(10, 20);

	printf("%d\n", num);

	return 0;
}

void method1()
{
	printf("method1\n");
}

int method2(int num1, int num2)
{
	printf("method2\n");

	return num1 + num2;
}
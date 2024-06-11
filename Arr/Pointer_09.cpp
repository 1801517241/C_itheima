//二级指针和多级指针
#include<stdio.h>

int main()
{
	int a = 10;
	int b = 20;

	int* P1 = &a;

	int** P1_1 = &P1;

	*P1_1 = &b;
	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", P1);
	printf("%d\n", **P1_1);

	return 0;
}
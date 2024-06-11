//野指针和悬空指针
#include<stdio.h>

int* method();

int main()
{
	int a = 10;
	int* P1 = &a;

	printf("%p\n", P1);
	printf("%d\n", *P1);

	int* P2 = P1 + 10;		//野指针

	printf("%p\n", P2);
	printf("%d\n", *P2);
	
	int* P3 = method();		//悬空指针

	printf("拖点儿时间\n");

	printf("%p\n", P3);
	printf("%d\n", *P3);

	return 0;
}

int* method()
{
	int num = 10;
	int* p = &num;
	return p;
}
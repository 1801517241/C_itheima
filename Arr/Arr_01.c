//数组_内存和内存地址
#include<stdio.h>

int main()
{
	int a = 10, b = 20, c = 30;
	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);

	return 0;
}
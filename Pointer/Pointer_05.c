//Ö¸ÕëµÄÔËËã
#include<stdio.h>

int main()
{
	int a = 10;
	int* P1 = &a;

	printf("%p\n", P1);
	printf("%p\n", P1+1);
	printf("%p\n", P1+2);

	return 0;
}
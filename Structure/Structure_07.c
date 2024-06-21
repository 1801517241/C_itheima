#include<stdio.h>

struct Num
{
	char b;
	char d;
	int c;
	double a;
};

int main()
{
	struct Num n;
	printf("%zu\n", sizeof(n));

	//int a = 10;
	//int b = 10;

	//printf("%d\n", &a);
	//printf("%d\n", &b);

	return 0;
}
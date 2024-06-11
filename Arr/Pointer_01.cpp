#include<stdio.h>

int main()
{
	int a = 10;
	int* P1 = &a;

	printf("%d\n", *P1);

	*P1 = 200;
	printf("%d\n", *P1);

	char c = 'a';
	char* P2 = &c;

	printf("%zu\n", sizeof(P2));

	long long n = 100;
	long long* P3 = &n;

	printf("%zu\n", sizeof(P3));

	return 0;
}
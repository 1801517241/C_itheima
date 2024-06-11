#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* P1 = &arr[0];

	printf("%d\n", *P1);
	printf("%d\n", *(P1+1));

	int* P2 = &arr[5];

	printf("%d\n", P2 - P1);
	printf("%p\n", P1);
	printf("%p\n", P2);

	return 0;
}
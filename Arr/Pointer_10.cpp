//Êı×éÖ¸Õë
#include<stdio.h>

int main()
{
	int arr[] = { 10,20,30,40,50 };
	int len = sizeof(arr) / sizeof(int);

	int* P1 = arr;

	/*printf("%d\n", *P1);
	printf("%d\n", *(P1 + 1));*/

	for (int i = 0; i < len; i++)
		printf("%d ", *P1++);

	printf("\n");

	return 0;
}
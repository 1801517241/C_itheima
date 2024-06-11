#include<stdio.h>

void swap(void* P1, void* P2, int len);

int main()
{
	int a = 10;
	short b = 20;

	int* P1 = &a;
	short* P2 = &b;

	printf("%d\n", *P1);
	printf("%d\n", *P2);

	char* P3 = (char*)P1;
	char* P4 = (char*)P2;

	printf("%d\n", *P3);
	printf("%d\n", *P4);

	void* P5 = P1;
	void* P6 = P2;

	/*printf("%d\n", P5);
	printf("%d\n", P6);*/

	short int c = 100, d = 200;

	swap(&c, &d, 2);

	printf("%d %d\n", c, d);

	return 0;
}

void swap(void* P1, void* P2, int len)
{
	char* pc1 = (char*)P1;
	char* pc2 = (char*)P2;

	char temp = 0;

	for (int i = 0; i < len; i++)
	{
		temp = *pc1;
		*pc1 = *pc2;
		*pc2 = temp;

		pc1++;
		pc2++;
	}
}
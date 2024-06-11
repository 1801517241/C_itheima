#include<stdio.h>

void Swap(int* P1, int* P2);

int main()
{
	int x = 10, y = 20;

	printf("调用Swap前：%d %d\n", x, y);

	Swap(&x, &y);

	printf("调用Swap后：%d %d", x, y);

	return 0;
}

void Swap(int *P1, int *P2)
{
    int	Temp = *P1;
	*P1 = *P2;
	*P2 = Temp;
}
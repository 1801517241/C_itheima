#include<stdio.h>

void Swap(int* P1, int* P2);

int main()
{
	int x = 10, y = 20;

	printf("����Swapǰ��%d %d\n", x, y);

	Swap(&x, &y);

	printf("����Swap��%d %d", x, y);

	return 0;
}

void Swap(int *P1, int *P2)
{
    int	Temp = *P1;
	*P1 = *P2;
	*P2 = Temp;
}
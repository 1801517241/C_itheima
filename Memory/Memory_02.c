#include<stdio.h>
#include<stdlib.h>

void methid(int* p, int size);

int main()
{
	int* number = (int*)malloc(25 * sizeof(int));
	int numberSize = 25;
	
	methid(number,numberSize);

	free(number);

	return 0;
}

void methid(int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", p[i]);
	}
}
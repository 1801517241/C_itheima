#include<stdio.h>
#include<stdlib.h>

int main()
{
	//1.ʹ��malloc��������һƬ�����Ŀռ�
	int* p = malloc(10 * sizeof(int));
	//int* p = calloc(10, sizeof(int));

	printf("%p\n", p);
	
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = (i + 1) * 10;
	}

	int* pp = realloc(p, 20 * sizeof(int));

	for (int i = 0; i < 20; i++)
	{
		printf("%d ", *(p + i));
	}

	free(pp);

	return 0;
}
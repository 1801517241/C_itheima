#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	int size = 10;

	for (int i = 0; i < size; i++)
	{
		if (p != NULL)
		{
			*(p + i) = (i + 1) * 10;
		}
	}

	printf("�����ռ��е�����Ϊ��\n");

	for (int i = 0; i < size; i++)
	{
		if (p != NULL)
		{
			printf("%d ", *(p + i));
		}
	}
	printf("\n");

	free(p);

	printf("free֮������ռ��е�����Ϊ��\n");
	for (int i = 0; i < size; i++)
	{
		if (p != NULL)
		{
			printf("%d ", *(p + i));
		}
	}
	printf("\n");

	return 0;
}
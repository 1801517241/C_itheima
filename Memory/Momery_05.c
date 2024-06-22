#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	printf("最初的内存地址为：%p\n", p);
	int size = 10;

	for (int i = 0; i < size; i++)
	{
		if (p != NULL)
		{
			*(p + i) = (i + 1) * 10;
		}
	}

	int* p2 = (int*)realloc(p, 20 * sizeof(int));
	printf("修改的内存地址为：%p\n", p);
	size = 20;

	printf("遍历空间中的数据为：\n");
	for (int i = 0; i < size; i++)
	{
		if (p2 != NULL)
		{
			printf("%d ", *(p2 + i));
		}
	}

	free(p2);

	return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int count = 0;
	//5.malloc申请的空间过多，会产生虚拟内存

	//单次申请空间的大小(1G）
	int number = 1024 * 1024 * 1024;

	while (1)
	{
		int* p = (int*)malloc(number);
		count++;
		if (p == NULL)
		{
			printf("申请失败\n");
			break;
		}
		else
		{
			printf("内存%d申请成功，地址：%p\n", count, p);
		}
	}

	return 0;
}
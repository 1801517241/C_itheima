#include<stdio.h>
#include<stdlib.h>

int main()
{
	int count = 0;
	//5.malloc����Ŀռ���࣬����������ڴ�

	//��������ռ�Ĵ�С(1G��
	int number = 1024 * 1024 * 1024;

	while (1)
	{
		int* p = (int*)malloc(number);
		count++;
		if (p == NULL)
		{
			printf("����ʧ��\n");
			break;
		}
		else
		{
			printf("�ڴ�%d����ɹ�����ַ��%p\n", count, p);
		}
	}

	return 0;
}
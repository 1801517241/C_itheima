//ð������
#include<stdio.h>

int main()
{
	int arr[5] = {};
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	printf("����ǰ��");
	for (int i = 0; i < len; i++)
	{
		printf("%d", arr[i]);
	}

	printf("\n");

	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}


	printf("�����");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
//��������/˳�����
#include<stdio.h>

int main()
{
	int arr[] = { 131,127,147,81,103,23,7,79 };
	int Number, location = 0;
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("������Ҫ���ҵ����֣�");
	scanf_s("%d", &Number);

	for (int i = 0; i < len; i++)
	{
		if (arr[i] == Number)
		{
			location = i;
			location += 1;
			break;
		}
	}

	if (location == 0)
		printf("���ֲ�����\n");
	else
		printf("��Ҫ���ҵ������ڵ�%dλ\n", location);

	return 0;
}
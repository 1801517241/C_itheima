//���ֲ���/�۰����(��������������)
#include<stdio.h>

int main()
{
	int arr[] = { 7,23,79,81,103,127,131,147 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int Min = 0, Max = len - 1, Mid;
	int Number;

	printf("������Ҫ���ҵ����֣�");
	scanf_s("%d", &Number);

	while (Min <= Max)
	{
		Mid = (Min + Max) / 2;
		if (arr[Mid] == Number)
		{
			printf("�����ҵ������ڵ�%dλ", Mid + 1);
			return 0;
		}
		else
		{
			if (arr[Mid] > Number)
				Max = Mid - 1;
			else
				Min = Mid + 1;
		}
	}

	printf("���ҵ����ֲ�����\n");

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#ifndef _countof
#define _countof(array) (sizeof(array) / sizeof(array[0]))
#endif

int main()
{
	char str[100] = { 0 };

	int bigCount = 0, samellCount = 0, numberCount = 0;

	printf("������һ���ַ��������Ұ���ͳ����ĸ�����ְɣ�");
	scanf_s("%99s", str, (unsigned)_countof(str));

	printf("��������ǣ�%s\n", str);

	for (int i = 0; i < strlen(str); i++)
	{
		char c = str[i];

		if (c >= 'a' && c <= 'z')
		{
			samellCount++;
		}

		else if (c >= 'A' && c <= 'Z')
		{
			bigCount++;
		}

		else if (c >= '0' && c <= '9')
		{
			numberCount++;
		}
	}

	printf("Сд��ĸ�У�%d��\n��д��ĸ�У�%d��\n�����ַ��У�%d��\n", samellCount, bigCount, numberCount);

	return 0;
}
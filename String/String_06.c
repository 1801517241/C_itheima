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

	printf("请输入一个字符串，让我帮你统计字母和数字吧：");
	scanf_s("%99s", str, (unsigned)_countof(str));

	printf("您输入的是：%s\n", str);

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

	printf("小写字母有：%d次\n大写字母有：%d次\n数字字符有：%d次\n", samellCount, bigCount, numberCount);

	return 0;
}
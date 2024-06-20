#include <stdio.h>
#include <stdlib.h>

int main()
{
	char strArr[5][100] =
	{
		"张三",
		"李四",
		"王五",
		"赵六",
		"钱七"
	};

	for (int i = 0; i < 5; i++)
	{
		char* str = strArr[i];
		printf("%s\n", str);
	}

	const char* strArr2[5] =
	{
		"张三",
		"李四",
		"王五",
		"赵六",
		"钱七"
	};

	for (int i = 0; i <5; i++)
	{
		const char* str = strArr2[i];
		printf("%s\n", str);
	}

	return 0;
}
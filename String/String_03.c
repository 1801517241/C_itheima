#include <stdio.h>
#include <stdlib.h>

int main()
{
	char strArr[5][100] =
	{
		"����",
		"����",
		"����",
		"����",
		"Ǯ��"
	};

	for (int i = 0; i < 5; i++)
	{
		char* str = strArr[i];
		printf("%s\n", str);
	}

	const char* strArr2[5] =
	{
		"����",
		"����",
		"����",
		"����",
		"Ǯ��"
	};

	for (int i = 0; i <5; i++)
	{
		const char* str = strArr2[i];
		printf("%s\n", str);
	}

	return 0;
}
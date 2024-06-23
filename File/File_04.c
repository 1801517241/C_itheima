#include<stdio.h>

int main()
{
	FILE* file = fopen("D:\\Porject\\C++\\C_itheima\\_aaa\\a.txt", "r");

	char strArr[4];

	int n;

	while ((n = fread(strArr, 1, 4, file)) != 0)
	{
		for (int i = 0; i < n; i++)
		{
			printf("%c", strArr[i]);
		}
	}

	fclose(file);

	return 0;
}
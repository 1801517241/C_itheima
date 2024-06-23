#include<stdio.h>

int main()
{
	FILE* file = fopen("D:\\Porject\\C++\\C_itheima\\_aaa\\a.txt", "r");

	char strArr[1024];
	char* str;

	while ((str = fgets(strArr, 1024, file)) != NULL)
	{
		printf("%s", strArr);
	}

	fclose(file);

	return 0;
}
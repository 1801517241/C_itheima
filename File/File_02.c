#include<stdio.h>

int main()
{
	FILE* file = fopen("D:\\Porject\\C++\\C_itheima\\_aaa\\a.txt", "r");

	int c = 0;
	while ((c = fgetc(file)) != -1)
		printf("%c", c);

	fclose(file);

	return 0;
}
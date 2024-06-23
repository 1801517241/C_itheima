#include<stdio.h>

int main()
{
	FILE* file = fopen("D:\\Porject\\C++\\C_itheima\\_aaa\\a.txt", "w");

	int c = fputc(97, file);
	printf("%c\n", c);

	int n=fputs("\nÄãºÃÄãºÃ", file);
	printf("%d\n", n);

	char arr[] = { 97,98,99,100,101 };
	int Number = fwrite(arr, 1, 5, file);
	printf("%d\n", Number);

	fclose(file);

	return 0;
}
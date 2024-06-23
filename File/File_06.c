#include<stdio.h>

int main()
{
	//打开文件
	FILE* file = fopen("D:\\Porject\\C++\\C_itheima\\_aaa\\a.txt", "w+");

	int c = fputc(97, file);
	printf("%c\n", c);

	int n = fputs("你好你好", file);
	printf("%d\n", n);

	char arr[] = { 97,98,99,100,101,102,103 };
	int Number = fwrite(arr, 1, 7, file);
	printf("%d\n", Number);

	//关闭文件
	fclose(file);

	return 0;
}
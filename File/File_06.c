#include<stdio.h>

int main()
{
	//���ļ�
	FILE* file = fopen("D:\\Porject\\C++\\C_itheima\\_aaa\\a.txt", "w+");

	int c = fputc(97, file);
	printf("%c\n", c);

	int n = fputs("������", file);
	printf("%d\n", n);

	char arr[] = { 97,98,99,100,101,102,103 };
	int Number = fwrite(arr, 1, 7, file);
	printf("%d\n", Number);

	//�ر��ļ�
	fclose(file);

	return 0;
}
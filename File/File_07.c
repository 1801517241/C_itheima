#include<stdio.h>

int main()
{
	//��Դ�ļ�
	FILE* file1 = fopen("C:\\Users\\18015\\Desktop\\a.bmp", "rb");
	//��Ŀ���ļ���
	FILE* file2 = fopen("D:\\Porject\\C++\\C_ itheima\\_aaa\\a.bmp", "wb");

	char strArr[1024];
	int strNumber;

	while ((strNumber = fread(strArr, 1, 1024, file1)) != 0)
	{
		fwrite(strArr, 1, strNumber, file2);
	}


	//�ر��ļ�
	fclose(file1);
	fclose(file2);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[100];

	printf("��¼��:");

	scanf_s("%99s", str, (unsigned)_countof(str));

	//printf("���ܵ����ַ���Ϊ��%s", str);

	char* P = str;
	while (1)
	{
		char c = *P;

		if (c == '\0')
		{
			break;
		}
		printf("%c", c);
		P++;
	}

	return 0;
}
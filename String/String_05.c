#include<stdio.h>
#include<string.h>

#ifndef _countof
#define _countof(array) (sizeof(array) / sizeof(array[0]))
#endif

int main()
{
	const char* rightUser = "Admin";			//�û���
	const char* rightPassword = "123456";		//����

	char user[20] = { 0 };
	char password[20] = { 0 };

	for (int i = 0; i <= 3; i++)
	{
		printf("�������û�����");
		scanf_s("%19s", user, (unsigned)_countof(user));
		printf("���������룺");
		scanf_s("%19s", password, (unsigned)_countof(password));

		if (strcmp(user, rightUser) == 0 && strcmp(password, rightPassword) == 0)
		{
			printf("��¼�ɹ�!\n");
		}
		else
		{
			if (i == 3)
				printf("%s����������ϵ������Ա��", user);
			else
				printf("�û�����������󣡣���ʣ��%d�λ��ᣩ\n", 3 - i);
		}
	}

	return 0;
}
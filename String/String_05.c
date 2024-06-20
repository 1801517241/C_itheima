#include<stdio.h>
#include<string.h>

#ifndef _countof
#define _countof(array) (sizeof(array) / sizeof(array[0]))
#endif

int main()
{
	const char* rightUser = "Admin";			//用户名
	const char* rightPassword = "123456";		//密码

	char user[20] = { 0 };
	char password[20] = { 0 };

	for (int i = 0; i <= 3; i++)
	{
		printf("请输入用户名：");
		scanf_s("%19s", user, (unsigned)_countof(user));
		printf("请输入密码：");
		scanf_s("%19s", password, (unsigned)_countof(password));

		if (strcmp(user, rightUser) == 0 && strcmp(password, rightPassword) == 0)
		{
			printf("登录成功!\n");
		}
		else
		{
			if (i == 3)
				printf("%s已锁定，联系工作人员！", user);
			else
				printf("用户名或密码错误！（还剩下%d次机会）\n", 3 - i);
		}
	}

	return 0;
}
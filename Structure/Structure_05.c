#include<stdio.h>

struct Message
{
	char phoneNumber[12];
	char email[30];
};

struct Student
{
	char name[100];
	int age;
	char gender;
	double height;
	struct Message msg;
};

int main()
{
	struct Student stu1 = { "����",21,'F',171.2,{"12345678901","1234567890@123.com"} };

	printf("������%s\n", stu1.name);
	printf("���䣺%d\n", stu1.age);
	printf("�Ա�%c\n", stu1.gender);
	printf("��ߣ�%.2lf\n", stu1.height);
	printf("�ֻ��ţ�%s\n", stu1.msg.phoneNumber);
	printf("�������䣺%s\n", stu1.msg.email);

	return 0;
}
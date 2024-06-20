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
	struct Student stu1 = { "张三",21,'F',171.2,{"12345678901","1234567890@123.com"} };

	printf("姓名：%s\n", stu1.name);
	printf("年龄：%d\n", stu1.age);
	printf("性别：%c\n", stu1.gender);
	printf("身高：%.2lf\n", stu1.height);
	printf("手机号：%s\n", stu1.msg.phoneNumber);
	printf("电子邮箱：%s\n", stu1.msg.email);

	return 0;
}
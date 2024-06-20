#include<stdio.h>
#include<string.h>

struct GirlfFriend
{
	char name[20];
	int age;
	char gender;
	double height;
};

int main()
{
	struct GirlfFriend gf1;
	strcpy_s(gf1.name, sizeof(gf1.name), "张三");
	gf1.age = 21;
	gf1.gender = 'F';
	gf1.height = 171.2;

	printf("名字：%s\n", gf1.name);
	printf("年龄：%d\n", gf1.age);
	printf("性别：%c\n", gf1.gender);
	printf("身高：%.2lf\n", gf1.height);

	struct GirlfFriend gf2;
	strcpy_s(gf2.name, sizeof(gf2.name), "李四");
	gf2.age = 23;
	gf2.gender = 'F';
	gf2.height = 161.2;

	printf("名字：%s\n", gf2.name);
	printf("年龄：%d\n", gf2.age);
	printf("性别：%c\n", gf2.gender);
	printf("身高：%.2lf\n", gf2.height);

	return 0;
}
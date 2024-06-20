#include<stdio.h>

#ifndef _countof
#define _countof(array) (sizeof(array) / sizeof(array[0]))
#endif

typedef struct Student
{
	char name[100];
	int age;
}Stu;

void setStu(Stu* st);

int main()
{
	Stu stu1 = { "张三",19 };

	printf("姓名为：%s\n", stu1.name);
	printf("年龄为：%d\n", stu1.age);

	setStu(&stu1);

	printf("姓名为：%s\n", stu1.name);
	printf("年龄为：%d\n", stu1.age);

	return 0;
}

void setStu(Stu* st)
{
	printf("姓名为：%s\n", (*st).name);
	printf("年龄为：%d\n", (*st).age);

	printf("输入要修改的学生名字：");
	scanf_s("%s", (*st).name, (unsigned)_countof((*st).name));
	printf("输入要修改的学生年龄：");
	scanf_s("%d", &((*st).age));

	printf("修改完毕！\n");
	printf("姓名为：%s\n", (*st).name);
	printf("年龄为：%d\n", (*st).age);
}
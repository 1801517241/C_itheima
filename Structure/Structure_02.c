#include<stdio.h>
#include<string.h>

struct Student
{
	char name[100];
	int age;
};

int main()
{
	struct Student stu1 = { "张三",21 };
	struct Student stu2 = { "李四",23 };
	struct Student stu3 = { "王五",19 };

	struct Student stuArr[3] = { stu1,stu2,stu3 };

	for (int i = 0; i < 3; i++)
	{
		printf("姓名是：%s\n", stuArr[i].name);
		printf("年龄是：%d\n", stuArr[i].age);
	}

	return 0;
}
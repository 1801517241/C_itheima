#include<stdio.h>
#include<string.h>

struct Student
{
	char name[100];
	int age;
};

int main()
{
	struct Student stu1 = { "����",21 };
	struct Student stu2 = { "����",23 };
	struct Student stu3 = { "����",19 };

	struct Student stuArr[3] = { stu1,stu2,stu3 };

	for (int i = 0; i < 3; i++)
	{
		printf("�����ǣ�%s\n", stuArr[i].name);
		printf("�����ǣ�%d\n", stuArr[i].age);
	}

	return 0;
}
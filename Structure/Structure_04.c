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
	Stu stu1 = { "����",19 };

	printf("����Ϊ��%s\n", stu1.name);
	printf("����Ϊ��%d\n", stu1.age);

	setStu(&stu1);

	printf("����Ϊ��%s\n", stu1.name);
	printf("����Ϊ��%d\n", stu1.age);

	return 0;
}

void setStu(Stu* st)
{
	printf("����Ϊ��%s\n", (*st).name);
	printf("����Ϊ��%d\n", (*st).age);

	printf("����Ҫ�޸ĵ�ѧ�����֣�");
	scanf_s("%s", (*st).name, (unsigned)_countof((*st).name));
	printf("����Ҫ�޸ĵ�ѧ�����䣺");
	scanf_s("%d", &((*st).age));

	printf("�޸���ϣ�\n");
	printf("����Ϊ��%s\n", (*st).name);
	printf("����Ϊ��%d\n", (*st).age);
}
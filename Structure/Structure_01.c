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
	strcpy_s(gf1.name, sizeof(gf1.name), "����");
	gf1.age = 21;
	gf1.gender = 'F';
	gf1.height = 171.2;

	printf("���֣�%s\n", gf1.name);
	printf("���䣺%d\n", gf1.age);
	printf("�Ա�%c\n", gf1.gender);
	printf("��ߣ�%.2lf\n", gf1.height);

	struct GirlfFriend gf2;
	strcpy_s(gf2.name, sizeof(gf2.name), "����");
	gf2.age = 23;
	gf2.gender = 'F';
	gf2.height = 161.2;

	printf("���֣�%s\n", gf2.name);
	printf("���䣺%d\n", gf2.age);
	printf("�Ա�%c\n", gf2.gender);
	printf("��ߣ�%.2lf\n", gf2.height);

	return 0;
}
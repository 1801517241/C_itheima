#include<stdio.h>
#include<string.h>

typedef struct GamePower
{
	char name[100];
	int Attack;
	int Defense;
	int BloodVolume;
} GP;

int main()
{
	GP GP1 = { "����",10,5,21 };
	GP GP2 = { "����",12,2,15 };
	GP GP3 = { "����",5,10,25 };

	GP GParr[3] = { GP1,GP2,GP3 };

	printf("------------------\n");

	for (int i = 0; i < 3; i++)
	{
		printf("��ɫ%s����Ϣ��\n", GParr[i].name);
		printf("������Ϊ��%d\n", GParr[i].Attack);
		printf("������Ϊ��%d\n", GParr[i].Defense);
		printf("Ѫ��Ϊ��%d\n", GParr[i].BloodVolume);
		printf("------------------\n");
	}

	return 0;
}
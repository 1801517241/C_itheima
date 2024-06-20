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
	GP GP1 = { "张三",10,5,21 };
	GP GP2 = { "李四",12,2,15 };
	GP GP3 = { "王五",5,10,25 };

	GP GParr[3] = { GP1,GP2,GP3 };

	printf("------------------\n");

	for (int i = 0; i < 3; i++)
	{
		printf("角色%s的信息：\n", GParr[i].name);
		printf("攻击力为：%d\n", GParr[i].Attack);
		printf("防御力为：%d\n", GParr[i].Defense);
		printf("血量为：%d\n", GParr[i].BloodVolume);
		printf("------------------\n");
	}

	return 0;
}
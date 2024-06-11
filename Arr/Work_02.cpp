//生成十个数并进行求和
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int arr[10], num=0;

	time_t t;

	srand((unsigned)time(&t));
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100 + 1;		//把随机数存入数组
	}
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		num += arr[i];
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	printf("num:%d\n", num);

	return 0;
}
//生成十个数并进行求和(Plus)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int contains(int arr[], int len, int num);//判断随机数是否存在

int main()
{
	int arr[10], num = 0;
	int len = sizeof(arr) / sizeof(arr[0]);

	time_t t;

	srand((unsigned)time(&t));

	for (int i = 0; i < 10;)
	{	//把随机数存入数组
		int randNum = rand() % 100 + 1;
		if (!contains(arr, len, randNum))
		{
			arr[i] = randNum;
			i++;
		}
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

int contains(int arr[], int len, int num)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == num)
			return 1;
	}

	return 0;
}
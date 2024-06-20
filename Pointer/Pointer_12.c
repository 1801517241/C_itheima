#include<stdio.h>

int main()
{
	int arr[3][5] =
	{
		{1,2,3,4,5},
		{11,22,33,44,55},
		{111,222,333,444,555}
	};

	//使用索引进行遍历
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
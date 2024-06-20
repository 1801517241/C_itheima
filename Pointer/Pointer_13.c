#include<stdio.h>

int main()
{
	int arr_1[3] = { 1,2,3 };
	int arr_2[5] = { 1,2,3,4,5 };
	int arr_3[9] = { 1,2,3,4,5,6,7,8,9 };

	int len_1 = sizeof(arr_1) / sizeof(int);
	int len_2 = sizeof(arr_2) / sizeof(int);
	int len_3 = sizeof(arr_3) / sizeof(int);

	int lenArr[3] = { len_1,len_2,len_3 };

	int* arr[3] = { arr_1,arr_2,arr_3 };

	//使用索引遍历arr
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < lenArr[i]; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
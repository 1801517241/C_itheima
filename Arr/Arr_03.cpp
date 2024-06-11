//数组的常见两个问题

/*1.函数传递数组需要把数组长度一起传递过去。
  2.最小索引永远为0，最大长度为数组长度-1。
*/
#include<stdio.h>

void printArr(int arr[], int len);

int main()
{
	int arr[] = { 1,2,3,4,5 };
	//printf("%zu\n", sizeof(arr));
	int len = sizeof(arr) / sizeof(arr[0]);

	printArr(arr,len);

	return 0;
}

void printArr(int arr[], int len)
{
	for (size_t i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}
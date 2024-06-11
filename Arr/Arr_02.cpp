//数组在内存中深度剖析
#include<stdio.h>

int main()
{
	int arr[3] = { 1,2,3 };

	printf("%p\n", &arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[2]);
	printf("%d\n", sizeof(arr) / sizeof(int));

	return 0;
}
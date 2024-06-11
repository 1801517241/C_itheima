#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("%zu\n", sizeof(arr));

	printf("%p\n", arr);
	printf("%p\n", &arr);

	printf("%p\n", arr+1);
	printf("%p\n", &arr+1);
	
	return 0;
}
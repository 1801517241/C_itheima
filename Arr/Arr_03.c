//����ĳ�����������

/*1.��������������Ҫ�����鳤��һ�𴫵ݹ�ȥ��
  2.��С������ԶΪ0����󳤶�Ϊ���鳤��-1��
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
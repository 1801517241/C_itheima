#include<stdio.h>
#include<string.h>

int main()
{
	char* str1 = "abc";
	char str2[100] = "abc";
	char str3[5] = { 'q','w','e','r','\0' };

	printf("---------------strlen(³¤¶È)---------------\n");
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int len3 = strlen(str3);

	printf("%d\n", len1);
	printf("%d\n", len2);
	printf("%d\n", len3);

	return 0;
}
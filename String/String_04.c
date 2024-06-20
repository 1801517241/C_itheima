#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char* str1 = "abc";
	char str2[100] = "abc";
	char str3[5] = { 'q','w','e','r','\0' };

	/*printf("---------------strlen(长度)---------------\n");
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int len3 = strlen(str3);

	printf("%d\n", len1);
	printf("%d\n", len2);
	printf("%d\n", len3);*/

	/*printf("---------------strcat(拼接)---------------\n");
	strcat(str2, str3);
	printf("%s\n", str2);
	printf("%s\n", str3);*/

	/*printf("---------------strcpy(拷贝)---------------\n");
	strcpy(str2, str3);
	printf("%s\n", str2);
	printf("%s\n", str3);*/

	/*printf("---------------strcmp(比较)---------------\n");
	int res = strcmp(str1, str2);
	printf("%d\n", res);*/

	/*printf("--------------strcmp(变小写)--------------\n");
	_strlwr(str2);
	printf("%s\n", str2);*/

	printf("--------------strcmp(变大写)--------------\n");
	_strupr(str2);
	printf("%s\n", str2);

	return 0;
}
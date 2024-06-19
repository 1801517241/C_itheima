#include<stdio.h>

int main()
{
	char str[4] = "abc";
	const char* P1 = "123";

	printf("%s\n", str);
	printf("%s\n", P1);

	str[0] = 'Q';

	printf("%s\n", str);
	
	return 0;
}
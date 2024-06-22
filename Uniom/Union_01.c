#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef union moneyType
{
	int moneyInt;
	double moneyDouble;
	char moneyString[100];
}mT;

int main()
{
	mT money;

	money.moneyInt = 100000;
	printf("%d\n", money.moneyInt);

	money.moneyDouble = 100000.46;
	printf("%.2lf\n", money.moneyDouble);

	strcpy(money.moneyString, "100Íò");
	printf("%s\n", money.moneyString);

	return 0;
}
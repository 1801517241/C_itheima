#include<stdio.h>

union Money
{
	char moneystr[100];
	int monint;
	double mondouble;
};

int main()
{
	union Money M1;
	M1.mondouble = 12.1;
	M1.monint = 12;

	printf("%.2lf\n", M1.mondouble);
	printf("%d\n", M1.monint);

	printf("%p\n", &(M1.mondouble));
	printf("%p\n", &(M1.mondouble));

	printf("%zu\n", sizeof(M1));

	return 0;
}
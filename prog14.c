#include<stdio.h>
int main()
{
	int c;
	float f;
	printf("Enter the temparature in celsius:");
	scanf("%i",&c);
	f=c*9.0/5+32;
	printf("Temparature in faurenheit %f",f);
	return 0;
}


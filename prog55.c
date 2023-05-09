#include<stdio.h>
int main()
{
	int num;
	printf("Enter any integer:");
	scanf("%i",&num);
	if(num>=-9 && num<=9)
		printf("Single digit number");
	if(num>=-99 && num<=-10 || num>=10 && num<=99)
		printf("two digit number");
	if(num>=-999 && num<=-100 || num>=100 && num<=999)
		printf("Three digit number");
	if(num>999)
		printf("Biggest number");
	if(num<-999)
		printf("Smallest number");
	return 0;
}

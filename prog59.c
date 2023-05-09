#include<stdio.h>
int main()
{
	int num;
	printf("Enter any integer:");
	scanf("%i",&num);
	if(num>=-9 && num<=9)
		printf("Single digit number");
	else if(num>=-99 && num<=99)
		printf("Two digit number");
	else if(num>=-999 && num<=999)
		printf("Three digit number");
	else if(num>999)
		printf("Biggest number");
	else if(num<-999)
		printf("Smallest number");
	return 0;
}

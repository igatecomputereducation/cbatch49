#include<stdio.h>
int main()
{
	int num;
	printf("Enter any integer:");
	scanf("%i",&num);
	if(num>=-9)
	{
		if(num<=9)
			printf("Single digit number");
		else
			printf("Not a single digit number");
	}
	else
		printf("Not a single digit number");
	return 0;
}

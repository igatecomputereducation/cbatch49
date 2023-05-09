#include<stdio.h>
int main()
{
	int num;
	printf("Enter any integer:");
	scanf("%i",&num);
	if(num>=-99)
	{
		if(num<=99)
		{
			if(num<=-10)
				printf("2 digit number");
			else
			{
				if(num>=10)
					printf("2 digit number");
				else
					printf("Not a 2 digit number");
			}
		}
		else
			printf("Not a 2 digit number");
	}
	else
		printf("Not a 2 digit number");
	return 0;
}

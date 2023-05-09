#include<stdio.h>
int main()
{
	int n;
	printf("Enter any integer:");
	scanf("%i",&n);
	if(n>=-999)
	{
		if(n<=999)
		{
			if(n<=-100)
				printf("3 digit number");
			else
			{
				if(n>=100)
					printf("3 digit number");
				else
				{
					if(n<=-10)
						printf("2 digit number");
					else
					{
						if(n>=10)
							printf("2 digit number");
						else
							printf("single digit number");
					}
				}
			}
		}
		else
			printf("Biggest number");
	}
	else
		printf("Smallest number");
	
	
	return 0;
}

#include<stdio.h>
int main()
{
	int x,ll,ul;
	
	printf("Lower limit:");
	scanf("%i",&ll);
	printf("Upper limit:");
	scanf("%i",&ul);
	
	x=ul;
	do{
		printf("%i\n",x);
		x=x-1;
	}while(x>=ll);
	
	
	return 0;
}

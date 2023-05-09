#include<stdio.h>
int main()
{
	int x,ll,ul;
	
	printf("Lower limit:");
	scanf("%i",&ll);
	printf("Upper limit:");
	scanf("%i",&ul);
	
	x=ll;
	igate:
		printf("%i\n",x);
		x=x+1;
	if(x<=ul)
		goto igate;
	
	return 0;
}

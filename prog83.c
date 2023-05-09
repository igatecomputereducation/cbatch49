#include<stdio.h>
int main()
{
	int x,n,sum;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	sum=0;
	x=1;
	igate:
		sum=sum+x;
		x=x+1;
	if(x<=n)
		goto igate;
	
	printf("Sum of natural numbers %i",sum);
	return 0;
}

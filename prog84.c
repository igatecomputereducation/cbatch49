#include<stdio.h>
int main()
{
	int x,n,fact;
	
	printf("Enter the natural number:");
	scanf("%i",&n);
	
	fact=1;
	x=1;
	igate:
		fact=fact*x;
		x=x+1;
	if(x<=n)
		goto igate;
	
	printf("Factorial %i",fact);
	return 0;
}

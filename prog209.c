#include<stdio.h>
int factorial(int);
int main()
{
	int n,fact;
	printf("Enter any natural number:");
	scanf("%i",&n);
	fact=factorial(n);
	printf("Factorial %i",fact);
	return 0;
}
int factorial(int n)
{
	int fa;
	if(n==1)
		return 0;
	fa=n*factorial(n-1);
	return fa;
}


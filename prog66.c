#include<stdio.h>
int main()
{
	int n,gr;
	printf("Enter any natural number:");
	scanf("%i",&n);
	gr=(n%9==0)?9:n%9;
	printf("The generic root %i",gr);
	return 0;
}

#include<stdio.h>
int sum(int);
int main()
{
	int n,s;
	printf("Enter the limit:");
	scanf("%i",&n);
	s=sum(n);
	printf("Sum of natural numbers %i",s);
	return 0;
}
int sum(int n)
{
	int sm;
	if(n==1)
		return 1;
	sm=n+sum(n-1);
	return sm;
}


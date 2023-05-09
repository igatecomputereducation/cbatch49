#include<stdio.h>
int main()
{
	int n;
	printf("Enter any integer:");
	scanf("%i",&n);
	(n==0)?printf("zero"):((n>0)?printf("+ve"):printf("-ve"));
	return 0;
}

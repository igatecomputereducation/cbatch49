#include<stdio.h>
#include<string.h>
int main()
{
	char x[50],y[50];
	printf("Enter any string:");
	scanf("%s",x);
	strcpy(y,x);
	printf("Result string %s",y);
	return 0;
}


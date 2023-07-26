#include<stdio.h>
#include<string.h>
int main()
{
	char x[50],y[50];
	printf("First string:");
	scanf("%s",x);
	printf("Second string:");
	scanf("%s",y);
	strcat(x,y);
	printf("Result string %s",x);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char x[50];
	printf("Enter any string:");
	scanf("%s",x);
	strrev(x);
	printf("The reverse string %s",x);
	return 0;
}

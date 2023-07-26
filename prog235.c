#include<stdio.h>
int main()
{
	char x[50];
	printf("Enter a line of text:");
	gets(x);
	printf("The given text %s",x);
	return 0;
}

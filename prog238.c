#include<stdio.h>
#include<string.h>
int main()
{
	char x[50];
	int l;
	printf("Enter any line of text:");
	gets(x);
	l=strlen(x);
	printf("Length %i",l);
	return 0;
}


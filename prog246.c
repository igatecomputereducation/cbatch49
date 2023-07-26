#include<stdio.h>
#include<string.h>
int main()
{
	char x[50],y[50];
	printf("Enter any string:");
	scanf("%s",x);
	strcpy(y,x);
	strrev(y);
	if(strcmp(x,y)==0)
		printf("Palindrome string");
	else
		printf("Not a palindrome string");
	return 0;
}

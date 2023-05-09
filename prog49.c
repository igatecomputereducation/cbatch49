#include<stdio.h>
int main()
{
	int n;
	printf("Enter any 4 digit natural number:");
	scanf("%i",&n);
	if(n%10==n/1000  && n/100%10==n/10%10)
		printf("Palindrome number");
	else
		printf("Not a palindrome number");
	return 0;
}

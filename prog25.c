#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%i",&age);
	if(age>=18)
		printf("You have right to vote");
	if(age<18)
		printf("You have no right to vote");
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter value into a:");
	scanf("%i",&a);
	printf("Enter value into b:");
	scanf("%i",&b);
	temp=a;
	a=b;
	b=temp;
	printf("Value of a %i\n",a);
	printf("Value of b %i",b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 integers..\n");
	scanf("%i%i",&a,&b);
	if(a==b)
		printf("Equals");
	else
		printf("Not equals");
	return 0;
}

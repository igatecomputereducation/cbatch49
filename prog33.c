#include<stdio.h>
int main()
{
	int len,bre;
	printf("Enter 2 sides of a shape\n");
	scanf("%i%i",&len,&bre);
	if(len==bre)
		printf("Square");
	else
		printf("Rectangle");
	return 0;
}

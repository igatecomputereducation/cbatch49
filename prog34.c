#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 angles of a shape\n");
	scanf("%i%i%i",&a,&b,&c);
	if(a+b+c==180)
		printf("Triangle");
	else
		printf("Not a triangle");
	return 0;
}

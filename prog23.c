#include<stdio.h>
int main()
{
	int x,y;
	printf("First number:");
	scanf("%i",&x);
	printf("Second number:");
	scanf("%i",&y);
	if(x==y)
		printf("Equal");
	if(x!=y)
		printf("Not equals");
	return 0;
}

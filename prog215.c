#include<stdio.h>
#define A
int main()
{
	int x,y;
	printf("First number:");
	scanf("%i",&x);
	printf("Second number:");
	scanf("%i",&y);
#ifdef A	
	printf("Sum %i\n",x+y);
	printf("Subtraction %i\n",x-y);
	printf("Product %i\n",x*y);
	printf("Division %f",(float)x/y);
#else
	if(x==y)
		printf("Equals");
	if(x>y)
		printf("Biggest number %i",x);
	else
		printf("Biggest number %i",y);
#endif
	return 0;
}

#include "stdio.h"
#include "manip.h"
int main()
{
	float a,b;
	printf("Enter 2 floating point values\n");
	scanf("%f%f",&a,&b);
	printf("Sum %f\n",sum(a,b));
	printf("Subtraction %f\n",sub(a,b));
	printf("Product %f\n",pro(a,b));
	printf("Division %f",div(a,b));
	return 0;
}


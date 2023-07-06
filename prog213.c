#include<stdio.h>
#define area(x,y) x*y
#define peri(x,y) 2*(x+y)
int main()
{
	int len,bre;
	printf("Enter 2 sides of rectangle\n");
	scanf("%i%i",&len,&bre);
	printf("Area %i\n",area(len,bre));
	printf("Perimeter %i",peri(len,bre));
	return 0;
}

#include<stdio.h>
void subfunc(int*,int*);
int main()
{
	int a=50,b=60;
	subfunc(&a,&b);
	printf("%i\n",a);
	printf("%i",b);
	return 0;
}
void subfunc(int *x,int *y)
{
	*x=*x+5;
	*y=*y+5;
}

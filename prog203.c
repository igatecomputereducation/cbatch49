#include<stdio.h>
void subfunc();
extern int x;
int main()
{
	subfunc();
	printf("%i",x);
	return 0;
}
int x=10;
void subfunc()
{
	printf("%i\n",x);
	x=x+5;
}


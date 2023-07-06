#include<stdio.h>
void subfunc();
int main()
{
	subfunc();
	return 0;
}
int x=10;
void subfunc()
{
	printf("%i\n",x);
}


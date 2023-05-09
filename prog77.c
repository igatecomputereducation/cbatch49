#include<stdio.h>
int main()
{
	int x;
	x=1;
	abc:
		printf("%i",x);
		x=x+1;
	goto abc;
	return 0;
}

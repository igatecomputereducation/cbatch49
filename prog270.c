#include<stdio.h>
int main()
{
	char x,y;
	x=75;
	y=82;
	printf("%d\n",x&y);
	printf("%d\n",x|y);
	printf("%d\n",x^y);
	printf("%d",~x);
	return 0;
}

#include<stdio.h>
int main()
{
	int x=45;
	printf("%i\n",x);
	printf("%i",*(&x));
	return 0;
}

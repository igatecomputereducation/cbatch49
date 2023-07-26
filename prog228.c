#include<stdio.h>
int main()
{
	int x=85;
	int *p=&x;
	int **q=&p;
	printf("%i\n",x);
	printf("%i\n",*(&x));
	printf("%i\n",*p);
	printf("%i\n",**q);
	return 0;
}

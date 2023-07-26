#include<stdio.h>
int main()
{
	int x;
	int *p=&x;
	printf("%u\n",p+0);
	printf("%u\n",p+1);
	printf("%u",p+2);
	return 0;
}

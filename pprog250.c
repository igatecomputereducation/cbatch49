#include<stdio.h>
int main()
{
	short num;
	char *p;
	char x[]="igate";
	char *y="igate";
	printf("%u\n",sizeof(num));
	printf("%u\n",sizeof(int));
	printf("%u\n",sizeof(p));
	printf("%u\n",sizeof(x));
	printf("%u\n",sizeof(y));
	return 0;
}

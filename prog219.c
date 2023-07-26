#include<stdio.h>
int main()
{
	char ch='a';
	int num=456;
	float temp=89.1234;
	
	char *p;
	int *q;
	float *r;
	
	p=&ch;
	q=&num;
	r=&temp;
	
	printf("%c\n",*p);
	printf("%i\n",*q);
	printf("%f\n",*r);
	
	printf("----------\nsizeof pointers\n-----------\n");
	printf("%u\n",sizeof(p));
	printf("%u\n",sizeof(q));
	printf("%u\n",sizeof(r));
	
	return 0;
}

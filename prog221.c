#include<stdio.h>
int main()
{
	int qty;
	float price,bill,dis,nbill;
	int *q=&qty;
	float *p=&price,*b=&bill,*d=&dis,*n=&nbill;
	
	printf("Price:");
	scanf("%f",p);
	printf("Quantity:");
	scanf("%i",q);
	
	*b=(*q)*(*p);
	*d=(*b)*5/100;
	*n=*b-*d;
	
	printf("Bill %f\n",*b);
	printf("Discount %f\n",*d);
	printf("Net bill %f",*n);
	return 0;
}

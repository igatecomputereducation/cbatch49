#include<stdio.h>
int main()
{
	int len,bre,area,peri;
	int *l,*b,*a,*p;
	l=&len;b=&bre;a=&area;p=&peri;
	
	printf("Length:");
	scanf("%i",l);
	printf("Breadth:");
	scanf("%i",b);
	
	*a=(*l)*(*b);
	*p=2*(*l+*b);
	printf("area %i\n",*a);
	printf("Perimeter %i",*p);
	
	return 0;
}

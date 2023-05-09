#include<stdio.h>
int main()
{
	int bre,wid,hei,vol;
	printf("Breadth:");
	scanf("%i",&bre);
	printf("Width:");
	scanf("%i",&wid);
	printf("Height:");
	scanf("%i",&hei);
	vol=bre*wid*hei;
	printf("Volume of box %i",vol);
	return 0;
}

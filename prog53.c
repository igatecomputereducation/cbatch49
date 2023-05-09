#include<stdio.h>
int main()
{
	int fir,sec,thi;
	printf("Enter 3 integers..\n");
	scanf("%i%i%i",&fir,&sec,&thi);
	if(fir==sec && sec==thi)
		printf("Equals");
	else
		printf("Not equals");
	return 0;
}

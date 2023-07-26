#include<stdio.h>
int main()
{
	int a=10,b=20,c=30,d=40,e=50;
	int *p[5];
	int i;
	p[0]=&a;p[1]=&b;p[2]=&c;p[3]=&d;p[4]=&e;
	for(i=0;i<5;i++)
		printf("%5i",*(*(p+i)));
	return 0;
}

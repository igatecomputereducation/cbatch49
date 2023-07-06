#include<stdio.h>
void display(int);
int main()
{
	int i;
	for(i=1;i<=5;i++)
		display(i);
	return 0;
}
int a=100;
void display(int x)
{
	a=a+x;
	printf("%i\n",a);
}

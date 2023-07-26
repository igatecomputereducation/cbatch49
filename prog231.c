#include<stdio.h>
void subfunc(int*,int);
int main()
{
	int a[]={10,20,30,40,50};
	int i;
	subfunc(a,5);
	printf("Elements of array\n");
	for(i=0;i<5;i++)
		printf("%5i",a[i]);
	return 0;
}
void subfunc(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
		*(p+i)=*(p+i)+5;
}

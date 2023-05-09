#include<stdio.h>
int main()
{
	int num;
	printf("Enter any integer:");
	scanf("%i",&num);
	if(num==0)
		printf("zero");
	if(num>0)
		printf("+ve");
	if(num<0)
		printf("-ve");
	return 0;
}

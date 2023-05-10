#include<stdio.h>
int main()
{
	int x,n;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	x=1;
	igate:
		if(x%2==0)
			printf("%i\n",x);
		x=x+1;
	if(x<=n)
		goto igate;
	
	return 0;
}

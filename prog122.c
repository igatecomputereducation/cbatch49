#include<stdio.h>
int main()
{
	int i,j;
	
	for(j=1;j<=5;j++)
	{
		for(i=1;i<=j;i++)
			printf("%i\t",i);
		printf("\n\n");
	}
	return 0;
}

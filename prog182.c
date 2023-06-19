#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],c[50][50],i,j,k,sum,n,m,p,q;
	
	printf("Enter the dimension of 1st matrix\n");
	scanf("%i%i",&n,&m);
	
	printf("Enter the dimension of 2nd matrix\n");
	scanf("%i%i",&p,&q);
	
	if(m==p)
	{
		printf("Enter the 1st mastrix\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				scanf("%i",&a[i][j]);
		}
		
		printf("Enter the 2nd mastrix\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
				scanf("%i",&b[i][j]);
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<q;j++)
			{
				for(sum=0,k=0;k<m;k++)
					sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
			}
		}
		
		printf("Product of 2 matrices\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<q;j++)
				printf("%5i",c[i][j]);
			printf("\n\n");
		}
	}
	else
		printf("Can't multiply");
	
	return 0;
}

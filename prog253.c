#include<stdio.h>
int main()
{
	int n,m,i,j,*p,*q;
	
	printf("Enter the dimension of matrix\n");
	scanf("%i%i",&n,&m);
	
	p=calloc(n,m*sizeof(int));
	
	printf("Enter the matrix\n");
	q=p;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++,q++)
			scanf("%i",q);
	}
	
	printf("The matrix is\n");
	q=p;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++,q++)
			printf("%5i",*q);
		printf("\n\n");
	}
	
	free(p);
	return 0;
}

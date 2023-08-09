#include<stdio.h>
int main()
{
	int *p,*q,n,m,i;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	p=malloc(n*sizeof(int));
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",p+i);
	
	printf("How many more:");
	scanf("%i",&m);
	
	q=realloc(p,m*sizeof(int));
	
	printf("Enter more elements\n");
	for(i=n;i<n+m;i++)
		scanf("%i",q+i);
		
	printf("Total elements are\n");
	for(i=0;i<n+m;i++)
		printf("%5i",q[i]);
	
	free(q);
	return 0;
}

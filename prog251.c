#include<stdio.h>
int main()
{
	short *p,n,i;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	p=malloc(n*sizeof(short));
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%hi",p+i);
		
	printf("The given elements are\n");
	for(i=0;i<n;i++)
		printf("%5i",*(p+i));
	
	free(p);
	return 0;
}

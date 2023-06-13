#include<stdio.h>
int main()
{
	int a[50],n,k,i,temp;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	for(k=0;k<n-1;k++)
	{
		for(i=k+1;i<n;i++)
		{
			if(a[i]<a[k])
			{
				temp=a[i];
				a[i]=a[k];
				a[k]=temp;
			}
		}
	}
	
	for(k=0;k<n-1;)
	{
		if(a[k]!=a[k+1])
			k++;
		else
		{
			for(i=k;i<n-1;i++)
				a[i]=a[i+1];
			n--;
		}
	}
	
	printf("Result array\n");
	for(i=0;i<n;i++)
		printf("%i\t",a[i]);
	
	return 0;
}

#include<stdio.h>
void reverse(char*);
int main()
{
	char x[50];
	printf("Enter any string:");
	scanf("%s",x);
	reverse(x);
	printf("The reverse string %s",x);
	return 0;
}
void reverse(char *p)
{
	int i,j;
	char temp;
	for(j=0;p[j]!='\0';j++);
	for(i=0,j--;i<j;i++,j--)
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
	}
}

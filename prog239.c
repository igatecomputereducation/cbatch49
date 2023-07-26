#include<stdio.h>
void copy(char *q,char *p)
{
	int i;
	for(i=0;p[i]!='\0';i++)
		q[i]=p[i];
	q[i]='\0';
}
int main()
{
	char x[50],y[50];
	printf("Enter any string:");
	scanf("%s",x);
	copy(y,x);
	printf("Result string %s",y);
	return 0;
}


#include<stdio.h>
void concat(char*,char*);
int main()
{
	char x[50],y[50];
	printf("First string:");
	scanf("%s",x);
	printf("Second string:");
	scanf("%s",y);
	concat(x,y);
	printf("Result string %s",x);
	return 0;
}
void concat(char *p,char *q)
{
	int i,j;
	for(i=0;p[i]!='\0';i++);
	for(j=0;q[j]!='\0';i++,j++)
		p[i]=q[j];
	p[i]='\0';	
}

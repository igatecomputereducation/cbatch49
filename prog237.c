#include<stdio.h>
int length(char *p)
{
	int i,len;
	for(len=0,i=0;p[i]!='\0';i++)
		len=len+1;
	return len;	
}
int main()
{
	char x[50];
	int l;
	printf("Enter any line of text:");
	gets(x);
	l=length(x);
	printf("Length %i",l);
	return 0;
}


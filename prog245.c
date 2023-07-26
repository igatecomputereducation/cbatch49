#include<stdio.h>
#include<string.h>
int main()
{
	char x[50],y[50];
	printf("First string:");
	scanf("%s",x);
	printf("Scond string:");
	scanf("%s",y);
	if(strcmp(x,y)==0)
		printf("Equals");
	else if(strcmp(x,y)>0)
		printf("Biggest string %s",x);
	else
		printf("Biggest string %s",y);
	return 0;
}

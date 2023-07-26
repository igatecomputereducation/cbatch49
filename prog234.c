#include<stdio.h>
int main()
{
	char x[50];
	int i;
	printf("Enter any word:");
	scanf("%s",x);
	printf("The given word %s\n",x);
	for(i=0;x[i]!='\0';i++)
		printf("%c",x[i]);
	return 0;
}

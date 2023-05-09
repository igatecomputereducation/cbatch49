#include<stdio.h>
int main()
{
	char alp;
	printf("Enter an alphabet:");
	scanf("%c",&alp);
	if(alp>='a' &&  alp<='z')
		alp=alp-32;
	printf("%c",alp);
	return 0;
}

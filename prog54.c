#include<stdio.h>
int main()
{
	char alp;
	printf("Enter any alphabet:");
	scanf("%c",&alp);
	if(alp=='a' || alp=='e' || alp=='i' || alp=='o' || alp=='u' || 
				alp=='A' || alp=='E' || alp=='I' || alp=='O' || alp=='U')
		printf("Vowel");
	else
		printf("Consonent");
	return 0;
}

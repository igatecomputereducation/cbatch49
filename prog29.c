#include<stdio.h>
int main()
{
	int ch;
	printf("1.Permanent\n2.Temporary\nYour choice 1..2:");
	scanf("%i",&ch);
	if(ch==1)
	{
		printf("Subbu\n");
		printf("Karedu\n");
		printf("Andhra Pradesh");
	}
	if(ch==2)
	{
		printf("Igate solutions\n");
		printf("Kavali\n");
		printf("Andhra Pradesh");
	}
	if(ch<1)
		printf("Invalid choice");
	if(ch>2)
		printf("Invalid choice");
	return 0;
}

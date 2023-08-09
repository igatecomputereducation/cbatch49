#include<stdio.h>
int main()
{
	enum types{dom=1,com,ind,agr};
	enum types ch;
	int cmr,pmr,nu;
	float bill;
	printf("CMR:");
	scanf("%d",&cmr);
	printf("PMR:");
	scanf("%d",&pmr);
	printf("1.Domestic\n2.Commercial\n3.Industrial\n
				4.Agriculture\nEnter your choice [1..4]:");
	scanf("%i",&ch);
	nu=cmr-pmr;
	switch(ch)
	{
		case dom:
			bill=nu*7.50;
			break;
		case com:
			bill=nu*12.50;
			break;
		case ind:
			bill=nu*8.50;
			break;
		case agr:
			bill=nu*0.50;	
	}
	printf("Number of units %d\n",nu);
	printf("Bill %f",bill);
	return 0;
}

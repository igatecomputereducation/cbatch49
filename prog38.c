#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("Enter the salary:");
	scanf("%i",&sal);
	if(sal>=25000)
	{
		hra=sal*15.0/100;
		da=sal*17.0/100;
	}
	else
	{
		hra=sal*12.0/100;
		da=sal*14.0/100;
	}
	gross=sal+hra+da;
	printf("\n================\n");
	printf("Salary %i\nHRA %.2f\nDA %.2f\nGross %.2f",
										sal,hra,da,gross);
	return 0;
}

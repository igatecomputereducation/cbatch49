#include<stdio.h>
int main()
{
	int sales,sal;
	float comm,allow,gross;
	printf("Salary:");
	scanf("%i",&sal);
	printf("Sales:");
	scanf("%i",&sales);
	comm=sales*5.0/100;
	allow=sales*2.0/100;
	gross=sal+comm+allow;
	printf("\npayslip\n----------------\n");
	printf("Salary %i\n",sal);
	printf("Commission %.2f\n",comm);
	printf("Allowences %.2f\n",allow);
	printf("Gross salary %.2f",gross);
	return 0;
}

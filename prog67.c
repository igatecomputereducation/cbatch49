#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("Salary:");
	scanf("%i",&sal);
	hra=(sal>=80000)?sal*19.0/100:sal*13.0/100;
	da=(sal>=80000)?sal*17.0/100:sal*15.0/100;
	gross=sal+hra+da;
	printf("Salary %i\nHRA %f\nDA %f\nGross %f",sal,hra,da,gross);
	return 0;
}

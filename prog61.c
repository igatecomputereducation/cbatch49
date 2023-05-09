#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("Salary:");
	scanf("%i",&sal);
	if(sal>80000)
	{
		hra=sal*25.0/100;
		da=sal*21.0/100;
	}
	else if(sal>=60001)
	{
		hra=sal*21.0/100;
		da=sal*19.0/100;		
	}
	else if(sal>=40001)
	{
		hra=sal*19.0/100;
		da=sal*17.0/100;
	}
	else if(sal>=25001)
	{
		hra=sal*17.0/100;
		da=sal*13.0/100;
	}
	else
	{
		hra=sal*13.0/100;
		da=sal*15.0/100;
	}
	gross=sal+hra+da;
	printf("Salary %i\n",sal);
	printf("HRA %f\nDA %f\nGross %f",hra,da,gross);
	return 0;
}

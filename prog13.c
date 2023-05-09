#include<stdio.h>
int main()
{
	int mat,phy,che,tot;
	float avg;
	printf("Enter marks in maths, physics and chemistry\n");
	scanf("%i%i%i",&mat,&phy,&che);
	tot=mat+phy+che;
	avg=tot/3.0;
	printf("Total %i\n",tot);
	printf("Average %f",avg);
	return 0;
}

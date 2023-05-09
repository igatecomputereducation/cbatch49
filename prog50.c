#include<stdio.h>
int main()
{
	int mat,phy,che;
	printf("Enter marks in maths, physics and chemistry\n");
	scanf("%i%i%i",&mat,&phy,&che);
	if(mat>=50 && phy>=50 && che>=50)
		printf("pass");
	else
		printf("Failed");
	return 0;
}

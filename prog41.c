#include<stdio.h>
int main()
{
	int mat,phy,che;
	printf("Enter marks in maths, physics and chemistry\n");
	scanf("%i%i%i",&mat,&phy,&che);
	if(mat>=50)
	{
		if(phy>=50)
		{
			if(che>=50)
				printf("Pass");
			else
				printf("Failed");
		}
		else
			printf("Failed");
	}
	else
		printf("Failed");
	return 0;
}

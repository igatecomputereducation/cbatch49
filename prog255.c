/********************
Definition: biggest
author: subbu
Date: 31/07/2023
Version: 1.0
********************/

#include<stdio.h>
int main()
{
	/*Declaration of variables*/
	int x,y;
	
	//Accepting input
	printf("First number:");
	scanf("%i",&x);
	printf("Second number:");
	scanf("%i",&y);
	
	//printing biggest number
	(x==y)?printf("equals"):
	((x>y)?printf("Biggest %i",x):printf("Biggest %i",y));

	/*
	if(x==y)
		printf("Equals");
	else if(x>y)
		printf("Biggest %i",x);
	else
		printf("Biggest %i",y);
	*/
		
	return 0;
}

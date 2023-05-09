#include<stdio.h>
int main()
{
	char gen;
	int age;
	float per;
	printf("Gender [m/f]:");
	scanf("%c",&gen);
	printf("Age:");
	scanf("%i",&age);
	printf("Percentage:");
	scanf("%f",&per);
	if(gen=='m' && age>=25 && age<=40 && per>=75)
		printf("Selected");
	else
		printf("Not selected");
	return 0;
}

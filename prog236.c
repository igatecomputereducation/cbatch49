#include<stdio.h>
int main()
{
	char name[50],dno[50],street[50],place[50];
	int pin;
	printf("Name:");
	gets(name);
	printf("Door No:");
	gets(dno);
	printf("Street:");
	gets(street);
	printf("Place:");
	scanf("%s",place);
	printf("Pin:");
	scanf("%i",&pin);
	printf("\nAddress\n-----------------------\n");
	printf("%s\nDoorno:%s\n%s\n%s-%i",name,dno,street,place,pin);
	return 0;
}

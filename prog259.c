#include<stdio.h>
struct address
{
	char name[20];
	char dno[20];
	char str[20];
	char place[20];
	int pin;
};
int main()
{
	struct address a={"Narayana","4-4-10/A","Kukkala gunta",
				"kavali",524201};
	printf("Address\n-------------\n");
	printf("%s\nDno: %s\n%s\n%s-%i",a.name,a.dno,
				a.str,a.place,a.pin);
	return 0;
}

#include<stdio.h>
int main()
{
	int x=40;
	switch(x+5)
	{
		case 40:
			printf("one\n");
		case 45:
			printf("two\n");
		case 60:
			printf("three\n");
		default:
			printf("Invalid\n");
	}
	return 0;
}

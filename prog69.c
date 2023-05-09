#include<stdio.h>
int main()
{
	int x=40;
	switch(x+5)
	{
		case 40:
			printf("one\n");
			break;
		case 45:
			printf("two\n");
			break;
		case 60:
			printf("three\n");
			break;
		default:
			printf("Invalid\n");
	}
	return 0;
}

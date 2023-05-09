#include<stdio.h>
int main()
{
	printf("one\n");
	goto abc;
	printf("two\n");
	printf("three\n");
	abc:
	printf("four\n");
	return 0;
}

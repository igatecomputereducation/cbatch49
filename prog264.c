#include<stdio.h>
union data
{
	char ch;
	short x;
	float y;
};
int main()
{
	union data a;
	a.ch='p';
	printf("%c\n",a.ch);
	printf("-------------------\n");
	a.x=17249;
	printf("%c\n",a.ch);
	printf("%hd\n",a.x);
	printf("-------------------\n");
	a.y=4567.4523;
	printf("%c\n",a.ch);
	printf("%hd\n",a.x);
	printf("%f",a.y);
	return 0;
}

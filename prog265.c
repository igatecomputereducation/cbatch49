#include<stdio.h>
union data
{
	char ch;
	short num;
	float price;	
};
int main()
{
	union data a,b,c;
	a.ch='p';
	b.num=4567;
	c.price=45.56;
	printf("%c\n",a.ch);
	printf("%hd\n",b.num);
	printf("%f",c.price);
	return 0;
}

#include<stdio.h>
struct date
{
	unsigned short d:5;
	unsigned short m:4;
	unsigned short y:6;	
};
int main()
{
	struct date dt;
	dt.d=3;
	dt.m=8;
	dt.y=23;
	printf("%u Bytes\n",sizeof(dt));
	printf("Date %u-%u-20%u",dt.d,dt.m,dt.y);
	return 0;
}

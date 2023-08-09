#include<stdio.h>
int main()
{
	//const int a=0,b=1,c=2,d=3;
	enum values{a,b,c,d=10,e,f};
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	return 0;
}

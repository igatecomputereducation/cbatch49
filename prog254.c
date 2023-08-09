#include<stdio.h>
int main()
{
	void *p,*q,*r;
	
	p=malloc(sizeof(short));
	q=malloc(sizeof(int));
	r=malloc(sizeof(char));
	
	*((short*)p)=45;
	*((int*)q)=786768;
	*((char*)r)='a';
	
	printf("%hd\n",*((short*)p));
	printf("%d\n",*((int*)q));
	printf("%c",*((char*)r));
	return 0;
}

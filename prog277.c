#include<stdio.h>
int main()
{
	FILE *p,*q;
	int ch;
	p=fopen("mahesh-babu.jpg","rb");
	q=fopen("igate-babu.jpg","wb");
	while(1)
	{
		ch=fgetc(p);
		if(ch==-1)
			break;
		fputc(ch,q);
	}
	fclose(p);
	fclose(q);
	printf("1 file copied..");
	return 0;
}

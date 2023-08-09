#include<stdio.h>
int main()
{
	FILE *p,*q;
	char ch;
	p=fopen("igate","r");
	q=fopen("ugate","w");
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

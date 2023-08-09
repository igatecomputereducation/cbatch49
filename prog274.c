#include<stdio.h>
int main()
{
	FILE *p;
	char ch;
	p=fopen("igate","w");
	while(1)
	{
		ch=getchar();
		if(ch==-1)
			break;
		fputc(ch,p);
	}
	fclose(p);
	return 0;
}

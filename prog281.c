#include<stdio.h>
struct emp
{
	char name[20];
	int sal;	
	float hra,da,gross;
};
int main()
{
	struct emp x;
	FILE *p;
	p=fopen("employee","rb");
	while(1)
	{
		fread(&x,sizeof(x),1,p);
		if(feof(p))		
			break;
		printf("%s\t%d\t%.2f\t%.2f\t%.2f\n",
					x.name,x.sal,x.hra,x.da,x.gross);
	}
	fclose(p);
	return 0;
}

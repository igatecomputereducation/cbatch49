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
	char ch;
	FILE *p;
	p=fopen("employee","wb");
	while(1)
	{
		printf("Name:");
		scanf("%s",x.name);
		printf("Salary:");
		scanf("%d",&x.sal);
		x.hra=(float)x.sal*12/100;
		x.da=(float)x.sal*15/100;
		x.gross=x.sal+x.hra+x.da;
		fwrite(&x,sizeof(struct emp),1,p);
		fflush(stdin);
		printf("Wanna continue [y/n]");
		scanf("%c",&ch);
		if(ch!='y')
			break;
	}
	fclose(p);
	return 0;
}

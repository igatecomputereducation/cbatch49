#include<stdio.h>
int main()
{
	int regdno,sem;
	char name[20],course[20],branch[20];
	FILE *p;
	p=fopen("students","r");
	while(1)
	{
		fscanf(p,"%d%s%s%s%d",
			&regdno,name,course,branch,&sem);
		if(feof(p))
			break;
		printf("%d\t%s\t%s\t%s\t%d\n",
			regdno,name,course,branch,sem);
	}
	fclose(p);
	return 0;
}

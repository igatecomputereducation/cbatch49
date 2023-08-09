#include<stdio.h>
int main()
{
	int regdno,sem;
	char name[20],course[20],branch[20];
	char ch;
	FILE *p;
	p=fopen("students","a"); //in append mode
	while(1)
	{
		printf("Regdno:");
		scanf("%d",&regdno);
		fflush(stdin);
		printf("Name:");
		scanf("%s",name);
		printf("Course:");
		scanf("%s",course);
		printf("Branch:");
		scanf("%s",branch);
		printf("Semister:");
		scanf("%d",&sem);
		fprintf(p,"%d\t%s\t%s\t%s\t%d\n",
					regdno,name,course,branch,sem);
		fflush(stdin);
		printf("Wanna continue [y/n]:");
		scanf("%c",&ch);
		if(ch!='y')
			break;
	}
	fclose(p);
	return 0;
}



#include<stdio.h>
struct product
{
	int sno;
	char pname[20];
	float price;
	int qty;
	float amt;
};
int main()
{
	struct product x[50];
	int i,n;
	char ch;
	float bill;
	for(i=0;1;i++)
	{
		x[i].sno=i+1;
		printf("Name:");
		scanf("%s",x[i].pname);
		printf("Price:");
		scanf("%f",&x[i].price);
		printf("Quantity:");
		scanf("%i",&x[i].qty);
		x[i].amt=x[i].price*x[i].qty;
		fflush(stdin);
		printf("Wanna continue [y/n]:");
		scanf("%c",&ch);
		if(ch=='n')
			break;
	}
	
	n=i+1;
	
	printf("               Sree Rama Stores\n");
	printf("	   Trunk Road, Kavali-524201\n");
	printf("-----------------------------------------\n");
	printf("sno\tName\tPrice\tqty\tAmt\n");
	printf("-----------------------------------------\n");
	bill=0;
	for(i=0;i<n;i++)
	{
		printf("%i\t%s\t%.2f\t%i\t%.2f\n",
		x[i].sno,x[i].pname,x[i].price,x[i].qty,x[i].amt);
		bill=bill+x[i].amt;
	}
	printf("-----------------------------------------\n");
	printf("                             Bill %.2f\n",bill);
	printf("-----------------------------------------\n");
	return 0;
}



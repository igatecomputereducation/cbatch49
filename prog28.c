#include<stdio.h>
int main()
{
	float price,bill,dis,nbill;
	int qty;
	printf("Price:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%i",&qty);
	bill=price*qty;
	if(bill>1000)
		dis=bill*5/100;
	if(bill<=1000)
		dis=bill*2/100;
	nbill=bill-dis;
	printf("Total bill %f\n",bill);
	printf("Discount %f\n",dis);
	printf("Net bill %f",nbill);
	return 0;
}

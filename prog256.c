struct product
{
	char name[30];
	float price;
	int qty;
	float amt;
};
int main()
{
	struct product x;
	printf("Name:");
	scanf("%s",x.name);
	printf("Price:");
	scanf("%f",&x.price);
	printf("Quantity:");
	scanf("%i",&x.qty);
	x.amt=x.price*x.qty;
	printf("\n-------------------------\n");
	printf("Name %s\nPrice %f\nQuantity %i\nAmount %f",
								x.name,x.price,x.qty,x.amt);
	return 0;
}

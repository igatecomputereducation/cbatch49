struct employee
{
	char name[20];
	int sal;
	float hra,da,gross;
};
int main()
{
	struct employee x;
	printf("Name:");
	scanf("%s",x.name);
	printf("Salary:");
	scanf("%i",&x.sal);
	x.hra=(float)x.sal*12/100;
	x.da=(float)x.sal*15/100;
	x.gross=x.sal+x.hra+x.da;
	printf("\nPayslip..\n-------------------\n");
	printf("Name %s\nSalary %i\nHRA %f\nDA %f\nGross 
			salary %f",x.name,x.sal,x.hra,x.da,x.gross);
	return 0;
}

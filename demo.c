
int box(int,int,int);
int main()
{
	int bre,wid,hei,vol;
	printf("Enter 3 sides of box\n");
	scanf("%i%i%i",&bre,&wid,&hei);
	vol=box(bre,wid,hei);
	printf("Volume %i",vol);
	return 0;
}
int box(int b,int w,int h)
{
	return b*w*h;
}

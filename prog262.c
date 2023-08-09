#include<stdio.h>
struct rect
{
	int len;
	int bre;
	int area;
	int peri;	
};
void calculate(struct rect*);
int main()
{
	struct rect r;
	printf("Length:");
	scanf("%i",&r.len);
	printf("Breadth:");
	scanf("%i",&r.bre);
	calculate(&r);
	printf("Area %i\n",r.area);
	printf("Perimeter %i",r.peri);
	return 0;
}
void calculate(struct rect *p)
{
	p->area=p->len*p->bre;
	p->peri=2*(p->len+p->bre);
}

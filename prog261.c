#include<stdio.h>
struct circle
{
	int rad;
	float area;
	float cir;	
};
int main()
{
	struct circle *p;
	p=(struct circle*)malloc(sizeof(struct circle));
	printf("Radius:");
	scanf("%d",&p->rad);
	p->area=3.14*p->rad*p->rad;
	p->cir=2*3.14*p->rad;
	printf("Area %f\n",p->area);
	printf("Circumference %f",p->cir);
	free(p);
	return 0;
}

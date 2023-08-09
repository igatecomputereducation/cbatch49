#include<stdio.h>
struct bike
{
	char brand[20];
	char model[20];
	int cc;
	char color[20];
};
int main()
{
	struct bike x={"RE","Wintage",350,"Green"};
	struct bike *p=&x;
	printf("My bike my style...\n");
	printf("%s\n%s-%icc\n%s",p->brand,p->model,p->cc,p->color);
	return 0;
}

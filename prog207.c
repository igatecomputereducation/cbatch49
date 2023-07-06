#include<stdio.h>
int i=1;
int main()
{
	printf("%i\n",i);
	i++;
	if(i<=5)
		main();
	return 0;
}

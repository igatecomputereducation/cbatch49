#include<stdio.h>
#define out printf
#define in scanf
int main()
{
	int a,b;
	out("Enter 2 integers\n");
	in("%i%i",&a,&b);
	out("Sum %i\n",a+b);
	out("Subtraction %i\n",a-b);
	out("Product %i\n",a*b);
	out("Division %f",(float)a/b);
	return 0;
}

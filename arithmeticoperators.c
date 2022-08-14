#include<stdio.h>
void main()
{
	int a=10,b=5;
	printf("*** Addition ***\n");
	printf("a + b = %d\n",a+b);
	printf("*** Subtraction ***\n");
	printf("a - b = %d\n",a-b);
	printf("*** Multiplication ***\n");
	printf("a * b = %d\n",a*b);
	printf("*** Division ***\n");
	printf("a / b = %d\n",a/b);
	printf("*** Modulus ***\n");
	printf("a %% b = %d\n",a%b);// %% will remove special meaning
				   // of % in printf
}

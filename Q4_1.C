//Arithmetic and shorthand assignment operators
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=20,b=10;
	clrscr();
	printf("a+b = %d\n",a+b);
	printf("a+b = %d\n",a-b);
	printf("a+b = %d\n",a*b);
	printf("a+b = %d\n",a/b);
	printf("a+b = %d\n",a%b);
	a+=2;
	printf("a = %d\n",a);
	a+=b;
	printf("a = %d\n",a);
	a-=b;
	printf("a = %d\n",a);
	a*=b;
	printf("a = %d\n",a);
	a/=b;
	printf("a = %d\n",a);
	a%=b;
	printf("a = %d\n",a);
	getch();
}

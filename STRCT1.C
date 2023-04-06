#include<stdio.h>
#include<conio.h>
struct abc
{
	int a,b;
};

void main()
{
	struct abc x={10,20},y={30,40},z;
	clrscr();
	printf("a = %d\nb = %d\n",x.a,x.b);
	printf("a = %d\nb = %d\n",y.a,y.b);
	z.a=x.a+y.a;
	z.b=x.b+y.b;
	printf("a = %d\nb = %d\n",z.a,z.b);
	getch();
}
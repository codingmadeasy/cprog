//operators logical
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=20,b=10,c;
	clrscr();
	c=!(a>b);
	printf("c = %d\n",c);//0
	c=a<=b&&a==b;
	printf("c = %d\n",c);//0
	c=a>b||b!=a;
	printf("c = %d\n",c);//1
	getch();
}
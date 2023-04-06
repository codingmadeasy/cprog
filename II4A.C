#include<stdio.h>
#include<conio.h>
void main()
{
	auto int a=30;
	register int b=20;
	int d=40;
	void show();
	clrscr();
	printf("a=%d\nb=%d\nd=%d\n",a,b,d);
	show();
	show();
	getch();
}
extern int d;
void show()
{
	static int c=10;
	printf("c=%d\n",c);
	c++;
}
#include<stdio.h>
struct abc
{
	int a;
	struct xyz
	{
		int b;
	}k;

};
void main()
{
	struct abc l;

	clrscr();
	l.a=10;
	l.k.b=22;
	printf("%d\n%d",l.a,l.k.b);
	getch();
}
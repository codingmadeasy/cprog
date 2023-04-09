//increment decrement operators
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b;
	clrscr();
	b=a++;
	printf("a = %d\nb = %d\n",a,b);
	b=++a;
	printf("a = %d\nb = %d\n",a,b);
	b=--a;
	printf("a = %d\nb = %d\n",a,b);
	b=a--;
	printf("a = %d\nb = %d\n",a,b);
	getch();
}
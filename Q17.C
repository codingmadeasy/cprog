#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	void changeA(int*);
	void changeV(int);
	clrscr();
	printf("a=%d\n",a);
	changeV(a);
	printf("a=%d\n",a);
	changeA(&a);
	printf("a=%d",a);
	getch();
}
void changeA(int *ptr)
{
	*ptr=*ptr+10;
}
void changeV(int n)
{
	n=n+10;
}
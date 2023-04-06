#include<stdio.h>
#include<conio.h>
void main()//starting of c code
{
	int n,x;
	int show(int);
	clrscr();
	printf("Enter Number");
	scanf("%d",&n);
	x=show(n);
	printf("Sum is %d",x);
}
int show(int n)
{
	int i=1,s=0;
	while(i<=n)
	{
		s=s+i;
		i++;
	}
	return s;
}











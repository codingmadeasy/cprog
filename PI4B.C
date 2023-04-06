#include<stdio.h>
#include<conio.h>
void main()
{
	int  n,i;
	int fib(int);
	clrscr();
	printf("Enter number of terms");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",fib(i));
	}
	getch();
}
int fib(int i)
{
	if(i==1)
		return 0;
	if(i==2)
		return 1;
	else
	return fib(i-1) + fib(i-2);
}

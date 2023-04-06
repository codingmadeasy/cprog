#include<stdio.h>
#include<conio.h>
void main()
{
	int n=100,i;
	int evencheck(int);
	clrscr();

	for(i=1;i<=n;i++)
	{
		if(evencheck(i)==1)
			printf("%d\n",i);
	}
	getch();
}
int evencheck(int n)
{
	if(n%2==0)
		return 1;
	else
		return 0;
}
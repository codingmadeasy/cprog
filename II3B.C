#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[16],i=0;
	clrscr();
	printf("Enter no.");
	scanf("%d",&n);
	while(n>0)
	{
		a[i]=n%2;
		n=n/2;
		i++;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	getch();
}
//if else
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter no.");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("Even number\n");
	}
	else
	{
		printf("Odd number\n");
	}
	printf("End of Program");
	getch();
}
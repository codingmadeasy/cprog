//goto statement
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	start:
	printf("Enter number");
	scanf("%d",&a);
	if(a>0)
		goto end;
	else
		goto start;
	end:
	printf("Program ends if a is greater than zero");
	getch();
}
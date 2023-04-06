#include<stdio.h>
#include<conio.h>
void main()
{
	int  n;
	clrscr();
	start:
	printf("Press 1,2 or 3");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		printf("Welcome");
		break;
		case 2:
		printf("BYE");
		break;
		case 3:
		printf("Restart");
		goto start;
		default:
		break;
	}
	getch();
}

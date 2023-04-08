//break and continue statement
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
			continue;
		else if(i%6==0)
			break;
		else
			printf("Hello\n");

	}


	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=10;i++)
	{
		printf("i = %d\n",i);
	}
	i=1;
	while(i<=10)
	{
		printf("i = %d\n",i);
		i++;
	}
	i=1;
	do
	{
		printf("i = %d\n",i);
		i++;
	}while(i<=10);
	getch();
}

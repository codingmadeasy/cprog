//Array and pointers
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,*ptr;
	clrscr();
	ptr=&a[0];
	printf("Enter array elements\n");
	for(i=0;i<10;i++)
	{
		printf("Enter no.");
		scanf("%d",(ptr+i));
	}
	printf("Elements are\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	getch();
}
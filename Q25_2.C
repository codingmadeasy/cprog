//Array of pointers
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,*ptr[10];
	clrscr();
	printf("Enter array elements\n");
	for(i=0;i<10;i++)
	{
		printf("Enter no.");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		ptr[i]=&a[i];
	}
	printf("Elements are\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",*ptr[i]);
	}
	getch();
}
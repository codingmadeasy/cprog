//Passing array to function
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i;
	void show(int[],int);
	clrscr();
	printf("Enter array elements\n");
	for(i=0;i<10;i++)
	{
		printf("Enter no.");
		scanf("%d",&a[i]);
	}
	show(a,10);
	getch();
}
void show(int a[],int n)
{
	int i;
	printf("Elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
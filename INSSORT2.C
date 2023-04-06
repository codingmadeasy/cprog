//Insertion Sort
#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		for(j=i-1;j>=0&&a[j]>a[j+1];j--)
		{
		      t=a[j];
		      a[j]=a[j+1];
		      a[j+1]=t;
		}
	}
}
void main()
{
	int i,a[10];
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("Enter Number");
		scanf("%d",&a[i]);
	}
	insertion_sort(a,10);
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);

getch();
}        8
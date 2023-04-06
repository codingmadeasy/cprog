//Insertion Sort
#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while(j>=0&&a[j]>t)
		{
		      a[j+1]=a[j];
		      j--;
		}
		a[j+1]=t; // Inversion  (a[i],a[j])    i<j, a[i]>a[j]
	}
}
void main()
{
	int i,a[10]={100,83,5,1,11,3,0,2,53,60};
	clrscr();
	insertion_sort(a,10);
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);

getch();
}
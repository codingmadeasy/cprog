#include<stdio.h>
void sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
void parray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void main()
{
	int i,a[]={134,25,20,53,150,70,100};
	clrscr();
	sort(a,7);
	parray(a,7);
	getch();
}

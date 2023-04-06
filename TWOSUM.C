#include<stdio.h>
void sum2(int a[],int n,int k)
{
	int i,j,c=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]>=k)
			{
				printf("%d %d\n",a[i],a[j]);
				c++;
			}
		}
	}
	printf("Total pairs :: %d",c);
}
void parray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void rarray(int a[],int n)
{
	int i;
	printf("Emter array elements one by one\n");
	for(i=0;i<n;i++)
	{
		printf("Enter no.");
		scanf("%d",&a[i]);
	}
}
void main()
{
	int a[50],n;
	clrscr();
	printf("Enter size of array(not more than 50)");
	scanf("%d",&n);
	rarray(a,n);
	sum2(a,n,80);
	getch();
}

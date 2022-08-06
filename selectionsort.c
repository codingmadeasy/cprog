//Selection Sort
#include<stdio.h>
void selection_sort(int a[],int n)
{
	int i,j,t,u;
	for(i=0;i<n-1;i++)
	{
		u=i;//index of first element of unsorted list
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[u])
				u=j;//updated when
				   //element less than minimum is found
		}
		if(i!=u)//no need to swap
		{       //if element is already at correct position
			t=a[i];
			a[i]=a[u];
			a[u]=t;
		}
	}
}
void main()
{
	int a[]={12,5,8,2,1,7,3},i;
	selection_sort(a,7);
	printf("Sorted Array\n");
	for(i=0;i<7;i++)
	{
		printf("%d\n",a[i]);
	}
}


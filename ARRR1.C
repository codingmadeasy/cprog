#include<stdio.h>
#include<conio.h>
void store(int arr[],int n)
{
	int i;
	printf("Enter Array\n");
	for(i=0;i<5;i++)
	{
		printf("Enter No");
		scanf("%d",&arr[i]);
	}
}
void show(int arr[],int n)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
}
void showrev(int arr[],int n)
{
	int i;
	printf("Array in reverse order is \n");
	for(i=n-1;i>=0;i--)
	{
	     printf("%d\n",arr[i]);
	}
}
int sumarr(int arr[],int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
	{
		s=s+arr[i];
	}
	return s;
}
float avgarr(int tot,int n)
{
      return tot/(float)n;
}
int searcharr(int arr[],int n,int item)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==item)
			return i;
	}
	return -1;
}
void main()
{
	int i,a[5],k,loc;
	float avg;
	clrscr();
	store(a,5);
	printf("Enter element to be searched");
	scanf("%d",&k);
	loc=searcharr(a,5,k);
	if(loc==-1)
		printf("Element not found");
	else
		printf("Element found at %d ",loc);
	getch();
}
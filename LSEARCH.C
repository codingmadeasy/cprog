//Linear Search using C
#include<stdio.h>
#include<conio.h>
int linear_search(int a[],int n,int item)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
			return i;
	}
	return -1;
}
void main()
{
	int i,a[5]={22,5,3,15,7},k,loc;
	clrscr();
	printf("Enter element to be searched:: ");
	scanf("%d",&k);
	loc=linear_search(a,5,k);
	if(loc==-1)
		printf("Element not found");
	else
		printf("Element found at %d ",loc);
	getch();
}
  //  Best Case : O(1)     
 //Worst Case : O(n)
//Average Case : (1+2+3+4+...n)/n = (n*(n+1)/2)/n = (n+1)/2 = O(n)
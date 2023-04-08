//row wise maximum element from 2-d matrix
#include<stdio.h>
#include<conio.h>
void main()
{
	int  m,n,a[20][20],max,i,j;
	clrscr();
	printf("Enter no. of rows");
	scanf("%d",&m);
	printf("Enter no. of columns");
	scanf("%d",&n);
	printf("Enter elements of matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter number");
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		max=a[i][0];
		for(j=0;j<n;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
		printf("Maximum element of row %d is %d\n",i,max);
	}
	getch();
}
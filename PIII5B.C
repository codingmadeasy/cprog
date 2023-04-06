#include<stdio.h>
#include<conio.h>
void main()
{
	int  m,n,a[20][20],max,i,j,b[2][2]={12,2,4,6};
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
	printf("First Matrix is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Second Matrix is \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	getch();
}
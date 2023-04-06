#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3]={2,3,4,5,6,7,8,9,0},b[3][3]={12,23,34,45,3,4,5,6,7},c[3][3],i,j,p=3,q=3,m=3,n=3;
	clrscr();
 /*	printf("Enter no. of rows of first matrix");
	scanf("%d",&p);
	printf("Enter no. of columns of first matrix");
	scanf("%d",&q);
	printf("Enter no. of rows of second matrix");
	scanf("%d",&m);
	printf("Enter no. of columns of second matrix");
	scanf("%d",&n);
	if(p!=m||q!=n)
	{
		printf("Order not same");
		exit(1);
	}
	printf("Enter elements of first Matrix\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements of second Matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}*/
	printf("\nFirst Matrix is\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nSecond Matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}

	}
	printf("\nAddition Matrix is\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}


	getch();
}
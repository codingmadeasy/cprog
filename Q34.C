//Multiplying two matrix or 2-d array
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,p,q,m,n;
	clrscr();
	printf("Enter no. of rows of first matrix");
	scanf("%d",&p);
	printf("Enter no. of columns of first matrix");
	scanf("%d",&q);
	printf("Enter no. of rows of second matrix");
	scanf("%d",&m);
	printf("Enter no. of columns of second matrix");
	scanf("%d",&n);
	if(q!=m)
	{
		printf("Multiplication not possible\n");
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
	}
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
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<q;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}

	}
	printf("\nMultiplication is\n");
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
#include<stdio.h>
#include<conio.h>
void main()
{
	int  m,n,a[20][20],max,i,j;
	int (*ptr)[20];
	clrscr();
	ptr=&a[0];
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
			scanf("%d",(*(ptr+i)+j));
		}
	}
	printf("First Matrix is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(*(ptr+i)+j));
		}
		printf("\n");
	}
	getch();
}
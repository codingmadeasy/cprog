//passing 2-d array to function
#include<stdio.h>
void main()
{
	int a[3][2]={2,5,4,1,0,7};
	void show2d(int[][2],int,int);
	void read2d(int[][2],int,int);
	read2d(a,3,2);
	show2d(a,3,2);
}
void read2d(int a[][2],int p,int q)
{
	int i,j;
	for (i=0;i<p;i++)
	{
		for (j=0;j<q;j++)
		{
			printf("Enter no.");
			scanf("%d",&a[i][j]);
		}
	}
}
void show2d(int a[][2],int p,int q)
{
	int i,j;
	for (i=0;i<p;i++)
	{
		for (j=0;j<q;j++)

		{
		printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
#include<stdio.h>
#include<conio.h>
void insert_beg(int a[],int *n,int item)
{
	int i;
	for(i=*n;i>=1;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=item;
	*n=*n+1;
}
void insert_loc(int a[],int *n,int item,int loc)
{
	int i;
	for(i=*n;i>=(loc+1);i--)
	{
		a[i]=a[i-1];
	}
	a[loc]=item;
	*n=*n+1;
}
void insert_end(int a[],int *n,int item)
{
	a[*n]=item;
	*n=*n+1;
}
int del_beg(int a[],int *n)
{
	int i,item;
	item=a[0];
	for(i=0;i<=*n-2;i++)
	{
		a[i]=a[i+1];
	}
	*n=*n-1;
	return item;
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void count(int a[],int n,int *pos,int *neg,int *z)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]>0){ *pos=*pos+1;}
		else if(a[i]<0){ *neg=*neg+1; }
		else{ *z=*z+1; }
	}
}
void main()
{
	int a[100],i,k,loc,n,item,p=0,q=0,r=0;
	printf("Enter number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number");
		scanf("%d",&a[i]);
	}
	while(1)
	{

		printf("Press 1 to insert at beg\n");
		printf("Press 2 to insert at end\n");
		printf("Press 3 to insert at location\n");
		printf("Press 4 to del at beg\n");
		printf("Press 5 to del at end\n");
		printf("Press 6 to del at loc\n");
		printf("Press 7 to show array\n");
		printf("Press 8 to exit\n");
		scanf("%d",&k);
		switch(k)
		{
			case 1: printf("Enter item to be inserted");
			scanf("%d",&item);
			insert_beg(a,&n,item);
			break;
			case 2:
			printf("Enter item to be inserted");
			scanf("%d",&item);
			insert_end(a,&n,item);
			break;
			case 3:
			printf("Enter item to be inserted");
			scanf("%d",&item);
			printf("Enter location");
			scanf("%d",&loc);
			insert_loc(a,&n,item,loc);
			break;
			case 4:
			item=del_beg(a,&n);
			printf("Item deleted is %d\n",item);
			case 5:
			case 6:
			count(a,n,&p,&q,&r);
			printf("%d%d%d",p,q,r);
			break;
			case 7:
			display(a,n);
			break;
			case 8:
			exit(1);
			default:
			printf("Wrong Input");
		}
	}
}
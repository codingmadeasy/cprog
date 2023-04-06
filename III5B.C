#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],min,max,i;
	clrscr();
	printf("Enter array elements\n");
	for(i=0;i<10;i++)
	{
		printf("Enter no.");
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("Min element = %d\nMax element = %d",min,max);
	getch();
}
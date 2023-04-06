#include<stdio.h>
#include<alloc.h>
void main()
{
	int *ptr,n,i;
	clrscr();
	printf("Enter no. of elements");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory not available");
		exit(1);
	}
	n=n+2;
	ptr=(int*)realloc(ptr,n*sizeof(int));
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter no.");
		scanf("%d",(ptr+i));
	}

	printf("Array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	free(ptr);
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int k;
	FILE *fptr;
	clrscr();
	fptr=fopen("myfile1.dat","w");
	if(fptr==NULL)
	{
		exit(1);
	}
	printf("Enter number");
	scanf("%d",&k);
	putw(k,fptr);
	fclose(fptr);
	getch();
}
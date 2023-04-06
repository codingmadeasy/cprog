#include<stdio.h>
void main()
{
	FILE *fptr;
	int a=12,b;
	clrscr();
	fptr=fopen("one.dat","w");
	putw(a,fptr);
	fclose(fptr);
	fptr=fopen("one.dat","r");
	b=getw(fptr);
	printf("%d",b);
}
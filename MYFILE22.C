#include<stdio.h>
#include<conio.h>
void main()
{
	int l;
	FILE *fptr;
	clrscr();
	fptr=fopen("myfile1.dat","r");
	if(fptr==NULL)
	{
		exit(1);
	}
	l=getw(fptr);
	printf("valu=%d",l);
	fclose(fptr);
	getch();
}
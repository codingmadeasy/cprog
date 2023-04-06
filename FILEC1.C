#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fptr;
	char ch;
	clrscr();
	fptr=fopen("newf.txt","w");
	if(fptr==NULL)
	{
		exit(1);
	}
	ch=getche();
	while(ch!='0')
	{
		putc(ch,fptr);
		fflush(stdin);
		ch=getche();
	}
	putc(EOF,fptr);
	close(fptr);
}
#include<stdio.h>
#include<conio.h>
int mystrlen(char str[])
{

}
void main()
{
	char str[20];
	int l;
	clrscr();
	puts("Enter Name");
	gets(str);
	l=mystrlen(str);
	printf("Length is %d",l);
	getch();
}
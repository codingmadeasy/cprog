#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[20]={"Hello"},str2[20];
	void mystrcpy(char[],char[]);
	clrscr();
	mystrcpy(str2,str1);
	puts(str1);
	puts(str2);
	getch();
}
void mystrcpy(char str2[],char str1[])
{
	int i;
	for(i=0;str1[i]!=NULL;i++)
	{
		str2[i]=str1[i];
	}
	str2[i]=NULL;
}
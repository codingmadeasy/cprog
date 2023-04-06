#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[30],str2[30];
	int l;
	clrscr();
	puts("Enter string");
	gets(str1);
	strupr(str1);
	puts(str1);
	strlwr(str1);
	puts(str1);
	l=strlen(str1);
	printf("Length is %d\n",l);
	strcpy(str2,str1);
	puts(str2);
	getch();
}
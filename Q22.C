//String handling functions
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
	strrev(str1);
	printf("Reversed string is \n");
	puts(str1);
	strcat(str1,"1234");
	if(strcmp(str1,str2)==0)
		printf("Equal\n");
	else
		printf("Not Equal\n");
	puts(str1);
	getch();
}
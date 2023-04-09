//operators relational
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=20,b=10,c;
	clrscr();
	c=a>b;
	printf("c = %d\n",c);//true 1
	c=a<=b;
	printf("c = %d\n",c);//false 0
	c=a==b;
	printf("c = %d\n",c);//false 0
	c=a!=b;
	printf("c = %d\n",c);//1
	c=a>=b;
	printf("c = %d\n",c);//1
	c=a<b;
	printf("c = %d\n",c);//0
	getch();
}
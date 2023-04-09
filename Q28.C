//operators bitwise
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=139,b=7,c;
	clrscr();
	c=a|b;
	printf("c = %d\n",c);//143
	c=a&b;
	printf("c = %d\n",c);//3
	c=a^b;
	printf("c = %d\n",c);//140
	c=~a;
	printf("c = %d\n",c);//-140
	c=a>>2;
	printf("c = %d\n",c);//34
	c=b<<4;
	printf("c = %d\n",c);//112
	getch();
}
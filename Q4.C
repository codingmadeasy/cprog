//operators
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=20,b=10,c;
	clrscr();
	c=a+b;
	printf("c=%d\n",c);
	c=a-b;
	printf("c=%d\n",c);
	c=a*b;
	printf("c=%d\n",c);
	c=a/b;
	printf("c=%d\n",c);
	c=a%b;
	printf("c=%d\n",c);
	c=a>b;
	printf("c=%d\n",c);
	c=a==b;
	printf("c=%d\n",c);
	c=(a<=100)&&(b!=20);
	printf("c=%d\n",c);
	c=!(a>=5)||(b==10);
	printf("c=%d\n",c);
	getch();
}
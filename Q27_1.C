//structure
#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int roll;
};
void main()
{
	struct student s={"Amit",101};
	clrscr();
	printf("Name is %s\n",s.name);
	printf("Roll no. is %d\n",s.roll);
	getch();
}
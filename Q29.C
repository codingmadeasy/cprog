//pointers and structure
#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int roll;
};
void main()
{
	struct student s={"Amit",101},*ptr;
	clrscr();
	ptr=&s;
	printf("Name is %s\n",ptr->name);//(*ptr).name
	printf("Roll no. is %d\n",ptr->roll);//(*ptr.roll)
	getch();
}
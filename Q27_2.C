//union
#include<stdio.h>
#include<conio.h>
union student
{
	char name[20];
	int roll;
};
void main()
{
	union student s;
	clrscr();
	strcpy(s.name,"Amit");
	printf("Name is %s\n",s.name);
	s.roll=101;
	printf("Roll no. is %d\n",s.roll);
	getch();
}
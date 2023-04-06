#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int roll;
};
void main()
{
	struct student s[3]={{"Amit",101},{"Rahul",202},{"Sumit",303}};
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("Name = %s\n",s[i].name);
		printf("Roll No. = %d\n",s[i].roll);
	}
	getch();
}
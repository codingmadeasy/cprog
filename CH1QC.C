/*Q: (c) If the marks obtained by a student in five different subjects are input through the keyboard,
write a program to find out the aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student in each subject is 100.*/


#include<stdio.h>
#include<conio.h>
void main()
{
	double m1,m2,m3,m4,m5,tot,per;
	clrscr();
	printf("Enter Marks in 5 Subjects out of 100 each\n");
	printf("Enter Marks in Subject 1\n");
	scanf("%lf",&m1);
	printf("Enter Marks in Subject 2\n");
	scanf("%lf",&m2);
	printf("Enter Marks in Subject 3\n");
	scanf("%lf",&m3);
	printf("Enter Marks in Subject 4\n");
	scanf("%lf",&m4);
	printf("Enter Marks in Subject 5\n");
	scanf("%lf",&m5);
	tot=m1+m2+m3+m4+m5;
	per=tot/5;
	printf("Total Marks = %lf\n",tot);
	printf("Percentage = %lf",per);
	getch();
}
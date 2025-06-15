/*(a) Ramesh’s basic salary is input through the keyboard. His dearness 
allowance is 40% of basic salary, and house rent allowance is 20% of 
basic salary. Write a program to calculate his gross salary.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	double b_sal,da,hra,g_sal;
	clrscr();
	printf("Enter basic salary");
	scanf("%lf",&b_sal);
	hra=0.20*b_sal;//House Rent Allowance
	da=0.40*b_sal;//Dearness Allowance
	g_sal=b_sal+da+hra;//Gross Salary
	printf("Gross Salary = %lf",g_sal);
	getch();
}
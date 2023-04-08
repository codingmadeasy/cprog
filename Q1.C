//Structure of a C program
#include<stdio.h>
#include<conio.h>
#define PI 3.14
double ar; //global variable
void main() //entry of all c programs
{
	double radius;//local variable
	double area(double);
	clrscr();
	printf("Enter Radius");
	scanf("%lf",&radius);
	ar=area(radius);
	printf("Area is %lf",ar);
	getch();
}
double area(double r)// user defined function
{
	return PI*r*r;
}
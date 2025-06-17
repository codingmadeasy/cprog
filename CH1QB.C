/*Q: (b) The distance between two cities (in km.) is input through the keyboard.
Write a program to convert and print this distance in meters, feet, inches and centimeters.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	double dkm,dm,dcm,dft,din;
	clrscr();
	printf("Enter Distance in KM");
	scanf("%lf",&dkm);
	dm=dkm*1000;
	dcm=dm*100;
	din=dcm*0.3937;
	dft=dcm*0.0328;
	printf("Distance in CM = %lf\n",dcm);
	printf("Distance in Inches = %lf\n",din);
	printf("Distance in Feet = %lf\n",dft);
	printf("Distance in Meter = %lf",dm);
	getch();
}
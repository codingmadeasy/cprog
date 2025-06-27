/* C Programming Solved Problems Let us C Yashwant Kanitkar Chapter 2 
If lengths of three sides of a triangle are input through the keyboard,
write a program to find the area of the triangle.*/

#include <stdio.h>
#include<math.h>
int main()
{
    double a, b, c, s, area;
    printf("Enter the length of side a:\n");
    scanf("%lf", &a);
    printf("Enter the length of side b:\n");
    scanf("%lf", &b);
    printf("Enter the length of side c:\n");
    scanf("%lf", &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is: %lf", area);
    return 0;
}

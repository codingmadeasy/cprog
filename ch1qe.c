/*Q: (e) The length and breadth of a rectangle and radius of a circle are input through the keyboard.
Write a program to calculate the area and perimeter of the rectangle, and the area and circumference of the circle.*/
#include <stdio.h>
int main()
{
    double l,b,arearec,perirec,r,areacir,circumcir;
    printf("Enter Length & Breadth of Rectangle\n");
    scanf("%lf%lf",&l,&b);
    printf("Enter Radius of Circle\n");
    scanf("%lf",&r);
    arearec=l*b;
    perirec=2*(l+b);
    areacir=3.14*r*r;
    circumcir=2*3.14*r;
    printf("Area of Rectangle is %lf\n",arearec);
    printf("Perimeter of Rectangle is %lf\n",perirec);
    printf("Area of Circle is %lf\n",areacir);
    printf("Circumference of Circle is %lf\n",circumcir);
    return 0;
}

/* Write a program to receive Cartesian co-ordinates (x, y) of a point
and convert them into polar co-ordinates (r,p ).
Hint: r = sqrt ( x^2 + y^2 ) and p = tan-1 ( y / x )*/

#include <stdio.h>
#include<math.h>
int main()
{
    double x,y,r,p;
    printf("Enter Cartesian Co-ordinates x,y :\n");
    scanf("%lf%lf", &x,&y);
    r=sqrt(x*x+y*y);
    p=atan(y/x);
    printf("Polar Co-ordinates are ( %lf , %lf )",r,p);
    return 0;
}

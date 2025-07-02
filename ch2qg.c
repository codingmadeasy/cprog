/* C Programming Solved Problems Let us C Yashwant Kanitkar Chapter 2 
Q:(g) If value of an angle is input through the keyboard,
write a program to print all its Trigonometric ratios.
*/
#include<stdio.h>
#include<math.h>
#define PI 3.141592
int main()
{
    double angle_deg, angle_rad,sin_val, cos_val, tan_val, cosec_val, sec_val, cot_val;
    printf("Enter angle in degrees:\n");
    scanf("%lf", &angle_deg);
    angle_rad = angle_deg * (PI / 180.0);
    sin_val = sin(angle_rad);
    cos_val = cos(angle_rad);
    tan_val = tan(angle_rad);
    printf("Trigonometric Ratios for %lf degrees:\n", angle_deg);
    printf("sin(%lf) = %lf\n", angle_deg, sin_val);
    printf("cos(%lf) = %lf\n", angle_deg, cos_val);
    
    if (fabs(cos_val) < 1e-6)
        printf("tan(%lf) = Undefined\n", angle_deg);
    else
        printf("tan(%lf) = %lf\n", angle_deg, tan_val);
        
    if (fabs(sin_val) < 1e-6)
        printf("cosec(%lf) = Undefined\n", angle_deg);
    else
        printf("cosec(%lf) = %lf\n", angle_deg, 1.0 / sin_val);

    if (fabs(cos_val) < 1e-6)
        printf("sec(%lf) = Undefined\n", angle_deg);
    else
        printf("sec(%lf) = %lf\n", angle_deg, 1.0 / cos_val);

    if (fabs(tan_val) < 1e-6)
        printf("cot(%lf) = Undefined\n", angle_deg);
    else
        printf("cot(%lf) = %lf\n", angle_deg, 1.0 / tan_val);

    return 0;
}

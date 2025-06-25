/*Q: (d) Temperature of a city in Fahrenheit degrees is input through the keyboard.
    Write a program to convert this temperature into Centigrade degrees.*/
#include <stdio.h>
int main()
{
    double f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &f);
    c=(f - 32) * 5.0 / 9.0;
    printf("%lf Fahrenheit is equal to %lf Celsius\n", f, c);
    return 0;
}

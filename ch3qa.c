/*C Programming Solved Problems Let us C Yashwant Kanitkar Chapter 3
Q :(a)If cost price and selling price of an item are input through the 
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit he 
made or loss he incurred. 
*/
#include <stdio.h>

int main() 
{
    double cp,sp,pol=0;
    printf("Enter the Cost Price\n");
    scanf("%lf", &cp);
    printf("Enter the Selling Price\n");
    scanf("%lf", &sp);
    pol=sp>cp?sp-cp:cp-sp;
    if(pol>0)
        printf("Profit is %lf",pol);
    else if(pol<0)
        printf("Loss is %lf",pol);
    else
        printf("No Profit No Loss");
    return 0;
}

/* C Programming Solved Problems Let us C Yashwant Kanitkar Chapter 2 
Q:(h) Two numbers are input through the keyboard into two locations C 
and D. Write a program to interchange the contents of C and D. 
*/
#include<stdio.h>
int main()
{
    int C, D, t;
    printf("Enter value of C: ");
    scanf("%d", &C);
    printf("Enter value of D: ");
    scanf("%d", &D);
    printf("\nBefore swapping: C = %d, D = %d\n", C, D);
    t = C;
    C = D;
    D = t;
    printf("After swapping:  C = %d, D = %d\n", C, D);
    return 0;
}

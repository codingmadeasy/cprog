/*C Programming Solved Problems Let us C Yashwant Kanitkar Chapter 2

If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits. (Hint: Use the modulus 
operator ‘%’) */
#include <stdio.h>
int main()
{
    long int n;
    int s=0,r;
    printf("Enter Number\n");
    scanf("%ld",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("Sum of Digits is %d",s);
    return 0;
}

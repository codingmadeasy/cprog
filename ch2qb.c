/* C Programming Solved Problems Let us C Yashwant Kanitkar Chapter 2
Q:(b)If a five-digit number is input through the keyboard, write a 
program to reverse the number. */
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
        s=s*10+r;
        n=n/10;
    }
    printf("Reverse of Number is %d",s);
    return 0;
}

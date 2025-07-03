/*C Programming Solved Problems
Let us C Yashwant Kanitkar Chapter 3
Q: (b) Any integer is input through the keyboard.
Write a program to find 
out whether it is an odd number or even number. 
*/
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter an Integer\n");
    scanf("%d",&n);
    if(n%2==0)
        printf("Even Number");
    else
        printf("Odd Number");
    return 0;
}

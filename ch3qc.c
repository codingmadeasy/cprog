/* C Programming Solved Problems Let us C Yashwant Kanitkar Chapter 3 
Q:(c) Any year is input through the keyboard. Write a program to 
determine whether the year is a leap year or not. */
#include <stdio.h>
int main()
{
    unsigned int y;
    printf("Enter Year");
    scanf("%u",&y);
    (y%4==0&&y%100!=0)||(y%400==0)?printf("Leap Year"):printf("Not Leap Year");
    return 0;
}

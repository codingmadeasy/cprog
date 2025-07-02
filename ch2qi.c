/* C Programming Solved Problems Let us C Yashwant Kanitkar Chapter 2 
Q:(i) Consider a currency system in which there are notes of seven  denominations,
namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If  a sum of Rs. N is entered through the keyboard, write a program to 
compute the smallest number of notes that will combine to give Rs. N. 
*/
#include<stdio.h>
int main()
{
    int s=0,a[6]={1,2,5,10,50,100},n;
    int i;
    printf("Enter Total Amount :\n");
    scanf("%d",&n);
    for(i=5;i>=0;i--)
    {
        s=s+n/a[i];
        n=n%a[i];
    }
    printf("Total Notes : %d",s);
    return 0;
}

/*According to the Gregorian calendar, it was Monday on the date 
01/01/01. If any year is input through the keyboard write a program 
to find out what is the day on 1st January of this year. */
#include <stdio.h>
int isLeapYear(int year)
{
    if ((year%4==0&&year%100!=0)||(year%400==0))
        return 1;
    else
        return 0;
}
int main()
{
    int i,year,dayIndex=0;//0 for monday
    int daysInYear;
    char *days[]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    printf("Enter the year: ");
    scanf("%d", &year);
    for (i=1;i<year;i++)
    {
        if (isLeapYear(i))
            dayIndex+=366;//if leap year add 1 extra day
        else
            dayIndex+=365;
    }
    dayIndex=dayIndex%7;//remainder for day number
    printf("1st January of year %d is a %s.\n", year, days[dayIndex]);
    return 0;
}

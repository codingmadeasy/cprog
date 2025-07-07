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
    int year,dayIndex=0;//0 for monday
    int daysInYear;
    char *days[]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    printf("Enter the year: ");
    scanf("%d", &year);
    for (int y = 1; y < year; y++)
    {
        if (isLeapYear(y))
            dayIndex+=366;//if leap year add 1 extra day
        else
            dayIndex+=365;
    }
    dayIndex=dayIndex%7;//remainder for day number
    printf("1st January of year %d is a %s.\n", year, days[dayIndex]);
    return 0;
}

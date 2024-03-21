#include <iostream>
#include <iomanip>
using namespace std;
/*
Problem #07
write a program to print a month calendar.
*/

short readYear()
{
    short number = 0;
    cout << "Enter a year: ";
    cin >> number;
    return number;
}
short readMonth()
{
    short number = 0;
    cout << "Enter a month: ";
    cin >> number;
    return number;
}
bool isLeapYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
short numberOfDaysInAMonth(short year, short month)
{

    if (month <= 0 || month > 12)
        return 0;

    int numberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2) ? (isLeapYear(year) ? 29 : 28) : numberOfDays[month - 1];
}
string monthName(short monthN)
{
    string arr[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    return arr[monthN - 1];
}
short dayOfWeekOrder(short day, short month, short year)
{
    short a = (14 - month) / 12;
    short y = year - a;
    short m = month + (12 * a) - 2;
    // gregorian calendar
    return (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

void printMonthCalendar(short year, short month)
{
    // number of days in a month (28/29/30/31 ??)
    short numberOfDays = numberOfDaysInAMonth(year, month);
    // what day is it?
    int current = dayOfWeekOrder(1, month, year);

    // current month name
    printf("\n  _______________%s_______________\n\n", monthName(month).c_str());
    // print the columns
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    // print appropriate spaces
    short i;
    for (i = 0; i < current; i++)
        printf("     ");

    // print days number
    for (short j = 1; j <= numberOfDays; j++)
    {
        printf("%5d", j);

        if (++i == 7)
        {
            i = 0;
            printf("\n");
        }
    }
    printf("\n  _____________________________________\n");
}

int main()
{

    short year = readYear();
    short month = readMonth();
    printMonthCalendar(year, month);

    return 0;
}
#include <iostream>
using namespace std;
/*
Problem# 06:
write a program to print number of: Days in a certain month.
*** only two lines of code!
*/

short readYear()
{
    short number = 0;
    cout << "Enter a year to check: ";
    cin >> number;
    return number;
}

short readMonth()
{
    short number = 0;
    cout << "Enter a month to check: ";
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

int main()
{

    short year = readYear();
    short month = readMonth();

    cout << "Number of days in month [" << month << "] : " << numberOfDaysInAMonth(year, month) << endl;

    return 0;
}
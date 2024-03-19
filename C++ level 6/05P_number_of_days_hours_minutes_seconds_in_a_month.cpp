#include <iostream>
using namespace std;
/*
Problem# 05:
write a program to print number of: Days, Hours, Minutes, Seconds in a certain month.
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
    if (month == 2)
    {
        return isLeapYear(year) ? 29 : 28;
    }
    else if (month % 2 != 0)
        return 31;
    else
        return 30;
}

short numberOfHoursInAMonth(short year, short month)
{
    return numberOfDaysInAMonth(year, month) * 24;
}

int numberOfMintuesInAMonth(short year, short month)
{
    return numberOfHoursInAMonth(year, month) * 60;
}

int numberOfSecondsInAMonth(short year, short month)
{
    return numberOfMintuesInAMonth(year, month) * 60;
}

int main()
{

    short year = readYear();
    short month = readMonth();

    cout << "Number of days in month [" << month << "] : " << numberOfDaysInAMonth(year, month) << endl;
    cout << "Number of hours in month [" << month << "] : " << numberOfHoursInAMonth(year, month) << endl;
    cout << "Number of mintues in month [" << month << "] : " << numberOfMintuesInAMonth(year, month) << endl;
    cout << "Number of seconds in month [" << month << "] : " << numberOfSecondsInAMonth(year, month) << endl;

    return 0;
}
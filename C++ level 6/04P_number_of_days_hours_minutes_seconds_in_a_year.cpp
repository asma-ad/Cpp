#include <iostream>
using namespace std;
/*
Problem# 04:
write a program to print number of: Days, Hours, Minutes, Seconds in a certain year.
*/

short readYear()
{
    short number = 0;
    cout << "Enter a year to check: ";
    cin >> number;
    return number;
}

bool isLeapYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short numberOfDaysInAYear(short year)
{
    return isLeapYear(year) ? 366 : 365;
}

short numberOfHoursInAYear(short year)
{
    return numberOfDaysInAYear(year) * 24;
}

int numberOfMintuesInAYear(short year)
{
    return numberOfHoursInAYear(year) * 60;
}

int numberOfSecondsInAYear(short year)
{
    return numberOfMintuesInAYear(year) * 60;
}

int main()
{
    short year = readYear();

    cout << "Number of days in year [" << year << "] : " << numberOfDaysInAYear(year) << endl;
    cout << "Number of hours in year [" << year << "] : " << numberOfHoursInAYear(year) << endl;
    cout << "Number of mintues in year [" << year << "] : " << numberOfMintuesInAYear(year) << endl;
    cout << "Number of seconds in year [" << year << "] : " << numberOfSecondsInAYear(year) << endl;

    return 0;
}
#include <iostream>
using namespace std;
/*
Problem# 03:
write a program to check if year is a leap year or not!
** One line of code
*/

short readNumber()
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

int main()
{
    short year = readNumber();

    if (isLeapYear(year))
        cout << "\nYes, year [ " << year << " ] is a leap year.\n";
    else
        cout << "\nNo, year [ " << year << " ] is not a leap year.\n";

    return 0;
}
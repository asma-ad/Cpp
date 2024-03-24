#include <iostream>
using namespace std;
/*
Problem #10
write a program to print total days from the beginning of a year.
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
short readDay()
{
    short number = 0;
    cout << "Enter a day: ";
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

short numberOfDaysFromTheBeginningOfTheYear(short day, short month, short year)
{
    short total = 0;
    for (short i = 1; i < month; i++)
    {
        total += numberOfDaysInAMonth(year, i);
    }
    return (total + day);
}

int main()
{

    short year = readYear();
    short month = readMonth();
    short day = readDay();

    cout << "\nNumber of days from the beginning of the year is: "
         << numberOfDaysFromTheBeginningOfTheYear(day, month, year);

    return 0;
}
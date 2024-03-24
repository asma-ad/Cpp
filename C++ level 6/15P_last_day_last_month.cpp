#include <iostream>
using namespace std;
/*
Problem #15
write a program to read and check:
- if it is the last day in the month
- if it is the last month in the year
*/

struct sDate
{
    short days;
    short months;
    short year;
};
sDate readFullDate()
{
    sDate date;
    cout << "Enter a year: ";
    cin >> date.year;
    cout << "Enter a month: ";
    cin >> date.months;
    cout << "Enter a day: ";
    cin >> date.days;

    return date;
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
bool isLastMonthInTheYear(short month)
{
    return (month == 12);
}
bool isLastDayInTheMonth(sDate date)
{
    return (date.days == numberOfDaysInAMonth(date.year, date.months));
}

int main()
{
    cout << "=====================================\n";
    cout << "      Last day, Last month\n";
    cout << "=====================================\n";

    sDate date = readFullDate();

    if (isLastDayInTheMonth(date))
        cout << "Yes, the day is last day in the month!\n";
    else
        cout << "No, the day is NOT last day in the month!\n";

    if (isLastMonthInTheYear(date.months))
        cout << "Yes, the month is last month in the year!\n";
    else
        cout << "No, the month is NOT last month in the year!\n";

    return 0;
}
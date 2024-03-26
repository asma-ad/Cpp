#include <iostream>
using namespace std;
/*
Problem #16
write a program to read and make a function to increase date y one day.
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
    do
    {
        cout << "Enter a day: ";
        cin >> date.days;
    } while (date.days > 31);

    do
    {
        cout << "Enter a month: ";
        cin >> date.months;
    } while (date.months > 12);

    do
    {
        cout << "Enter a year: ";
        cin >> date.year;
    } while (date.year < 1);

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
sDate increaseDateByOneDay(sDate date)
{
    sDate newDate = date;
    // Last date in the year 31/12
    if (isLastMonthInTheYear(date.months) && isLastDayInTheMonth(date))
    {
        newDate.months = 1;
        newDate.days = 1;
        newDate.year += 1;

        return newDate;
    }
    // last day in a month
    else if (date.days == numberOfDaysInAMonth(date.year, date.months))
    {
        newDate.months += 1;
        newDate.days = 1;

        return newDate;
    }
    // else add only a day
    newDate.days++;
    return newDate;
}

int main()
{
    sDate fullDate = readFullDate();

    sDate date = increaseDateByOneDay(fullDate);
    cout << "\nDate after adding one day : "
         << date.days << "/" << date.months << "/" << date.year << endl;

    // system("pause");

    return 0;
}
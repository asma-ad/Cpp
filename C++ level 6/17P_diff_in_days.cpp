#include <iostream>
using namespace std;
/*
Problem #17
write a program to read (date 1) and (date 2) then make a function to calculate the difference in days.

** (date 1) should be less than (date 2)
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

bool isDateOneBeforeDateTwo(sDate dateOne, sDate dateTwo)
{
    return (dateOne.year < dateTwo.year) ? true : ((dateOne.year == dateTwo.year) ? (dateOne.months < dateTwo.months ? true : (dateOne.months == dateTwo.months ? dateOne.days < dateTwo.days : false)) : false);
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
    // is last day in month
    if (isLastDayInTheMonth(date))
    {
        // is Last date in the year 31/12
        if (isLastMonthInTheYear(date.months))
        {
            date.months = 1;
            date.days = 1;
            date.year++;
        }
        else
        {
            date.days = 1;
            date.months++;
        }
    }
    // it's not last day in month not last month, just add a day
    else
        date.days++;
    return date;
}
short getDifferenceInDays(sDate date1, sDate date2, bool includeEndDay = false)
{
    short days = 0;
    // loop while date1 is before date2
    while (isDateOneBeforeDateTwo(date1, date2))
    {
        // counter + 1
        days++;
        // add a day to date1
        date1 = increaseDateByOneDay(date1);
    }
    // if includeEndDay is true add a day then return days counter, otherwise return only days counter
    return includeEndDay ? ++days : days;
}

int main()
{
    sDate date1 = readFullDate();
    sDate date2 = readFullDate();

    cout << "\nDifference is : " << getDifferenceInDays(date1, date2) << " day(s).";
    cout << "\nDifference (including end day) is : " << getDifferenceInDays(date1, date2, true) << " day(s).";

    return 0;
}
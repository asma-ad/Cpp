#pragma warning(disable : 4996)
#include <iostream>
#include <ctime>
using namespace std;
/*
Problem#18
write a program to calculate your age in days.
*/

struct sDate
{
    short days;
    short month;
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
        cin >> date.month;
    } while (date.month > 12);

    do
    {
        cout << "Enter a year: ";
        cin >> date.year;
    } while (date.year < 1);

    return date;
}

bool isDateOneBeforeDateTwo(sDate dateOne, sDate dateTwo)
{
    return (dateOne.year < dateTwo.year) ? true : ((dateOne.year == dateTwo.year) ? (dateOne.month < dateTwo.month ? true : (dateOne.month == dateTwo.month ? dateOne.days < dateTwo.days : false)) : false);
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
    return (date.days == numberOfDaysInAMonth(date.year, date.month));
}
sDate increaseDateByOneDay(sDate date)
{
    // is last day in month
    if (isLastDayInTheMonth(date))
    {
        // is Last date in the year 31/12
        if (isLastMonthInTheYear(date.month))
        {
            date.month = 1;
            date.days = 1;
            date.year++;
        }
        else
        {
            date.days = 1;
            date.month++;
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
sDate getSystemDate()
{
    sDate Date;

    time_t t = time(0);      // get current time
    tm *now = localtime(&t); // convert to local time structure

    // get today's date
    Date.year = now->tm_year + 1900;
    Date.month = now->tm_mon + 1;
    Date.days = now->tm_mday;

    return Date;
}

int main()
{
    cout << "\nEnter your date of birth, please :\n";
    sDate ageDate = readFullDate();

    // get today's date
    sDate todayDate = getSystemDate();
    // get age in days by calculate the diffence in days between today and date of birth.
    cout << "\nYour age is : "
         << getDifferenceInDays(ageDate, todayDate, true) << " day(s).\n";

    system("pause>0");
    return 0;
}
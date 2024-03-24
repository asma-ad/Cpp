#include <iostream>
using namespace std;
/*
Problem #11
write a program to print total days from the beginning of a year.
Then, take the total days and convert them back to date.
*/

struct sDate
{
    short days;
    short months;
    short year;
};
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

sDate getDateFromDayOrderInYear(short dayOrderInYear, short year)
{
    // Declare a structure to store the date
    sDate date;
    // Initialize variable to hold the remaining days
    short remainderDays = dayOrderInYear;
    // Initialize variable to hold days in the current month
    short monthDays = 0;
    // set the year
    date.year = year;
    // Initialize the month to 1 (Jan)
    date.months = 1;

    // Loop until we find the correct date
    while (true)
    {
        // get the total days in the current month
        monthDays = numberOfDaysInAMonth(year, date.months);
        // If the remaining days are greater than the days in the current month
        if (remainderDays > monthDays)
        {
            // Subtract the days in the current month from the remaining days
            remainderDays -= monthDays;
            // move to the next month
            date.months++;
        }
        else
        {
            // If the remaining days are less than or equal to the days in the current month,  set the day to the remaining days and exit the loop
            date.days = remainderDays;
            break;
        }
    }
    // Return the calculated date
    return date;
}

int main()
{

    short year = readYear();
    short month = readMonth();
    short day = readDay();
    short totalDaysOfTheYear = numberOfDaysFromTheBeginningOfTheYear(day, month, year);

    cout << "\nNumber of days from the beginning of the year is: "
         << totalDaysOfTheYear;

    sDate date;
    date = getDateFromDayOrderInYear(totalDaysOfTheYear, year);
    cout << "\nDate for [" << totalDaysOfTheYear << "] is : ";
    cout << date.days << "/" << date.months << "/" << date.year << endl;

    return 0;
}
#include <iostream>
using namespace std;
/*
Problem #12
write a program to read a date and read how many days to add to it,
then print the result on the screen.
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
short readDaysToAdd()
{
    short number = 0;
    cout << "How many days you want to add : ";
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
sDate addDaysToDate(sDate date, short daysToAdd)
{
    // add days to the total days of the date
    short remainderDays = daysToAdd + numberOfDaysFromTheBeginningOfTheYear(date.days, date.months, date.year);
    // days in current month
    short monthDays = 0;
    // set month to 1
    date.months = 1;

    while (true)
    {
        // get the total days in the current month
        monthDays = numberOfDaysInAMonth(date.year, date.months);
        // If the remaining days are greater than the days in the current month
        if (remainderDays > monthDays)
        {
            // substruc the days in the current month from the remaining days
            remainderDays -= monthDays;
            // move to the next month
            date.months++;

            // if the current month is the last month (december)
            if (date.months > 12)
            {
                // set the current month to 1 (Jan)
                date.months = 1;
                // move to the next year
                date.year++;
            }
        }
        // If the remaining days are less than or equal to the days in the current month,  set the day to the remaining days and exit the loop
        else
        {
            date.days = remainderDays;
            break;
        }
    }

    return date;
}

int main()
{

    sDate fullDate = readFullDate();
    short daysToAdd = readDaysToAdd();

    sDate date = addDaysToDate(fullDate, daysToAdd);
    cout << "\nDate after adding [" << daysToAdd << "] days is : "
         << date.days << "/" << date.months << "/" << date.year << endl;

    return 0;
}
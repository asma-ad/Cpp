#include <iostream>
using namespace std;
/*
Problem #07
write a program to read a date, and print the day name of week.
20/9/2022 ==> Tuesday
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

short dayOfWeekOrder(short day, short month, short year)
{
    short a = (14 - month) / 12;
    short y = year - a;
    short m = month + (12 * a) - 2;
    // gregorian calendar
    return (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string dayName(short dayOrder)
{
    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Satday"};
    return days[dayOrder];
}

int main()
{
    short year = readYear();
    short month = readMonth();
    short day = readDay();
    short dayOrder = dayOfWeekOrder(day, month, year);

    cout << "Date       :" << day << "/" << month << "/" << year << endl;
    cout << "Day order  :" << dayOrder << endl;
    cout << "Day name  :" << dayName(dayOrder) << endl;

    return 0;
}
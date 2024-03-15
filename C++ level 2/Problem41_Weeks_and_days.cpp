#include <iostream>
using namespace std;
/*
Problem #41
Write a program to read a NumberOfHours,
and calculates the number of weeks, and days included in that number.
*/

float readPositiveNumber(string message)
{
    float number = 0;

    do
    {
        cout << message;
        cin >> number;
    } while (number < 0);

    return number;
}

float hoursToWeeks(float hours)
{
    return hours / 24 / 7;
}

float hoursToDays(float hours)
{
    return hours / 24;
}

float daysToWeeks(float days)
{
    return days / 7;
}

int main()
{

    float hours = readPositiveNumber("\nEnter number of hours, please: ");
    float days = hoursToDays(hours);
    float weeks = hoursToWeeks(hours);
    float days_to_week = daysToWeeks(days);

    cout << "\n--------------\n";

    cout << hours << " Hours\n";
    cout << days << " Days\n";
    cout << weeks << " Weeks\n";
    // cout << days_to_week << " Days to Weeks\n";

    return 0;
}
#include <iostream>
using namespace std;

void convert_time_units()
{
    int totalseconds;
    cout << "Total seconds: ";
    cin >> totalseconds;

    int days_in_seconds = 60 * 60 * 24,
        hours_in_seconds = 60 * 60,
        minutes_in_seconds = 60;

    int days = totalseconds / days_in_seconds;
    int remainder = totalseconds % days_in_seconds;
    int hours = remainder / hours_in_seconds;
    remainder = remainder % hours_in_seconds;
    int minutes = remainder / minutes_in_seconds;
    remainder = remainder % minutes_in_seconds;
    int seconds = remainder;

    cout << days << ":" << hours << ":" << minutes << ":" << seconds << endl;
}

int main()
{
    convert_time_units();
    return 0;
}
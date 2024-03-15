#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #43
Write a program that inputs the number of seconds
and changes it to days, hours, minutes, and seconds
*/

struct stTaskDuration
{
    int days, hours, minutes, seconds;
};

int readPositiveNumber(string message)
{
    int number = 0;

    do
    {
        cout << message;
        cin >> number;
    } while (number < 0);

    return number;
}

stTaskDuration secondsToTaskDuration(int total_seconds)
{
    stTaskDuration task_duration;
    const int seconds_per_day = 24 * 60 * 60;
    const int seconds_per_hour = 60 * 60;
    const int seconds_per_minute = 60;

    int remainder = 0;
    task_duration.days = floor(total_seconds / seconds_per_day);
    remainder = total_seconds % seconds_per_day;

    task_duration.hours = floor(remainder / seconds_per_hour);
    remainder = remainder % seconds_per_hour;

    task_duration.minutes = floor(remainder / seconds_per_minute);
    remainder = remainder % seconds_per_minute;

    task_duration.seconds = remainder;

    return task_duration;
}

void printTaskDuration(stTaskDuration task_duration)
{
    cout << task_duration.days << ":"
         << task_duration.hours << ":"
         << task_duration.minutes << ":"
         << task_duration.seconds << endl;
}

int main()
{
    int total_seconds = readPositiveNumber("Total seconds: ");
    printTaskDuration(secondsToTaskDuration(total_seconds));
    return 0;
}
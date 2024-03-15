#include <iostream>
using namespace std;
/*
Problem #42
Write a program to calculate the task duration in seconds and print it on screen
-> Given the time duration of a task in the number of days, hours, minutes, and seconds,
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

stTaskDuration readTaskDuration()
{
    stTaskDuration task_duration;
    task_duration.days = readPositiveNumber("\nDays: ");
    task_duration.hours = readPositiveNumber("Hours: ");
    task_duration.minutes = readPositiveNumber("Minutes: ");
    task_duration.seconds = readPositiveNumber("Seconds: ");

    return task_duration;
}

float taskDurationInSeconds(stTaskDuration task_duration)
{
    return (task_duration.days * 24 * 60 * 60) + (task_duration.hours * 60 * 60) + (task_duration.minutes * 60) + task_duration.seconds;
}

int main()
{
    cout << taskDurationInSeconds(readTaskDuration()) << " Seconds\n";

    return 0;
}
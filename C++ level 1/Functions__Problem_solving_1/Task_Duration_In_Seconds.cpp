#include <iostream>
using namespace std;

float task_duration_in_seconds(int days, int hours, int minutes, int seconds) {
    return (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
}

int main()
{
    int days, hours, minutes, seconds;
    cout << "Days: ";
    cin >> days;
    cout << "Hours: ";
    cin >> hours;
    cout << "Minutes: ";
    cin >> minutes;
    cout << "Seconds: ";
    cin >> seconds;

    cout << task_duration_in_seconds(days,hours,minutes,seconds) << " Seconds" << endl;

    return 0;
}
#include <iostream>
using namespace std;

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

    /*
    float day_in_seconds = days * 24 * 60 *60;
    float hour_in_second = hours * 60 * 60;
    float minute_in_second = minutes * 60;

    float total_seconds = day_in_seconds + hour_in_second + minute_in_second + seconds;
    */

    float total_seconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;

    cout << total_seconds << " Seconds" << endl;

    return 0;
}
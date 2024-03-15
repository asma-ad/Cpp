#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    short int days, hours, minutes, seconds;
    cout << "Days: ";
    cin >> days;
    cout << "Hours: ";
    cin >> hours;
    cout << "Minutes: ";
    cin >> minutes;
    cout << "Seconds: ";
    cin >> seconds;

    int total_seconds = (days * 60 * 60 * 24) + (hours * 60 * 60) + (minutes * 60) + seconds;
    cout << round(total_seconds) << endl;

    return 0;
}
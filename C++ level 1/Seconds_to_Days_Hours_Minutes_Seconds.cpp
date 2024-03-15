#include <iostream>
using namespace std;

int main()
{
    // Seconds to Days Hours Minutes Seconds
    int total_seconds;
    cout << "Seconds: ";
    cin >> total_seconds;

    int days = total_seconds / (60 * 60 * 24);
    int remainder = total_seconds % (60 * 60 * 24);
    int hours = remainder / ( 60 * 60);
    remainder = remainder % ( 60 * 60);
    int minutes = remainder / 60;
    remainder = remainder % 60;
    int seconds = remainder;

    cout << days << ":" << hours << ":" << minutes << ":" << seconds;

    return 0;
}
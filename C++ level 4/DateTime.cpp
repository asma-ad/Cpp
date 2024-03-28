#pragma warning(disable : 4996)
#include <iostream>
#include <ctime>
using namespace std;
//   Datetime: Local/UTC Time

int main()
{
    // ==> Get current time
    time_t t = time(0); // current calendar time in seconds elapsed since 1/1/1970
    cout << "\ncurrent calendar time in seconds elapsed since 1/1/1970 : " << t << endl;

    // ==> Convert time_t value to string
    char *dt = ctime(&t); // covert (seconds) into string form
    cout << "Local date and time is : " << dt << endl;

    tm *gmtm = gmtime(&t); // Convert time_t to tm as UTC time (GMT timezone)
    dt = asctime(gmtm);    // Convert tm structure to string
    cout << "UTC date/time is : " << dt << endl;

    return 0;
}
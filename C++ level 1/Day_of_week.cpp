#include <iostream>
using namespace std;

void read_day(short &day)
{
    cout << "Day: ";
    cin >> day;
}

string is_day(short day)
{
    if (day > 7 || day < 1)
        return "Wrong day!";

    if (day == 1)
        return "Sunday";
    else if (day == 2)
        return "Monday";
    else if (day == 3)
        return "Teusday";
    else if (day == 4)
        return "Wednseday";
    else if (day == 5)
        return "Thursday";
    else if (day == 6)
        return "Friday";
    else
        return "Saturday";
}

int main()
{
    short day;
    read_day(day);
    cout << is_day(day);

    return 0;
}
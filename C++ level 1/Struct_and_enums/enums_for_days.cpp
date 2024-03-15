#include <iostream>
using namespace std;
/*
Create an enum called Day to represent the days of the week. Define cases for all seven days. Then, write a function that takes a Day value as an input and returns a string representing whether it's a weekday or a weekend day.
*/

enum Day
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

string what_is_day(Day day)
{
    return day < Saturday ? "Weekday" : "weekend day";
}

int main()
{
    Day day = Sunday;
    cout << what_is_day(day);
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #44
Write a program to ask the user to enter "day"
Then print the day as follows:
1 Print Sunday
2 Print Monday
3 Print Tuesday
4 Print Wednesday
5 Print Thursday
6 Print Friday
7 Print Saturday
Otherwise print “Wrong Day” , and ask the use to enter the day again
*/
enum enDay
{
    Monday = 1,
    Teusday = 2,
    Wednsday = 3,
    Thursday = 4,
    Friday = 5,
    Saturday = 6,
    Sunday = 7
};

int readNumberInRange(string message, int from, int to)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number < from || number > to);

    return number;
}

enDay readDay()
{
    return (enDay)readNumberInRange("Day: ", 1, 7);
}

string getDay(enDay day)
{
    switch (day)
    {
    case enDay::Monday:
        return "It's Monday";
    case enDay::Teusday:
        return "It's Teusday";
    case enDay::Wednsday:
        return "It's Wednsday";
    case enDay::Thursday:
        return "It's Thursday";
    case enDay::Friday:
        return "It's Friday";
    case enDay::Saturday:
        return "It's Saturday";
    case enDay::Sunday:
        return "It's Sunday";
    default:
        return "Not valid";
    }
}

int main()
{
    cout << getDay(readDay());

    return 0;
}
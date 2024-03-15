#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #45
Write a program to ask the user to enter "Month"
Then print the month as follows:
1  Print January
2 Print February
3 Print March
4 Print April
5 Print May
6 Print June
7 Print July
8 Print August
9 Print September
10 Print October
11 Print November
12 December
Otherwise print “Wrong Month , and ask the use to enter the month again
*/

enum enMonth
{
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
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

enMonth readMonth()
{
    return (enMonth)readNumberInRange("Month: ", 1, 12);
}

string getMonth(enMonth month)
{
    switch (month)
    {
    case enMonth::January:
        return "It's January";
    case enMonth::February:
        return "It's February";
    case enMonth::March:
        return "It's March";
    case enMonth::April:
        return "It's April";
    case enMonth::May:
        return "It's May";
    case enMonth::June:
        return "It's June";
    case enMonth::July:
        return "It's July";
    case enMonth::August:
        return "It's August";
    case enMonth::September:
        return "It's September";
    case enMonth::October:
        return "It's October";
    case enMonth::November:
        return "It's November";
    case enMonth::December:
        return "It's December";
    default:
        return "Not valid";
    }
}

int main()
{
    cout << getMonth(readMonth());

    return 0;
}
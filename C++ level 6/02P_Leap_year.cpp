#include <iostream>
using namespace std;
/*
Problem# 02:
write a program to check if year is a leap year or not!
*/

short readNumber()
{
    short number = 0;
    cout << "Enter a year to check: ";
    cin >> number;
    return number;
}

bool isLeap(short year)
{
    // leap year if perfectly divisible by 400
    if (year % 400 == 0)
    {
        return true;
    }
    // not a leap year if divisible by 100 but not divisible by 400
    else if (year % 100 == 0)
    {
        return false;
    }
    // leap year if not divisible by 100 but divisible by 4
    else if (year % 4 == 0)
    {
        return true;
    }
    // all other years aren't leap years!
    else
    {
        return false;
    }
}

int main()
{
    short year = readNumber();

    if (isLeap(year))
        cout << "\nYes, year [ " << year << " ] is a leap year.\n";
    else
        cout << "\nNo, year [ " << year << " ] is not a leap year.\n";

    return 0;
}
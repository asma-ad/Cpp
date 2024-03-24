#include <iostream>
using namespace std;
/*
Problem #14
write a program to read (date 1) and (date 2),
then check if (date 1) equals to (date 2)
*/

struct sDate
{
    short days;
    short months;
    short year;
};
sDate readFullDate()
{
    sDate date;
    cout << "Enter a year: ";
    cin >> date.year;
    cout << "Enter a month: ";
    cin >> date.months;
    cout << "Enter a day: ";
    cin >> date.days;

    return date;
}

bool isDateOneEqualDateTwo(sDate dateOne, sDate dateTwo)
{
    return (dateOne.year == dateTwo.year) ? (dateOne.months == dateTwo.months ? (dateOne.days == dateTwo.days ? true : false) : false) : false;
}

int main()
{
    cout << "=====================================\n";
    cout << "      Compare between two dates\n";
    cout << "=====================================\n";

    cout << "Date 1:\n";
    sDate dateOne = readFullDate();
    cout << "Date 2:\n";
    sDate dateTwo = readFullDate();

    if (isDateOneEqualDateTwo(dateOne, dateTwo))
        cout << "Yes, date_1 equals to date_2!\n";
    else
        cout << "No, date_1 is NOT equal date_2!\n";

    return 0;
}
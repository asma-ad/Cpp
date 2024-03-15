#include <iostream>
using namespace std;
/*
Problem #5:
Write a program to ask the user to enter their:Age, Driver license, Has recommendation.
Then, print "Hired" if their age is greater than 21 and they have a driver licnse, otherwise print "Rejected".
If they have recommendation, hire them without conditiond!
*/

struct stInfo
{
    int age;
    bool has_driver_license;
    bool has_commendation;
};

stInfo readData()
{
    stInfo info;

    cout << "Enter your age: ";
    cin >> info.age;
    cout << "Do you have a driver license? ";
    cin >> info.has_driver_license;
    cout << "Do you havecommendation? ";
    cin >> info.has_commendation;

    return info;
}

bool isHired(stInfo info)
{
    return (info.has_commendation || info.age > 21 && info.has_driver_license);
}

void printResult(stInfo info)
{

    if (isHired(info))
        cout << "Hired" << endl;
    else
        cout << "Rejected" << endl;
}

int main()
{
    printResult(readData());
    return 0;
}
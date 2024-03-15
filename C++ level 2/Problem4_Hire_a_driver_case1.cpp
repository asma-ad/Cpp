#include <iostream>
using namespace std;
/*
Problem #4:
Write a program to ask the user to enter their:Age, Driver license.
Then, print "Hired" if their age is greater than 21 and they have a driver licnse, otherwise print "Rejected"
*/

struct stInfo
{
    int age;
    bool has_driver_license;
};

stInfo readData()
{
    stInfo info;

    cout << "Enter your age: ";
    cin >> info.age;
    cout << "Do you have a driver license? ";
    cin >> info.has_driver_license;

    return info;
}

bool isHired(stInfo info)
{
    return (info.age > 21 && info.has_driver_license);
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
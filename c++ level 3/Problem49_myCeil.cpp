#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #49
Write a program to print ceil of numbers, don't use built-in abs function.
*/

float readNumber()
{
    float number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

int myCeilfunction(float number)
{
    return (number > 0) ? ++number : number;
}

int main()
{
    float number = readNumber();
    cout << "My ceil function : " << myCeilfunction(number) << endl;
    cout << "C++ ceil : " << ceil(number) << endl;

    return 0;
}
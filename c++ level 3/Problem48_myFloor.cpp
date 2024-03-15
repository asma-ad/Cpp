#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #48
Write a program to print floor of numbers, don't use built-in abs function.
*/

float readNumber()
{
    float number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

int myFloorfunction(float number)
{
    return (number > 0) ? number : --number;
}

int main()
{
    float number = readNumber();
    cout << "My floor function : " << myFloorfunction(number) << endl;
    cout << "C++ floor : " << floor(number) << endl;

    return 0;
}
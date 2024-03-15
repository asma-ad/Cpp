#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #50
Write a program to print sqrt of numbers, don't use built-in sqrt function.
*/

float readNumber()
{
    float number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

float mySqrtunction(float number)
{
    // any number ^ 0.5 gives sqrt
    return pow(number, 0.5);
}

int main()
{
    float number = readNumber();
    cout << "My sqrt function : " << mySqrtunction(number) << endl;
    cout << "C++ sqrt : " << sqrt(number) << endl;

    return 0;
}
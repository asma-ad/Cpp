#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #47
Write a program to print round of numbers, don't use built-in abs function.
*/

float readNumber()
{
    float number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

int myRoundfunction(float number)
{
    int int_part = (int)number;
    float fraction_part = number - (int)number;

    if (abs(fraction_part) >= .5)
    {
        if (number > 0)
            return ++int_part;
        else
            return --int_part;
    }
    else
        return int_part;
}

int main()
{
    float number = readNumber();
    cout << "My round function : " << myRoundfunction(number) << endl;
    cout << "C++ round : " << round(number) << endl;

    return 0;
}
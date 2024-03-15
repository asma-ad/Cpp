#include <iostream>
using namespace std;
/*
Problem #10
Write a program to read a number,
then print it in order from left to right.
*/

int readPositiveNumber(string message)
{
    int number = 0;

    do
    {
        cout << message;
        cin >> number;
    } while (number < 0);

    return number;
}

int reversedNumber(int number)
{
    int remainder = 0, result = 0;

    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        result = result * 10 + remainder;
    }

    return result;
}

void pritDigits(int number)
{
    int remainder = 0;

    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        cout << remainder << endl;
    }
}

int main()
{
    pritDigits(reversedNumber(readPositiveNumber("Enter a positive number: ")));
    return 0;
}
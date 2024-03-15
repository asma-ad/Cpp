#include <iostream>
using namespace std;
/*
Problem #8
Write a program to read a digit and a number, then print digit frequency in that number.
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

int digitFrequency(int number, short digit)
{
    int remainder = 0, frequency = 0;

    while (number > 0)
    {
        remainder = number % 10;
        number /= 10;

        if (remainder == digit)
            frequency++;
    }
    return frequency;
}

int main()
{
    int number = readPositiveNumber("Enter the main number: ");
    short digit = readPositiveNumber("Enter a digitto check: ");

    cout << "Digit " << digit
         << " frequency is " << digitFrequency(number, digit)
         << " time(s)" << endl;

    return 0;
}
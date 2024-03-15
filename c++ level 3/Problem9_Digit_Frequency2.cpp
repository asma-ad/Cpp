#include <iostream>
using namespace std;
/*
Problem #9
Write a program to read a number,
then print all digit frequency in that number.
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

void printAllDigitFrequency(int number)
{
    for (int i = 0; i < 10; i++)
    {

        short frequency = 0;
        frequency = digitFrequency(number, i);

        if (frequency > 0)
        {
            cout << "Digit " << i
                 << " frequency is " << frequency
                 << " time(s)" << endl;
        }
    }
}

int main()
{

    printAllDigitFrequency(readPositiveNumber("Enter the main number: "));
    return 0;
}
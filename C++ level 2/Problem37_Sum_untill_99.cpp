#include <iostream>
using namespace std;
/*
Problem #37
Write a program to read numbers from user and sum them,
keep reading until the user enters -99
then print the Sum on screen
*/

float readNumber(string message)
{
    int number = 0;
    cout << message;
    cin >> number;
    return number;
}

float sumCalculator()
{
    int sum = 0, number = 0;

    do
    {
        number = readNumber("Enter a number: ");
        if (number == -99)
            break;
        sum += number;
    } while (number != -99);

    return sum;
}

int main()
{
    cout << sumCalculator() << endl;

    return 0;
}
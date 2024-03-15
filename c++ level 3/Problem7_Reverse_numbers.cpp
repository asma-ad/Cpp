#include <iostream>
#include <string>
using namespace std;
/*
Problem #7
Write a program to read a number and print it reversed.
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
        remainder = number % 10;          // last digit
        number = number / 10;             // removing the last digit
        result = result * 10 + remainder; // Update 'result' by shifting its digits one place to the left and adding the current 'remainder'.
    }

    return result;
}

void printResult(int number)
{
    cout << "The reversed number = " << number << endl;
}

int main()
{
    printResult(reversedNumber(readPositiveNumber("Enter a positive number: ")));

    return 0;
}
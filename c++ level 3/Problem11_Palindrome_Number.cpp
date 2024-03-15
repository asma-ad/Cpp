#include <iostream>
using namespace std;
/*
Problem #11
Write a program to read a number and check if it is palindrome?
Note: Palindrome is  a number (such as 16461) that remains the same when its digits are reversed.
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

bool isPalindromeNumber(int number)
{
    return (reversedNumber(number) == number);
}

int main()
{
    if (isPalindromeNumber(readPositiveNumber("Enter a positive number: ")))
        cout << "It is a palindrome number" << endl;
    else
        cout << "It is NOT a palindrome number" << endl;

    return 0;
}
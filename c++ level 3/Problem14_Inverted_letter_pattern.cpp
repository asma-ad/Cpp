#include <iostream>
using namespace std;
/*
Problem #14
Write a program to read a number and print inverted letter pattern as follows:

input:
3

output:
CCC
BB
A
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

void printInvertedLetterPattern(int number)
{
    for (int i = number; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(i + 64);
        }
        cout << endl;
    }
}

int main()
{
    printInvertedLetterPattern(readPositiveNumber("Enter a positive number: "));
    return 0;
}
#include <iostream>
using namespace std;
/*
Problem #15
Write a program to read a number and print letter pattern as follows:

input:
3

output:
A
BB
CCC
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

void printLetterPattern(int number)
{
    for (int i = 1; i <= number; i++) // for (int i = 65; i <= 65 + number - 1; i++)
    {
        for (int j = 1; j <= i; j++) // for (int j = 1; j <= i - 65 + 1; j++)
        {
            cout << char(i + 64); // cout << char(i)
        }
        cout << endl;
    }
}

int main()
{
    printLetterPattern(readPositiveNumber("Enter a positive number: "));
    return 0;
}
#include <iostream>
using namespace std;
/*
Problem #13
Write a program to read a number and print pattern as follows:

input:
3

output:
1
22
333
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

void printNumberPattern(int number)
{
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}

int main()
{
    printNumberPattern(readPositiveNumber("Enter a positive number: "));
    return 0;
}
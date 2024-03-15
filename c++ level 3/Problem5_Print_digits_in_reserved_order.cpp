#include <iostream>
#include <string>
using namespace std;
/*
Problem #5
Write a program to read a number, then print it in a reversed order.
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

void reversedNumber(int number)
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
    reversedNumber(readPositiveNumber("Enter a positive number: "));
    return 0;
}
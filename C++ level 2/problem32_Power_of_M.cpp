#include <iostream>
using namespace std;
/*
Problem #32:
Write a program to ask user to enter :
number, exponent value
then print the number ^ M
*/

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

int readExponent()
{
    int exponent;
    cout << "Enter an exponent value: ";
    cin >> exponent;
    return exponent;
}

int Power_M(int number, int exponent)
{
    if (exponent == 0)
        return 1;

    int pow = 1;
    for (int i = 1; i <= exponent; i++)
    {
        pow *= number;
    }

    return pow;
}

void printResult(int result)
{
    cout << result << endl;
}

int main()
{
    // call stack function ?
    printResult(Power_M(readNumber(), readExponent()));

    return 0;
}
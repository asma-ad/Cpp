#include <iostream>
using namespace std;
/*
Problem #3:
Write a program to ask the user for a number,
then print "Odd" if it's odd, or "Even" if it's even.
*/
enum enNumberType
{
    Odd = 1,
    Enen = 2
};

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

enNumberType checkNumberType(int number)
{
    return number % 2 == 0 ? enNumberType::Enen : enNumberType::Odd;
}

void printNumberType(enNumberType numberType)
{
    if (numberType == enNumberType::Enen)
        cout << "The number is even.\n";
    else
        cout << "The number is Odd.\n";
}

int main()
{
    printNumberType(checkNumberType(readNumber()));
    return 0;
}
#include <iostream>
using namespace std;
/*
Problem #3:
Write a program to ask the user for a number,
then print "Odd" if it's odd, or "Even" if it's even.
*/

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    return number;
}

string checkNumberType(int number)
{

    return (number % 2 == 0) ? "Even" : "Odd";
}

int main()
{
    cout << checkNumberType(readNumber());
    return 0;
}
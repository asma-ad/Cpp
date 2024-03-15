#include <iostream>
#include <string>
using namespace std;
/*
Problem #7:
Write a program to ask userto enter a number,
then print the "Half of the <number> is <???>"
*/

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

float halfNumber(int number)
{
    return (float)number / 2;
}

// void printHalfNumber(int number)
// {
//     cout << "The half of " << number << " is " << halfNumber(number) << endl;
// }

void printHalfNumber(int number)
{
    string result = "Half of " + to_string(number) + " is " + to_string(halfNumber(number));
    cout << result << endl;
}

int main()
{

    printHalfNumber(readNumber());

    return 0;
}
#include <iostream>
using namespace std;
/*
Problem #27
Write a program to print numbers from N to 1.
*/

int readNumber()
{
    int number;

    do
    {
        cout << "Enter a number: ";
        cin >> number;
    } while (number < 0);

    return number;
}

void printNumbers(int N)
{

    for (int i = N; i >= 1; i--)
    {
        cout << i << endl;
    }
}

int main()
{
    printNumbers(readNumber());
    return 0;
}
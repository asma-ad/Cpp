#include <iostream>
using namespace std;
/*
Problem #12:
Write a program to ask user to enter 2 numbers,
then print the max one.
*/

void readNumber(int number[2])
{
    cout << "Enter the first number: ";
    cin >> number[0];
    cout << "Enter the second number: ";
    cin >> number[1];
}

int maxNumber(int number[2])
{
    if (number[0] > number[1])
        return number[0];
    else
        return number[1];
}

void printNumber(int max)
{
    cout << "Max number is: " << max << endl;
}

int main()
{
    int numbers[2];
    readNumber(numbers);
    printNumber(maxNumber(numbers));

    return 0;
}
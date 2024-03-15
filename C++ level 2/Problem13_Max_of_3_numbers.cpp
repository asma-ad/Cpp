#include <iostream>
using namespace std;
/*
Problem #13:
Write a program to ask user to enter 3 numbers,
then print the max one.
*/

void readNumber(int number[3])
{
    cout << "Enter the first number: ";
    cin >> number[0];
    cout << "Enter the second number: ";
    cin >> number[1];
    cout << "Enter the third number: ";
    cin >> number[2];
}

int maxNumber(int number[3])
{
    if (number[0] > number[1])
        if (number[0] > number[2])
            return number[0];
        else
            return number[2];

    else if (number[1] > number[2])
        return number[1];
    else
        return number[2];
}

void printNumber(int max)
{
    cout << "Max number is: " << max << endl;
}

int main()
{
    int numbers[3];
    readNumber(numbers);
    printNumber(maxNumber(numbers));

    return 0;
}
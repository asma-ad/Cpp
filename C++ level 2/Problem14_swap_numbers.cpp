#include <iostream>
using namespace std;
/*
Problem #14:
Write a program to ask the user to enter two numbers,
the, print the two numbers, then swap them and print them.
*/

void readNumbers(int &number1, int &number2)
{
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
}

void swap(int &number1, int &number2)
{
    int temp;
    temp = number1;
    number1 = number2;
    number2 = temp;
}

void printNumbers(int number1, int number2)
{
    cout << "\nNumber 1: " << number1 << endl;
    cout << "Number 2: " << number2 << endl;
}

int main()
{
    int number1, number2;

    readNumbers(number1, number2);
    printNumbers(number1, number2);

    swap(number1, number2);
    printNumbers(number1, number2);

    return 0;
}
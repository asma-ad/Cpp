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
    int max = number[0];
    for (int i = 1; i < 3 ; i++) {
        if (number[i] > max)
                max = number[i];
    }
    return max;
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
#include <iostream>
using namespace std;
/*
Write a program to read a number and print the sum of its digits.
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

int sumDigits(int number)
{
    int sum = 0, remainder = 0;

    while (number > 0)
    {

        remainder = number % 10; // last digit
        sum += remainder;        // add last digit to sum
        number = number / 10;    // except the last digit
    }

    return sum;
}

void printResult(int sum)
{
    cout << "Sum of digits = " << sum << endl;
}

int main()
{
    printResult(sumDigits(readPositiveNumber("Enter a positive number: ")));

    return 0;
}
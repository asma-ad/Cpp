#include <iostream>
using namespace std;
/*
Problem #3
Write a program to check if the number is perfect or not?
Note: Perefect number = sum(all divisors).
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

bool checkPerfectNumber(int number)
{
    int sum = 0;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
            sum += i;
    }

    return sum == number;
}

void printPerfectNumber(int number)
{
    if (checkPerfectNumber(number))
        cout << number << " is a perfect number.\n";
    else
        cout << number << " is not a perfect number.\n";
}

int main()
{
    printPerfectNumber(readPositiveNumber("Enter a positive number: "));
    return 0;
}
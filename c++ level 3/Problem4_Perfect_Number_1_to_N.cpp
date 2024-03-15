#include <iostream>
using namespace std;
/*
Problem #4
Write a program to all perfect numbers from 1 to N.
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

void printPerfectNumber1ToN(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (checkPerfectNumber(i))
            cout << i << "\n";
    }
}

int main()
{
    printPerfectNumber1ToN(readPositiveNumber("Enter a positive number: "));
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #2:
Write a program to print all prime numbers from 1 to N.
*/

enum enPrimeNumber
{
    Prime = 1,
    NotPrime = 2
};

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

enPrimeNumber checkNumberType(int number)
{
    // Prime number is a whole number greater than 1 whose only factors are 1 and itself.
    if (number == 0 || number == 1) // 0 & 1 are not prime numbers!
        return enPrimeNumber::NotPrime;

    int n = sqrt(number);

    for (int i = 2; i <= n; i++)
    {
        if (number % i == 0)
            return enPrimeNumber::NotPrime;
    }

    return enPrimeNumber::Prime;
}

void printAllPrimeNumbersToN(int N)
{
    for (int i = 1; i <= N; i++)
    {
        if (checkNumberType(i) == enPrimeNumber::Prime)
            cout << i << endl;
    }
}

int main()
{
    printAllPrimeNumbersToN(readPositiveNumber("Enter a positive number: "));
    return 0;
}
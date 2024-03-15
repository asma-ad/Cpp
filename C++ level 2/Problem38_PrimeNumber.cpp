#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #38
Write a program to read a number and check if it's a prime number or not.
Note: Prime number can only divide on one and on itself.
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
    if (number == 0 || number == 1) // 0 & 1 are not prime numbers!
        return enPrimeNumber::NotPrime;

    // int n = round(number / 2);
    int n = sqrt(number); // Use sqrt or half ==> correct

    for (int i = 2; i <= n; i++)
    {
        if (number % i == 0)
            return enPrimeNumber::NotPrime;
    }

    return enPrimeNumber::Prime;
}

void printNumberType(int number)
{
    switch (checkNumberType(number))
    {
    case enPrimeNumber::Prime:
        cout << "Prime number" << endl;
        break;

    case enPrimeNumber::NotPrime:
        cout << "Not prime number" << endl;
        break;
    }
}

int main()
{
    printNumberType(readPositiveNumber("Enter a positive number: "));

    return 0;
}
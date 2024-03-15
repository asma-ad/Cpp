#include <iostream>
using namespace std;
/*
Problem #30:
Write a program tocalculate factorial of N!
*/

int readPositiveNumber()
{
    int number;
    do
    {
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number < 0);

    return number;
}

int Factorial(int N)
{
    int fact = 1;
    for (int i = N; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}

void printResult(int fact)
{
    cout << fact << endl;
}

int main()
{
    printResult(Factorial(readPositiveNumber()));
    return 0;
}
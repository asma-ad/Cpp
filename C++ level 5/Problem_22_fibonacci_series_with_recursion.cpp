#include <iostream>
using namespace std;
/*
Problem #21
Write a program to print fibonacci series of 10.
using recursion
*/

void printFibonacciUsingRecursion(short number, int prev1, int prev2)
{
    int fibNumber = 0;
    if (number > 0)
    {
        fibNumber = prev1 + prev2;
        cout << fibNumber << "  ";
        prev2 = prev1;
        prev1 = fibNumber;
        printFibonacciUsingRecursion(number - 1, prev1, prev2);
    }
}

int main()
{
    printFibonacciUsingRecursion(10, 0, 1);

    return 0;
}
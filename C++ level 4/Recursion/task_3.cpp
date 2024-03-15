#include <iostream>
using namespace std;

// Write a C++ program to implement a recursive function to get the nth Fibonacci number.

int fibonacci(int n)
{
    // Formula : f(n) = f(n-1) + f(n-2)
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;

    int fi = fibonacci(n);
    cout << "\nInput : " << n << "\nFinbonacci number is : " << fi << endl;

    return 0;
}
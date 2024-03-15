#include <iostream>
using namespace std;

// Write a C++ program to calculate the factorial of a given number using recursion.

int facturial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return (n * facturial(n - 1));
}

int main()
{
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;

    int fact = facturial(n);
    cout << "Facturial of " << n << " is : " << fact << endl;

    return 0;
}
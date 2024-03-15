#include <iostream>
#include <cmath>
using namespace std;

int power_classic(int base, int exponent)
{

    return pow(base, exponent);
}

int main()
{
    int base, exponent;

    cout << "Enter a number (base): ";
    cin >> base;

    cout << "Enter the exponent number: ";
    cin >> exponent;

    cout << power_classic(base, exponent);

    return 0;
}
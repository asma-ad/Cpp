#include <iostream>
using namespace std;

void readNumber(int &base, int &exponent)
{
    cout << "Enter a number: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
}

int Power(int base, int exponent)
{

    if (exponent == 0)
        return 1;

    int power = 1;
    for (int i = 1; i <= exponent; i++)
    {
        power *= base;
    }
    return power;
}

int main()
{
    int number, exponent;
    readNumber(number, exponent);
    cout << Power(number, exponent) << endl;

    return 0;
}
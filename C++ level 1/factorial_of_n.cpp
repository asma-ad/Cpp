#include <iostream>
using namespace std;

void readNumber(int &n)
{
    do
    {
        cout << "Enter a positive number: ";
        cin >> n;
    } while (n < 0);
}

int Factorial(int n)
{
    int fac = 1;
    for (int i = n; i >= 1; i--)
    {
        fac *= i;
    }
    return fac;
}

int main()
{
    int number;
    readNumber(number);
    cout << Factorial(number) << endl;

    return 0;
}
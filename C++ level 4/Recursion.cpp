#include <iostream>
using namespace std;

void printNumbers(int, int);
int power(int, int);

int main()
{
    printNumbers(23, 1);
    cout << "_________________________\n"
         << power(2, 4);

    return 0;
}

// Print numbers from M down to N
void printNumbers(int m, int n)
{
    if (m >= n)
    {
        cout << m << endl;
        printNumbers(m - 1, n);
    }
}

// Calculate power N^M
int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else if (exponent == 1)
    {
        return base;
    }
    else
    {
        return (base * power(base, exponent - 1));
    }
}
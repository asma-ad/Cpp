#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float number, m;
    cout << "Enter a number (Base): ";
    cin >> number;
    cout << "Enter the exponent: ";
    cin >> m;

    cout << round(pow(number, m)) << endl;
    

    return 0;
}
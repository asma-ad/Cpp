#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float number;
    cout << "Enter a number: ";
    cin >> number;

    //  float pow_two = pow(number, 2);
    //  cout << round(pow_two)  << endl;

    cout << round(pow(number, 2)) << endl;
    cout << round(pow(number, 3)) << endl;
    cout << round(pow(number, 4)) << endl;

    return 0;
}
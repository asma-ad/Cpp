#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, d;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter d: ";
    cin >> d;

    float area = a * sqrt(pow(d, 2) - pow(a, 2));
    cout << area << endl;

    return 0;
}
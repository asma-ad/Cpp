#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

float circle_area(float a, float b)
{
    return (PI * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
}

int main()
{
    float a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << circle_area(a, b);

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

float circle_area(float a, float b, float c)
{
    float p = (a + b + c) / 2;
    float area = PI * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);
    return area;
}

int main()
{
    float a, b, c;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    cout << circle_area(a, b, c);

    return 0;
}
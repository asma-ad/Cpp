#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

float circle_area(float a)
{
    return PI * pow(a, 2) / 4;
}

int main()
{
    float a;

    cout << "Enter A: ";
    cin >> a;

    cout << circle_area(a);

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

float circle_area(float l)
{
    return pow(l,2) / (4 * PI);
}

int main()
{
    float l;

    cout << "Enter L: ";
    cin >> l;

    cout << circle_area(l);

    return 0;
}
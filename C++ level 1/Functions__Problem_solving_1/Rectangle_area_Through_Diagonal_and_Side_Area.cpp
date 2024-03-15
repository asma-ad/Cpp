#include <iostream>
#include <cmath>
using namespace std;

float rectangle_area(float a, float d) {
    return a * sqrt(pow(d, 2) - pow(a, 2));
}

int main() {
    float a, d;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter d: ";
    cin >> d;

    cout << rectangle_area(a, d);

    return 0;
}
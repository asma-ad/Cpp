#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

float circle_area(float r) {
    return PI * pow(r,2);
}

int main() {
    float r;

    cout << "Enter r: ";
    cin >> r;

    cout << circle_area(r);

    return 0;
}
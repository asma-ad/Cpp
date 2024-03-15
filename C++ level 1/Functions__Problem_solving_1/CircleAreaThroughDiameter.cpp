#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

float circle_area(float d) {
    return PI * pow(d,2) / 4;
}

int main() {
    float d;

    cout << "Enter D: ";
    cin >> d;

    cout << circle_area(d);

    return 0;
}
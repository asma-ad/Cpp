#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    float a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    float area = PI * b * b / 4 * ((2 * a - b) / (2 * a + b));
    cout << area;

    return 0;
}
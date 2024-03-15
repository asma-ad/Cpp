#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, PI = 3.14;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;

    float area = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
    cout << floor(area) << endl;

    return 0;
}

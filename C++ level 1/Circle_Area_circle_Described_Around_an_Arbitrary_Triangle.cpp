#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, PI = 3.141592653589793238462643383279502884197;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter C: ";
    cin >> c;

    float p = (a+b+c)/2;
    float area = PI * pow( ((a * b * c) / (4 * sqrt(p * (p-a) * (p-b) * (p-c)) )), 2);
    cout << round(area) << endl;

    return 0;
}

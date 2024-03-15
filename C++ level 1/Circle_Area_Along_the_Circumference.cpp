#include <iostream>
using namespace std;

int main()
{
    int l;
    cout << "Enter L: ";
    cin >> l;

    const float PI = 3.141592653589793238462643383279502884197;
    float area = (l * l) / (4 * PI);
    cout << area;

    return 0;
}
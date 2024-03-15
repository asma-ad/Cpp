#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float l, PI = 3.141592653589793238462643383279502884197;
    cout << "Enter L: ";
    cin >> l;

    float area = pow(l,2) / (4 * PI);
    cout << floor(area) << endl;

    return 0;
}

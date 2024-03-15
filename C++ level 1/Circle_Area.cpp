#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float r, PI = 3.14;
    cout << "Enter r: ";
    cin >> r;

    float area = PI * pow(r, 2);
    cout << ceil(area) << endl;

    return 0;
}
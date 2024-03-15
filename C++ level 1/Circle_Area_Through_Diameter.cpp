#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float d, PI = 3.14;
    cout << "Enter D: ";
    cin >> d;

    float area = (PI * pow(d, 2)) / 4;
    cout << ceil(area) << endl;

    return 0;
}
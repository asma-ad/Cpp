#include <iostream>
using namespace std;

int main()
{
    int d;
    cout << "Enter D: ";
    cin >> d;

    const float PI = 3.14;
    float area = PI * d * d / 4;
    cout << area << endl;

    return 0;
}
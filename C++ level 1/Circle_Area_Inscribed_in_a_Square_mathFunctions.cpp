#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a, PI = 3.14;
    cout << "Enter A: ";
    cin >> a;

    // float area = PI * pow((a/2),2);
    float area = PI * pow(a, 2) / 4;
    cout << ceil(area) << endl;

    return 0;
}

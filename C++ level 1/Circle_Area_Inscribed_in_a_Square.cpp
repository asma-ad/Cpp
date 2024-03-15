#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter A: ";
    cin >> a;

    const float PI = 3.14;
    float area = PI * a * a / 4;
    cout << area << endl;
    
    return 0;
}
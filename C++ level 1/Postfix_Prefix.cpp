#include <iostream>
using namespace std;

int main()
{
    // Postfix vs Prefix
    int a = 10;

    int c = a;
    cout << "A: " << a << endl; // 10
    cout << "C: " << c << endl; // 10

    cout << "***********************************\n";

    c = a++;
    cout << "A: " << a << endl; // 11
    cout << "C: " << c << endl; // 10

    cout << "***********************************\n";

    c = ++a;
    cout << "A: " << a << endl; // 12
    cout << "C: " << c << endl; // 12

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << num1 << endl
         << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << num1 << endl
         << num2 << endl;

    return 0;
}
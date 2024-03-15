#include <iostream>
using namespace std;

void swap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Before swaping:\n"
         << num1 << " " << num2 << endl;

    swap(num1, num2);

    cout << "After swaping:\n"
         << num1 << " " << num2 << endl;

    return 0;
}

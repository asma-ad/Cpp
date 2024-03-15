#include <iostream>
using namespace std;

void swap()
{
    // read num1 , num2
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // print num1 num2
    cout << "Before swaping:\n" << num1 << " " << num2 << endl;

    // swaping
    int temp = num1;
    num1 = num2;
    num2 = temp;

    // print num1 num2
    cout << "After swaping:\n" << num1 << " " << num2 << endl;
}

int main()
{
    swap();
    return 0;
}

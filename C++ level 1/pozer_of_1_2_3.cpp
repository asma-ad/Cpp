#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << number * number << endl;
    cout << number * number * number << endl;
    cout << number * number * number * number << endl;

    cout << "\n************************\n";

    int power2 = number * number;
    int power3 = power2 * number;
    int power4 = power3 * number;

    cout << power2 << endl;
    cout << power3 << endl;
    cout << power4 << endl;


    return 0;
}
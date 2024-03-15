#include <iostream>
using namespace std;

int main()
{
    int num_one, num_two, num_three;
    cout << "Enter first number: ";
    cin >> num_one;
    cout << "Enter second number: ";
    cin >> num_two;
    cout << "Enter third number: ";
    cin >> num_three;

    int sum = num_one + num_two + num_three;
    cout << sum << endl;
    
    return 0;
}
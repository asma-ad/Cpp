#include <iostream>
using namespace std;

int my_sum_function(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int num1, num2;
    cout << "Please enter the first number:\n";
    cin >> num1;
    cout << "Please enter the second number:\n";
    cin >> num2;
    cout << "*******************************\n";
    cout << my_sum_function(num1, num2);

    return 0;
}
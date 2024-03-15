#include <iostream>
using namespace std;

void my_sum_procedure()
{
    int num1, num2;
    cout << "Please enter the first number:\n";
    cin >> num1;
    cout << "Please enter the second number:\n";
    cin >> num2;
    cout << "*******************************\n";
    cout << num1 + num2 << endl;
}

int my_sum_function()
{
    int num1, num2;
    cout << "Please enter the first number:\n";
    cin >> num1;
    cout << "Please enter the second number:\n";
    cin >> num2;
    cout << "*******************************\n";
    return num1 + num2;
}

int main()
{
    my_sum_procedure();
    cout << my_sum_function();
    return 0;
}
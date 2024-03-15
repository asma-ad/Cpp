#include <iostream>
using namespace std;

// operator (Small o) is a keyword in C++

void readOperation(float num[2], char &Operator)
{
    cout << "Number 1: ";
    cin >> num[0];
    cout << "Number 2: ";
    cin >> num[1];
    cout << "The operator: ";
    cin >> Operator;
}

float simple_calculator(float num[2], char Operator)
{
    if (Operator == '+')
        return num[0] + num[1];

    if (Operator == '*')
        return num[0] * num[1];

    if (Operator == '/')
        return num[0] / num[1];

    if (Operator == '-')
        return num[0] - num[1];
}

int main()
{
    float num[3];
    char Operator;

    readOperation(num, Operator);
    cout << simple_calculator(num, Operator);

    return 0;
}
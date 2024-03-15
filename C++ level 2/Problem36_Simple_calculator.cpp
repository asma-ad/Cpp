#include <iostream>
using namespace std;
/*
Problem #36
Write a program to ask user to enter:
number1
number2
operator type

then preform the calculator according to the operation.
*/

enum enOperationType
{
    Add = '+',
    Subtract = '-',
    Multiply = '*',
    Divide = '/'
};

float readNumber(string message)
{
    int number = 0;
    cout << message;
    cin >> number;
    return number;
}

enOperationType readOperatorType()
{
    char ot = '+';
    cout << "Operation type (+ , - , / , *): ";
    cin >> ot;

    return (enOperationType)ot;
}

float Calculator(float num1, float num2, enOperationType optype)
{

    switch (optype)
    {
    case enOperationType::Add:
        return num1 + num2;

    case enOperationType::Subtract:
        return num1 - num2;

    case enOperationType::Divide:
        return num1 / num2;

    case enOperationType::Multiply:
        return num1 * num2;

    default:
        break;
    }
}

void printResult(float result)
{
    cout << result << endl;
}

int main()
{

    float num1 = readNumber("Enter the first number: ");
    float num2 = readNumber("Enter the second number: ");

    cout << Calculator(num1, num2, readOperatorType());

    return 0;
}
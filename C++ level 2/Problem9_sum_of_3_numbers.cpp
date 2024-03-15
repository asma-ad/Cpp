#include <iostream>
using namespace std;
/*
    Problem #9:
    Write a program to ask user to enter three numbers,
    Then print the sum of entered numbers.
*/
void readNumber(int &number1, int &number2, int &number3)
{
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Enter the thirf number: ";
    cin >> number3;
}

int sum(int number1, int number2, int number3)
{
    return number1 + number2 + number3;
}

void printResult(int result)
{
    cout << result << endl;
}

int main()
{
    int number1, number2, number3;
    readNumber(number1, number2, number3);
    printResult(sum(number1, number2, number3));

    return 0;
}

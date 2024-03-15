#include <iostream>
using namespace std;

void printWelcomemessage()
{
    cout << "=========================================\n";
    cout << "Welcome to the sum of numbers calculator!\n"
         << "to end the program, enter -99\n";
    cout << "=========================================\n";
}

int readNumber(int &number)
{
    cout << "Enter an integre number: ";
    cin >> number;

    return number;
}

int sum(int number)
{
    int sum;
    while (number != -99)
    {
        sum += number;
        cout << "Enter another number: ";
        cin >> number;
    }

    return sum;
}

int main()
{
    int number;
    printWelcomemessage();
    cout << sum(readNumber(number));
    return 0;
}
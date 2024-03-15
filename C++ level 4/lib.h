
// pragma once
#include <iostream>
#include <limits>
using namespace std;

namespace input
{
    int readNumber()
    {
        int number;
        cout << "Enter a number: ";
        cin >> number;
        return number;
    }

    int readPositiveNumber(string message)
    {
        int number = 0;

        do
        {
            cout << message;
            cin >> number;
        } while (number < 0);

        return number;
    }

    int readOnlyNumber()
    {
        int number;
        cout << "Enter a number: ";
        cin >> number;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid number\nEnter a valid number: ";
            cin >> number;
        }
        return number;
    }

}
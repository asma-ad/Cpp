#include <iostream>
#include <string>
using namespace std;
/*
Problem #49
Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the
balance to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.
Assume User Balance is 7500.
*/
string readPinCode()
{
    string pin_code;
    cout << "Enter PIN Code: ";
    cin >> pin_code;

    return pin_code;
}

bool login()
{
    string pin_code;
    do
    {
        pin_code = readPinCode();

        if (pin_code == "1234")
        {
            return 1;
        }

        else
        {
            cout << "\nWrong PIN!\n";
            system("color 4F"); // turn screen to red
        }
    } while (pin_code != "1234");

    return 0;
}

int main()
{
    if (login())
    {
        system("color 2F"); // turn screen to green
        cout << "Your account balance is: " << 7500 << "\n";
    }
    return 0;
}
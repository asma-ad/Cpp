#include <iostream>
#include <string>
using namespace std;
/*
Problem #49
Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the
balance to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.

Only allow user to enter the PIN 3 times, if fails, print “Card is locked!”

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
    int counter = 3;
    do
    {
        counter--;
        pin_code = readPinCode();

        if (pin_code == "1234")
        {
            return 1;
        }

        else
        {
            system("color 4F"); // turn screen to red
            cout << "\nWrong PIN! you have " << counter << " more time!\n";
        }
    } while (counter >= 1 && pin_code != "1234");

    return 0;
}

int main()
{
    if (login())
    {
        system("color 2F"); // turn screen to green
        cout << "Your account balance is: " << 7500 << "\n";
    }
    else
    {
        cout << "Your card is blocked, call the bank for help!\n";
    }
    return 0;
}

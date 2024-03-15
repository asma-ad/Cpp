#include <iostream>
using namespace std;
/*
    The getline() function does not ignore leading white space characters.
    You should take special care when using it in conjunction with cin.
    To solve the problem use "cin.ignore()" function.

    The cin.ignore() function is used which is used to ignore or clear one or more characters from the input buffer.
*/

int main()
{
    int age;
    string name, country;

    cout << "Please enter your age:\n";
    cin >> age;

    cout << "Please enter your name:\n";
    cin.ignore(1, '\n');
    getline(cin, name);

    cout << "Please enter your country:\n";
    cin >> country;

    cout << "Age: " << age << ", name: " << name << ", country: " << country;

    return 0;
}
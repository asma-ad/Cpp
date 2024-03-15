#include <iostream>
using namespace std;
/*
Problem #6:
Write a program to ask user to enter: First name, last name.
Then print full name on the screen.
*/

struct stFullName
{
    string first_name;
    string last_name;
};

stFullName readName()
{
    stFullName full_name;

    cout << "Enter your first name: ";
    cin >> full_name.first_name;

    cout << "Enter your last name: ";
    cin >> full_name.last_name;

    return full_name;
}

// void printFullName(stFullName full_name)
// {
//     cout << full_name.first_name << " " << full_name.last_name << endl;
// }

string getFullName(stFullName full_name, bool reversed)
{
    string fullName;
    if (reversed)
        fullName = full_name.last_name + " " + full_name.first_name;
    else
        fullName = full_name.first_name + " " + full_name.last_name;

    return fullName;
}

void printFullName(string fullName)
{
    cout << fullName << endl;
}

int main()
{
    printFullName(getFullName(readName(), true));

    return 0;
}
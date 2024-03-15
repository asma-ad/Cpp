#include <iostream>
using namespace std;
/*
    Problem #1:
    Write a program to ask the user to enter their name and print it name on the screen
*/

string readName()
{
    string name;
    cout << "Please enter your name: ";
    getline(cin, name);
    return name;
}

void printName(string name)
{
    cout << "Welcome " << name << endl;
}

int main()
{
    printName(readName());
    return 0;
}
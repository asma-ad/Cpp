#include <iostream>
#include <vector>
using namespace std;
/*
Problem #40:
Write a program to join vector of strings into a string with separators.

Join string function: concatenates one or more strings with a delimiter added between each String .
*/

string joinString(vector<string> vText, string delim)
{
    string OutputText = "";
    for (string &s : vText)
    {
        // concatenation
        OutputText = OutputText + s + delim;
    }
    // remove last delim and return string
    return OutputText.substr(0, OutputText.length() - delim.length());
}

string joinString(string Text[], int length, string delim)
{
    string OutputText = "";
    for (int i = 0; i < length; i++)
    {
        // concatenation
        OutputText = OutputText + Text[i] + delim;
    }
    // remove last delim and return string
    return OutputText.substr(0, OutputText.length() - delim.length());
}

int main()
{
    string text[5] = {"Asma", "Mohammad", "Ali", "Sarah", "Nour"};
    vector<string> vText = {"Asma", "Mohammad", "Ali", "Sarah", "Nour"};

    cout << "\n\nArray after join:\n";
    cout << joinString(text, 5, " ") << endl;

    cout << "\n\nVector after join:\n";
    cout << joinString(vText, " ") << endl;

    return 0;
}
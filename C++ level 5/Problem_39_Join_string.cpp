#include <iostream>
#include <vector>
using namespace std;
/*
Problem #39:
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

void printVector(vector<string> vText)
{
    for (string &s : vText)
    {
        cout << s;
    }
}

int main()
{
    vector<string> vText = {"Asma", "Mohammad", "Ali", "Sarah", "Nour"};

    cout << "\nVector before join:\n";
    printVector(vText);

    cout << "\n\nVector after join:\n";
    cout << joinString(vText, " ") << endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
/*
Problem #42
Write a program to replace words in string.
*/

string replaceText(string text, string stringToReplace, string newWord)
{
    // find the string position of word want to replace
    short pos = text.find(stringToReplace);
    // while pos is found
    while (pos != std::string::npos)
    {
        // replace the old word to the new one
        text = text.replace(pos, stringToReplace.length(), newWord);
        // find next one
        pos = text.find(stringToReplace);
    }

    return text;
}

int main()
{
    string text = "Welcome to USA , USA is a nice country!";
    string stringToReplace = "USA";
    string newWord = "MOROCCO";

    cout << "\nOriginal text:\n"
         << text;

    cout << "\n\nText after replacement:\n"
         << replaceText(text, stringToReplace, newWord);

    return 0;
}
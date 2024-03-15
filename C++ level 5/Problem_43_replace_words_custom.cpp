#include <iostream>
#include <vector>
using namespace std;
/*
Problem #43
Write a program to replace words in string using custom function.
*/

std::vector<std::string> split(std::string text, std::string delim)
{
    std::vector<std::string> vWords;
    std::string word;
    short pos = 0;

    while ((pos = text.find(delim)) != std::string::npos)
    {
        word = text.substr(0, pos);
        if (word != "")
            vWords.push_back(word);
        text.erase(0, pos + delim.length());
    }
    if (text != "")
        vWords.push_back(text);

    return vWords;
}

std::string upperAllLetter(std::string text)
{
    for (short i = 0; i < text.length(); i++)
    {
        text[i] = toupper(text[i]);
    }
    return text;
}

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

string replaceText(string text, string stringToReplace, string newWord, bool matchCase = true)
{
    // split string
    vector<string> vText = split(text, " ");

    for (string &s : vText)
    {
        if (matchCase)
        {
            if (s == stringToReplace)
                s = newWord;
        }
        else
        {
            if (upperAllLetter(stringToReplace) == upperAllLetter(s))
                s = newWord;
        }
    }
    return joinString(vText, " ");
}

int main()
{
    string text = "Welcome to USA , USA is a nice country!";
    string stringToReplace = "usa";
    string newWord = "MOROCCO";

    cout << "\nOriginal text:\n"
         << text;

    cout << "\n\nReplacement with match case:\n"
         << replaceText(text, stringToReplace, newWord);

    cout << "\n\nReplacement with not match case:\n"
         << replaceText(text, stringToReplace, newWord, false);

    return 0;
}
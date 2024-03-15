#include <iostream>
#include <vector>
using namespace std;
/*
Problem #41
Write a program to read a string and reverse its words.
*/

std::string readString()
{
    std::string text = "";
    std::cout << "Enter a text:\n";
    getline(std::cin, text);
    return text;
}

std::vector<std::string> split(std::string text, std::string delim)
{
    std::vector<std::string> vWords;
    std::string word;
    short pos = 0;

    while ((pos = text.find(delim)) != std::string::npos)
    {
        word = text.substr(0, pos);
        if (word != "")
            vWords.push_back(word); // add word to vector
        text.erase(0, pos + delim.length());
    }
    if (text != "")
        vWords.push_back(text); // add the last  word to vector

    return vWords;
}

string reverseWords(string text)
{
    string rev_text = "";
    vector<string> vText = split(text, " "); // split text

    vector<string>::iterator i = vText.end(); // start iterator from end (last word)
    while (i != vText.begin())
    {
        --i;
        rev_text += *i + " "; // add reversed words to string
    }

    return rev_text.substr(0, rev_text.length() - 1); // remove last space
}

int main()
{
    string text = readString();
    cout << "\n\nAfter reverse:\n";
    cout << reverseWords(text);

    return 0;
}
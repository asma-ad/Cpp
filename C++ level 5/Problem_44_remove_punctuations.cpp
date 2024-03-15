#include <iostream>
#include <string>
using namespace std;
/*
Problem #44
write a program to remove all punctuation  in a string.
*/

string punctuationRemoved(string text)
{
    string str = "";
    for (int i = 0; i < text.length(); i++)
    {
        if (!ispunct(text[i]))
        {
            str += text[i];
        }
    }
    return str;
}

int main()
{
    string text = "Hello, world! I'm a Cpp programmer.";
    cout << "\nOriginal text:\n"
         << text;

    cout << "\n\nPunctuation removed:\n"
         << punctuationRemoved(text);

    system("pause>0");
}
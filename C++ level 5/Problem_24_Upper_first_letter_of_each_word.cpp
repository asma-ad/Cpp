#include <iostream>
#include <string>
using namespace std;
/*
Problem #24
write a program to read a string then uppercase the first letter of each word in that string.
*/

std::string readString()
{
    std::string text = "";
    std::cout << "Enter your text, please:\n";
    getline(std::cin, text);
    return text;
}

std::string upperFirstLetter(std::string text)
{
    bool isFirstLetter = true;

    for (short i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ' && isFirstLetter)
            text[i] = toupper(text[i]);

        isFirstLetter = (text[i] == ' ' ? true : false);
    }
    return text;
}

int main()
{
    std::cout << upperFirstLetter(readString());

    return 0;
}
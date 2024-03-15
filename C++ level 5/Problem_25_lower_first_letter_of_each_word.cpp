#include <iostream>
#include <string>
using namespace std;
/*
Problem #25
write a program to read a string then lowercase the first letter of each word in that string.
*/

std::string readString()
{
    std::string text = "";
    std::cout << "Enter your text, please:\n";
    getline(std::cin, text);
    return text;
}

std::string lowerFirstLetter(std::string text)
{
    bool isFirstLetter = true;

    for (short i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ' && isFirstLetter)
            text[i] = tolower(text[i]);

        isFirstLetter = (text[i] == ' ' ? true : false);
    }
    return text;
}

int main()
{
    std::cout << lowerFirstLetter(readString());

    return 0;
}
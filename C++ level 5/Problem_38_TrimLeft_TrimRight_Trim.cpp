#include <iostream>
/*
Problem #38:
write a program to read a string then trim left, right, all.

Note: Trim function is used to remove any extra white space from strings entered by the user before concatenating them.
*/

std::string readString()
{
    std::string text = "";
    std::cout << "Enter a text:\n";
    getline(std::cin, text);
    return text;
}

std::string trimLeft(std::string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ')
            return text.substr(i, text.length() - 1);
    }
    return "";
}

std::string trimRight(std::string text)
{
    for (int i = text.length() - 1; i >= 0; i--)
    {
        if (text[i] != ' ')
            return text.substr(0, i + 1);
    }
    return "";
}

std::string trimAll(std::string text)
{
    return trimLeft(trimRight(text));
}

int main()
{
    std::string text = readString();
    std::cout << "\n\nText            = " << text << "\n";
    std::cout << "Trim-Left       = " << trimLeft(text) << "\n";
    std::cout << "Trim-Right      = " << trimRight(text) << "\n";
    std::cout << "Trim-Left-Right = " << trimAll(text) << "\n";

    return 0;
}
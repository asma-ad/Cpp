#include <iostream>
/*
Problem #28
write a program to read a string, then invert all its letter's case and print it.
*/

std::string readString()
{
    std::string text = "";
    std::cout << "Enter a text:\n";
    getline(std::cin, text);
    return text;
}
char invertLetterCase(char c)
{
    return isupper(c) ? tolower(c) : toupper(c);
}
std::string invertAllLetterCase(std::string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] = invertLetterCase(text[i]);
    }
    return text;
}

int main()
{
    std::string text = readString();
    std::cout << "\nString after inverting all letters case:\n"
              << invertAllLetterCase(text);

    return 0;
}
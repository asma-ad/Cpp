#include <iostream>
#include <string>
/*
Problem #26
write a program to read a string then upper all letters,
then lower all letters, and print it.
*/

std::string readString()
{
    std::string text = "";
    std::cout << "Enter your text, please:\n";
    getline(std::cin, text);
    return text;
}

std::string lowerAllLetter(std::string text)
{
    for (short i = 0; i < text.length(); i++)
    {
        text[i] = tolower(text[i]);
    }
    return text;
}

std::string upperAllLetter(std::string text)
{
    for (short i = 0; i < text.length(); i++)
    {
        text[i] = toupper(text[i]);
    }
    return text;
}

int main()
{

    std::string text = readString();
    std::cout << "\nUpper:\n"
              << upperAllLetter(text);
    std::cout << "\nLower:\n"
              << lowerAllLetter(text);

    return 0;
}
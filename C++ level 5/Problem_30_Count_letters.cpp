#include <iostream>
/*
Problem #30
write a program to read a string, then read a character,
then count the character in that string.
*/

std::string readString()
{
    std::string text = "";
    std::cout << "Enter a text:\n";
    getline(std::cin, text);
    return text;
}

char readChar()
{
    char c = 'c';
    std::cout << "Enter a character to search how many repeated:\n";
    std::cin >> c;
    return c;
}

int countCharacterRepetition(char c, std::string text)
{
    int count = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == c)
            count++;
    }
    return count;
}

int main()
{
    std::string text = readString();
    char c = readChar();
    std::cout
        << "Letter " << c << "count = "
        << countCharacterRepetition(c, text);
    return 0;
}
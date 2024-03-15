#include <iostream>
/*
Problem #31
write a program to read a string, then read a character,
then count the character in that string. (match case or not)
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

char invertLetterCase(char c)
{
    return isupper(c) ? tolower(c) : toupper(c);
}

int countCharacterRepetition(char c, std::string text, bool match = true)
{
    int count = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if (match)
        {
            if (text[i] == c)
                count++;
        }
        else
        {
            if (tolower(text[i]) == tolower(c))
                count++;
        }
    }
    return count;
}

int main()
{
    std::string text = readString();
    char c = readChar();

    std::cout
        << "Letter \'" << c << "\' count = " << countCharacterRepetition(c, text)
        << "\nLetter \'" << c << "\' or \'" << invertLetterCase(c) << "\' count = "
        << countCharacterRepetition(c, text, false);
    return 0;
}
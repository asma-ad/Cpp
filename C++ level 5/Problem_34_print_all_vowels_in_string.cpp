#include <iostream>
/*
Problem #34
write a program to read a string, then print all vowels in that string.
*/

std::string readString()
{
    std::string text = "";
    std::cout << "Enter a text:\n";
    getline(std::cin, text);
    return text;
}

bool isVowel(char letter)
{
    letter = toupper(letter);
    return (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');
}

void printVowels(std::string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (isVowel(text[i]))
            std::cout << text[i] << "   ";
    }
}

int main()
{

    std::string text = readString();
    std::cout << "Vowels in your text are : ";
    printVowels(text);

    return 0;
}
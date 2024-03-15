#include <iostream>
/*
Problem #32
write a program to read a string, then count all vowels in that string.
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

int countVowel(std::string text)
{
    int counter = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if (isVowel(text[i]))
            counter++;
    }
    return counter;
}

int main()
{

    std::string text = readString();

    std::cout << "Number of vowels is: " << countVowel(text);

    return 0;
}
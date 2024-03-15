#include <iostream>
/*
Problem #29
write a program to read a string, then count small/capital letters.
*/

std::string readString()
{
    std::string text = "";
    std::cout << "Enter a text:\n";
    getline(std::cin, text);
    return text;
}
int countSmallLetters(std::string text)
{
    int counter = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if (islower(text[i]))
            counter++;
    }
    return counter;
}

int countCapitaletters(std::string text)
{
    int counter = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if (isupper(text[i]))
            counter++;
    }
    return counter;
}

int main()
{
    std::string text = readString();
    std::cout << "\nCapital letters count : " << countCapitaletters(text);
    std::cout << "\nSmall letters count : " << countSmallLetters(text);

    return 0;
}
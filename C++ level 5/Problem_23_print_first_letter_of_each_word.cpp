#include <iostream>
using namespace std;
/*
Problem #23
write a program to read a string then print the first letter of each word in that string.
*/

std::string readString()
{
    std::string text = "";
    std::cout << "Enter your text, please:\n";
    getline(std::cin, text);
    return text;
}
// my function
/*
void printFirstLetter(std::string text)
{
    // print the 1st letter
    std::cout << text[0] << std::endl;
    // iterate through the string starting from 2nd char
    for (int i = 1; text[i] != '\0'; i++)
    {
        // if char is space, print next
        if (text[i] == ' ')
            std::cout << text[i + 1] << std::endl;
    }
}
*/

void printFirstLetter(std::string text)
{
    bool isFirstLetter = true;

    for (short i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ' && isFirstLetter)
            std::cout << text[i] << std::endl;

        isFirstLetter = (text[i] == ' ' ? true : false);
    }
}

int main()
{
    printFirstLetter(readString());
    return 0;
}
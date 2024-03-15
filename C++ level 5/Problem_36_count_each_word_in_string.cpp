#include <iostream>
/*
Problem #36
write a program to read a string, then count each word in that string.
*/

std::string readString()
{
    std::string text = "";
    std::cout << "Enter a text:\n";
    getline(std::cin, text);
    return text;
}

short countWordsInString(std::string text)
{
    std::string delim = " ";
    std::string word;
    short pos = 0;
    short counter = 0;

    while ((pos = text.find(delim)) != std::string::npos)
    {
        word = text.substr(0, pos);
        if (word != "")
            counter++;
        text.erase(0, pos + delim.length());
    }
    if (text != "")
        counter++;

    return counter;
}

int main()
{
    std::string text = readString();
    std::cout << "\nThe number of words in text is: " << countWordsInString(text);
    return 0;
}
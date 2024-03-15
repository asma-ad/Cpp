#include <iostream>
/*
Problem #35
write a program to read a string, then print each word in a line.
*/

std::string readString()
{
    std::string text = "";
    std::cout << "Enter a text:\n";
    getline(std::cin, text);
    return text;
}

void printEachWordInLine(std::string text)
{
    // delimiter to separate words
    std::string delim = " ";
    std::cout << "\nYour string words are:\n\n";
    // position var for finding the delimiter
    short pos = 0;
    // var to store each word extracted from the string
    std::string sWord;
    // set pos to the position found of delim and check if it's npos
    // Continue looping as long as the delimiter is found in the text
    while ((pos = text.find(delim)) != std::string::npos)
    {
        // extract the word
        sWord = text.substr(0, pos);
        // check if the word is not just a space, then print it
        if (sWord != "")
        {
            std::cout << sWord << std::endl;
        }
        // remove the printed word and delimiter
        text.erase(0, pos + delim.length());
    }
    // Print the last word in the string
    if (text != "")
        std::cout << text << std::endl;
}

int main()
{
    printEachWordInLine(readString());
    return 0;
}
#include <iostream>
#include <vector>
/*
Problem #37
write a program to read a string, then make a function to split each word in vector.
*/

std::string readString()
{
    std::string text = "";
    std::cout << "Enter a text:\n";
    getline(std::cin, text);
    return text;
}

std::vector<std::string> split(std::string text, std::string delim)
{
    std::vector<std::string> vWords;
    std::string word;
    short pos = 0;

    while ((pos = text.find(delim)) != std::string::npos)
    {
        word = text.substr(0, pos);
        if (word != "")
            vWords.push_back(word); // add word to vector
        text.erase(0, pos + delim.length());
    }
    if (text != "")
        vWords.push_back(text); // add the last  word to vector

    return vWords;
}

int main()
{
    std::vector<std::string> vWords = split(readString(), " ");
    // print elements' number
    std::cout << "Tokens = " << vWords.size() << std::endl;
    // print vector
    for (std::string &s : vWords)
    {
        std::cout << s << std::endl;
    }
    return 0;
}
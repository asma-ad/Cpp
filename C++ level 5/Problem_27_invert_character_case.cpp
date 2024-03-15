#include <iostream>
/*
Problem #27
write a program to read a character, then invert its case and print it.
*/

char readChar()
{
    char c;
    std::cout << "Enter a charater: ";
    std::cin >> c;
    return c;
}

char invertLetterCase(char c)
{
    return isupper(c) ? tolower(c) : toupper(c);
}

int main()
{
    char c = readChar();
    std::cout << invertLetterCase(c);

    return 0;
}
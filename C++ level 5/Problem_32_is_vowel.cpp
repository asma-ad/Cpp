#include <iostream>
/*
Problem #32
write a program to read a character then check if it's a vowel letter or not.
*/

char readChar()
{
    char c = 'c';
    std::cout << "Enter a character:\n";
    std::cin >> c;
    return c;
}

bool isVowel(char letter)
{
    letter = toupper(letter);
    return (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');
}

int main()
{
    char letter = readChar();

    if (isVowel(letter))
        std::cout << "Yes, letter " << letter << " is vowel\n";
    else
        std::cout << "No, letter " << letter << " is NOT vowel\n";
    return 0;
}
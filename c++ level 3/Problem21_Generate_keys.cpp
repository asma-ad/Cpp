#include <iostream>
using namespace std;
/*
Problem #21:
Write a program to read how many keys to generate and print them on the screen.
*/

enum enCharType
{
    small_letter = 0,
    capital_letter = 1,
    special_char = 2,
    digit = 3
};

int readPositiveNumber(string message)
{
    int number = 0;

    do
    {
        cout << message;
        cin >> number;
    } while (number < 0);

    return number;
}

int randomNumbers(int from, int to)
{
    return rand() % (to - from - 1) + from;
}

char randomCharacter(enCharType type)
{
    switch (type)
    {
    case enCharType::small_letter:
        return (char)randomNumbers(97, 122);
    case enCharType::capital_letter:
        return (char)randomNumbers(65, 90);
    case enCharType::special_char:
        return (char)randomNumbers(33, 47);
    case enCharType::digit:
        return (char)randomNumbers(48, 57);

    default:
        break;
    }
}

string generateWord(enCharType type, short length)
{
    string word = "";

    for (int i = 0; i < length; i++)
    {
        word = word + randomCharacter(type);
    }

    return word;
}

string generateKey()
{

    string Key = "";
    short length = 4;

    for (int i = 0; i < length; ++i)
    {

        Key += generateWord(enCharType::capital_letter, length);

        if (i < (length - 1))
            Key += "-";
    }

    /*
    string Key = "";

    Key = generateWord(enCharType::capital_letter, 4) + "-";
    Key = Key + generateWord(enCharType::capital_letter, 4) + "-";
    Key = Key + generateWord(enCharType::capital_letter, 4) + "-";
    Key = Key + generateWord(enCharType::capital_letter, 4);
    */

    return Key;
}

void generateKeys(short number_of_keys)
{
    for (int i = 1; i <= number_of_keys; i++)
    {
        cout << "Key [" << i << "] : " << generateKey() << endl;
    }
}
int main()
{
    generateKeys(readPositiveNumber("Number of keys: "));

    return 0;
}
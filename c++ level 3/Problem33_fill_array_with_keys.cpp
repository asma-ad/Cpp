#include <iostream>
using namespace std;
/*
Problem #33
Write a program to read how many keys to generate and fill them in an array,
then, print them on the screen.
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

    return Key;
}

void fillArrayElementsWithKeys(string arr[], int length)
{
    for (int i = 0; i < length; i++)
        arr[i] = generateKey();
}

void printArrayKeys(string arr[], int length)
{
    for (int i = 0; i < length; i++)
    {

        cout << "Array[" << i << "]: ";
        cout << arr[i] << "\n";
    }
    cout << endl;
}

int main()
{
    srand(unsigned(time(NULL)));

    int length = readPositiveNumber("Enter key's number: ");
    string arr[length];

    fillArrayElementsWithKeys(arr, length);
    printArrayKeys(arr, length);

    return 0;
}
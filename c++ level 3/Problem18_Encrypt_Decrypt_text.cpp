#include <iostream>
using namespace std;
/*
Problem #18
Write a program to read a text and encrypt it, then decrypt it.
*/

string readText(string message)
{
    string text = "";
    cout << message;
    getline(cin, text);
    return text;
}

string encryptText(string text, int encryption_key)
{

    for (int i = 0; i <= text.length(); i++)
    {
        text[i] = char(text[i] + encryption_key);
    }
    return text;
}

string decruptText(string text, int encryption_key)
{
    for (int i = 0; i <= text.length(); i++)
    {
        text[i] = char(text[i] - encryption_key);
    }
    return text;
}

int main()
{
    short encryption_key = 5;
    string text = readText("Enter a text: ");
    string encrypt = encryptText(text, encryption_key);
    string decrypt = decruptText(encrypt, encryption_key);

    cout << "\nText before encryption: " << text;
    cout << "\nText after encryption: " << encrypt;
    cout << "\nText after decryption: " << decrypt;

    return 0;
}
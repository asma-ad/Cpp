#include <iostream>
using namespace std;
/*
Problem #17
Write a program to guess a 3-letter password (all capital)
*/

string readLetters(string message)
{
    string letters = " ";
    cout << message;
    cin >> letters;
    return letters;
}

bool guessPassword(string password)
{
    string word = "";
    int counter = 0;

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int e = 65; e <= 90; e++)
            {
                counter++;

                word = word + char(i);
                word = word + char(j);
                word = word + char(e);

                cout << "Trial [" << counter << "]: " << word << "\n";

                if (word == password)
                {
                    cout << "\nPassword is " << password << "\nFound after " << counter << " trial(s)." << endl;
                    return true;
                }

                word = "";
            }
        }
    }
    return false;
}

int main()
{
    guessPassword(readLetters("Enter 3-letter password (all capital): "));

    return 0;
}
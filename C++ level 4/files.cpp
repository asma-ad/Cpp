#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("file.txt", ios::out); // write mode
    if (file.is_open())
    {
        file << "Hello file!\n";
        file << "I'm C++ language!\n";
        file << "Let's code!\n";
        file.close();
    }

    // file.open("file.txt", ios::out | ios::app); // append mode
    file.open("file.txt", ios::app); // append mode
    if (file.is_open())
    {
        file << "This is a new line (append)!\n";
        file.close();
    }

    file.open("file.txt", ios::in); // read mode
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }

    return 0;
}
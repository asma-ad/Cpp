#include <iostream>
using namespace std;
/*
Problem #16
Write a program to print all words from AAA to ZZZ:
AAA
AAB
AAC
.
.
ZZZ
*/

void printAAAtoZZZ()
{
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int e = 65; e <= 90; e++)
            {
                cout << char(i) << char(j) << char(e);
                cout << "\n";
            }
        }
    }
}

int main()
{
    printAAAtoZZZ();
    return 0;
}
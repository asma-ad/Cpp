#include <iostream>
using namespace std;

int readNumber()
{
    int number;

    do
    {
        cout << "Enter a number: ";
        cin >> number;
    } while (number < 0);

    return number;
}

void printNumbers(int N)
{

    for (int i = 1; i <= N; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    printNumbers(readNumber());
    return 0;
}
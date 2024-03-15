#include <iostream>
using namespace std;

void readNumber(int &n)
{
    cout << "Enter a number: ";
    cin >> n;
}

void printNumber(int n)
{
    for (int i = n; i >= 1; i--)
    {
        cout << i << endl;
    }
}

int main()
{
    int number;
    readNumber(number);
    printNumber(number);

    return 0;
}
#include <iostream>
using namespace std;

void readNumber(int &n)
{
    cout << "Enter a number: ";
    cin >> n;
}

void printNumber(int n)
{
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << endl;
    // }

    int i = 1;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
}

int main()
{
    int number;
    readNumber(number);
    printNumber(number);

    return 0;
}
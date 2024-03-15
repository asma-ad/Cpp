#include <iostream>
using namespace std;

int main()
{

    for (int j = 1; j <= 11; j++)
    {

        for (int i = 1; i <= j; i++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}
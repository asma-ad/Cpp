#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 12; i++)
    {
        cout << "multiples of " << i << ":"
             << "\n";
        for (int j = 1; j <= 12; j++)
        {
            cout << i << " * " << j << " = " << i * j << "\n";
        }
        cout << "--------------\n";
    }

    return 0;
}
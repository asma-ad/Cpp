#include <iostream>
using namespace std;

int main()
{
    for (int n = 1; n <= 4; n++)
    {
        cout << n << " times\n";

        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                cout << "#";
            }
            cout << endl;
        }

        cout << "\n";
    }

    return 0;
}
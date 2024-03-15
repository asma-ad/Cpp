#include <iostream>
using namespace std;

int main()
{
    for (int i = 65; i <= 90; i++)
    {
        int a = 64;

        for (int j = 1; j <= 26; j++)
        {
            a += 1;
            cout << char(i) << " " << char(a);
            cout << "\n";
        }

        cout << "----\n";
    }

    return 0;
}
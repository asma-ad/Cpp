#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 65; i <= 90; i++)
    {
        cout << "Letter: " << char(i) << "\n";

        for (j = 65; j <= 90; j++)
        {
            cout << char(i) << " " << char(j) << "\n";
        }
        cout << "--------\n";
    }

    return 0;
}
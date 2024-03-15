#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'a', 's', 'm', 'a', '!'};
    for (char n : arr) // arr is a collection
    {
        cout << n;
    }
    return 0;
}
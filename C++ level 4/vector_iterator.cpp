#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> number{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    vector<int>::iterator i;
    for (i = number.begin(); i != number.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}
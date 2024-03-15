#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> number{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    try
    {
        cout << number.at(10) << endl;
    }
    catch (...)
    {
        cout << "Not found" << endl;
    }

    return 0;
}
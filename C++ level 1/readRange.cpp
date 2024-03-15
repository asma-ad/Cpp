#include <iostream>
using namespace std;

int readRange(int from, int to)
{
    int number;

    do
    {
        cout << "Enter a number between " << from << " and " << to << ":\n";
        cin >> number;
    } while (number < from || number > to);

    return number;
}

int main()
{
    cout << readRange(11, 63)
         << " is valid number!\nGreat job.";

    return 0;
}
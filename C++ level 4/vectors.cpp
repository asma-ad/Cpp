#include <iostream>
#include <vector>
using namespace std;

void readNumbers(vector<int> &vNumbers)
{
    int number = 0;
    char N = 'Y';

    do
    {
        cout << "Enter a number: ";
        cin >> number;
        vNumbers.push_back(number);

        cout << "Do you want to ad another number (Y/N)? ";
        cin >> N;

    } while (N == 'Y' || N == 'y');
}

void printNumbers(vector<int> &vNumbers)
{
    cout << "Entered numbers are : ";
    for (int &i : vNumbers)
    {
        cout << i << " ";
    }
}

int main()
{
    vector<int> vNumbers;
    readNumbers(vNumbers);
    printNumbers(vNumbers);

    return 0;
}
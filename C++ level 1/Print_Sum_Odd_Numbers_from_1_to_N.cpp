#include <iostream>
using namespace std;

void readNumber(int &n)
{
    cout << "Enter a number: ";
    cin >> n;
}

int printSumOddNumber(int n)
{
    int sum = 0, i = 0;

    // for (int i = 1; i <= n; i = i + 2)
    // {

    //     sum += i;
    // }

    while (sum <= n)
    {
        sum += i;
        i++;
    }

    return sum;
}

int main()
{
    int number;
    readNumber(number);
    cout << printSumOddNumber(number) << endl;

    return 0;
}
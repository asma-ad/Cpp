#include <iostream>
using namespace std;

void readNumber(int &n)
{
    cout << "Enter a number: ";
    cin >> n;
}

int printSumEvenNumber(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i = i + 2)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int number;
    readNumber(number);
    cout << printSumEvenNumber(number) << endl;

    return 0;
}
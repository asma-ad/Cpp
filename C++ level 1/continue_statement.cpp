#include <iostream>
using namespace std;

int main()
{
    int arr[5], sum = 0;

    for (int i = 0; i < 5; i++)
    {

        cout << "Enter a number: ";
        cin >> arr[i];

        if (arr[i] > 50)
        {
            cout << "The number is greater then 50, won't be calculated.\n";
            continue;
        }

        sum += arr[i];
    }

    cout << sum;

    return 0;
}
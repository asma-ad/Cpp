#include <iostream>
using namespace std;

void fillArray(int arr[10][10])
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            arr[i - 1][j - 1] = i * j;
        }
    }
}

void printArray(int arr[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%0*d ", 2, arr[i][j]);
        }
        cout << endl;
    }
}

int main()
{
    int arr[10][10];
    cout << "Multiplication table : \n\n";
    fillArray(arr);
    printArray(arr);

    return 0;
}
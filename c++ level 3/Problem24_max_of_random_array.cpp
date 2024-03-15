#include <iostream>
using namespace std;
/*
Problem #24
Write a program to fill an array with max size 100 with random numbers from 1 to 100, then print max
*/

int randomNumbers(int from, int to)
{
    return (rand() % (to - from - 1) + from);
}

void fillArrayElements(int arr[100], int &length)
{
    cout << "Enter the size of array: ";
    cin >> length;

    for (int i = 0; i < length; i++)
        arr[i] = randomNumbers(1, 100);
}

void printArray(int arr[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int maxNumber(int arr[100], int length)
{

    int max = arr[0];

    for (int i = 1; i < length; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int main()
{
    srand(time(NULL));

    int arr[100], length;

    fillArrayElements(arr, length);
    cout << "Array's elements: ";
    printArray(arr, length);
    cout << "Max number is: " << maxNumber(arr, length);

    return 0;
}
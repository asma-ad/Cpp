#include <iostream>
using namespace std;
/*
Problem #28
Write a program to fill an array with max size 100 with random numbers from 1 to 100,
then copy it to another array and print it.
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

void copyArrayElements(int arr[100], int arr2[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        arr2[i] = arr[i];
    }
}

int main()
{
    srand(time(NULL));

    int arr[100], arr2[100], length;
    fillArrayElements(arr, length);

    cout << "\nArray's elements: ";
    printArray(arr, length);

    cout << "\nCopied array : ";
    copyArrayElements(arr, arr2, length);
    printArray(arr2, length);

    return 0;
}
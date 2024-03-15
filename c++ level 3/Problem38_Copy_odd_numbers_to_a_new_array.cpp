#include <iostream>
using namespace std;
/*
Problem #38
Write a program to fill an array with max size 100 with random numbers from 1 to 100,
then copy only odd numbers to another array using "addNumberToArray" function, and print it.
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

void addNumberToArray(int arr[], int &length, int number)
{
    length++;
    arr[length - 1] = number;
}

void copyOddNumbersUsingAddNumberToArray(int arr[100], int length, int arr2[100], int &length2)
{
    for (int i = 0; i < length; i++)
        if (arr[i] % 2 != 0)
        {
            addNumberToArray(arr2, length2, arr[i]);
        }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], length = 0, length2 = 0, arr2[100];
    fillArrayElements(arr, length);

    copyOddNumbersUsingAddNumberToArray(arr, length, arr2, length2);

    cout << "Array 1:\n";
    printArray(arr, length);
    cout << "Array 2:\n";
    printArray(arr2, length2);

    return 0;
}
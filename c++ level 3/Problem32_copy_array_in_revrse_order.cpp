#include <iostream>
using namespace std;
/*
Problem #32
Write a program to fill an array with max size 100 with random numbers from 1 to 100,
copy it to another array in revrse order and print it.
*/

int readPositiveNumber(string message)
{
    int number = 0;

    do
    {
        cout << message;
        cin >> number;
    } while (number < 0);

    return number;
}

int randomNumbers(int from, int to)
{
    return (rand() % (to - from + 1) + from);
}

void fillArrayElements(int arr[100], int length)
{
    for (int i = 0; i < length; i++)
        arr[i] = randomNumbers(1, 100);
}

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reversedArray(int arr[], int arr2[], int length)
{
    for (int i = 0; i < length; i++)
        arr2[i] = arr[length - 1 - i];

    /*
    for (int i = 0, j = length - 1; i < length; i++, j--)
        arr2[j] = arr[i];
    */
}

int main()
{
    srand(unsigned(time(NULL)));

    int arr[100], arr2[100];
    int length = readPositiveNumber("Please, enter ther size of array: ");

    fillArrayElements(arr, length);
    cout << "\nOriginal array: ";
    printArray(arr, length);

    reversedArray(arr, arr2, length);
    cout << "Reversed array: ";
    printArray(arr2, length);

    cout << "\n";

    return 0;
}
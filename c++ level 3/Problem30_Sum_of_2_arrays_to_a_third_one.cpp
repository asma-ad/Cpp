#include <iostream>
using namespace std;
/*
Problem #30
Write a program to fill two arrays with max size 100 with random numbers from 1 to 100,
then sum their elements in a third array and print the result.
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
    return (rand() % (to - from - 1) + from);
}

void fillArrayElements(int arr[100], int length)
{
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

void sumArrayElements(int arr[100], int arr2[100], int arr3[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        arr3[i] = arr[i] + arr2[i];
    }
}

int main()
{
    srand(time(NULL));

    int arr[100], arr2[100], arr3[100], length = 0;
    length = readPositiveNumber("Enter the size of array: ");

    fillArrayElements(arr, length);
    fillArrayElements(arr2, length);

    sumArrayElements(arr, arr2, arr3, length);

    cout << "\nArray's elements N1: ";
    printArray(arr, length);

    cout << "\nArray's elements N2 : ";
    printArray(arr2, length);

    cout << "\nSum of the two arrays : ";
    printArray(arr3, length);

    return 0;
}
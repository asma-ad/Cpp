#include <iostream>
using namespace std;
/*
Problem #31
Write a program to fill an array with ordered numbers from 1 to N,
then print it, after that shuffle the array and print it after shuffle.
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

void swap(int &A, int &B)
{
    int temp;
    temp = A;
    A = B;
    B = temp;
}

void fillArrayOneToN(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] = i + 1;
    }
}

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void shuffleArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        swap(arr[randomNumbers(1, length) - 1], arr[randomNumbers(1, length) - 1]);
    }
}

int main()
{
    srand(unsigned(time(NULL)));

    int length = readPositiveNumber("\nEnter the size of array: ");
    int arr[length];

    fillArrayOneToN(arr, length);
    cout << "\nArray elements before shuffle: ";
    printArray(arr, length);

    shuffleArray(arr, length);
    cout << "\nArray elements after shuffle: ";
    printArray(arr, length);

    cout << "\n\n";
    return 0;
}
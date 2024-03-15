#include <iostream>
using namespace std;
/*
Problem #45
Write a program to fill an array with max size 100 with random numbers from -100 to 100,
then print the count of negative numbers in it.
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
        arr[i] = randomNumbers(-100, 100);
}

void printArray(int arr[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int negativeCountInArray(int arr[], int length)
{
    int counter = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < 0)
            counter++;
    }
    return counter;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], length = 0;
    fillArrayElements(arr, length);

    cout << "Array elements: ";
    printArray(arr, length);

    cout << "Negative numbers count is: "
         << negativeCountInArray(arr, length) << endl;

    return 0;
}
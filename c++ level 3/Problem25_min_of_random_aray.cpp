#include <iostream>
using namespace std;
/*
Problem #25
Write a program to fill an array with max size 100 with random numbers from 1 to 100,
then print minmum number
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

int minNumber(int arr[100], int length)
{

    int min = arr[0];

    for (int i = 1; i < length; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

int main()
{
    srand(time(NULL));

    int arr[100], length;

    fillArrayElements(arr, length);
    cout << "Array's elements: ";
    printArray(arr, length);
    cout << "Min number is: " << minNumber(arr, length);

    return 0;
}
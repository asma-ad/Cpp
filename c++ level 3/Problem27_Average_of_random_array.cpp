#include <iostream>
using namespace std;
/*
Problem #27
Write a program to fill an array with max size 100 with random numbers from 1 to 100,
then print average of all numbers.
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

int sumArrayElements(int arr[100], int length)
{

    int sum = 0, average = 0;

    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }

    return sum;
}

float arrayAverage(int arr[100], int length)
{
    return (float)sumArrayElements(arr, length) / length;
}

int main()
{
    srand(time(NULL));

    int arr[100], length;

    fillArrayElements(arr, length);
    cout << "Array's elements: ";
    printArray(arr, length);
    cout << "Sum of all numbers = " << arrayAverage(arr, length);

    return 0;
}
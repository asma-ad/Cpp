#include <iostream>
using namespace std;
/*
Problem #23
Write a program to fill an array with max size 100 with random numbers from 1 to 10
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

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrlength;

    arrlength = readPositiveNumber("Enter the array's length: ");
    fillArrayElements(arr, arrlength);

    cout << "\nArray elements: ";
    printArray(arr, arrlength);

    return 0;
}
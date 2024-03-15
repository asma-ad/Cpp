#include <iostream>
using namespace std;
/*
Problem #35
Write a program to fill an array with max size 100 with random numbers from 1 to 100,
read number and print if it's found or not.
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

int readNumber()
{
    int number = 0;
    cout << "Enter a number to search: ";
    cin >> number;
    return number;
}

bool isNumberInArray(int arr[], int length, int number)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == number)
            return true;
    }
    return false;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], length = 0;
    fillArrayElements(arr, length);
    cout << "\nArray elements: ";
    printArray(arr, length);

    int number = readNumber();
    cout << "\nThe number you're looking for is: " << number << endl;

    if (!(isNumberInArray(arr, length, number)))
        cout << "No, the number isn't found";
    else
        cout << "Yes, the number is found";

    return 0;
}
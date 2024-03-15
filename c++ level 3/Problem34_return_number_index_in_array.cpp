#include <iostream>
using namespace std;
/*
Problem #34
Write a program to fill an array with max size 100 with random numbers from 1 to 100,
read number and return its index in array if found,
otherwise return-1.
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

bool searchForNumberInArray(int arr[], int length, int number)
{
    for (int i = 0; i < length; i++)
    {
        if (number == arr[i])
        {
            cout << "The number you're looking for is: " << number << endl;
            cout << "The number found at position: " << i << endl;
            cout << "The number's order is: " << i + 1 << endl;
            return true;
        }
    }
    cout << "Not found\n";
    return false;
}

int main()
{
    srand(time(NULL));
    int arr[100], length = 0, number = 0;
    fillArrayElements(arr, length);
    printArray(arr, length);

    number = readPositiveNumber("What number you are looking for?\n");
    searchForNumberInArray(arr, length, number);

    return 0;
}
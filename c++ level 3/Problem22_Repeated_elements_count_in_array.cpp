#include <iostream>
#include <algorithm>
using namespace std;

/*
Problem #22
Write a program to read N elements and store them in an array,
then printt all array elements and ask for a number to check,
then print how many number a certain element repeated in that array.
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

void readArrayElements(int arr[100], int &length)
{
    cout << "Please, enter the number of elements: ";
    cin >> length;

    cout << "\nEnter array elements please: \n";
    for (int i = 0; i < length; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
}

void printArray(int arr[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int timesRepeated(int number, int arr[100], int length)
{
    int counter = 0;

    for (int i = 0; i < length; i++)
    {
        if (number == arr[i])
            counter++;
    }
    return counter;
}

int main()
{
    int arr[100], arrlength, number;

    // arrlength = readPositiveNumber("Please, enter the number of elements: ");
    readArrayElements(arr, arrlength);
    number = readPositiveNumber("\nEnter the number you want to check: ");
    cout << "\nThe original array: ";
    printArray(arr, arrlength);

    cout << "\nNumber " << number << " is repeated " << timesRepeated(number, arr, arrlength) << " times.";

    return 0;
}
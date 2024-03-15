#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #39
Write a program to fill an array with max size 100 with random numbers from 1 to 100,
then copy only prime numbers to another array using "addNumberToArray" function, and print it.
*/
enum enPrimeNumber
{
    Prime = 1,
    NotPrime = 2
};

enPrimeNumber checkNumberType(int number)
{
    // Prime number is a whole number greater than 1 whose only factors are 1 and itself.

    if (number == 0 || number == 1) // 0 & 1 are not prime numbers!
        return enPrimeNumber::NotPrime;

    int n = sqrt(number);

    for (int i = 2; i <= n; i++)
    {
        if (number % i == 0)
            return enPrimeNumber::NotPrime;
    }

    return enPrimeNumber::Prime;
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

void addNumberToArray(int arr[], int &length, int number)
{
    length++;
    arr[length - 1] = number;
}

void copyPrimeNumbersToArray(int arr[100], int length, int arr2[100], int &length2)
{
    for (int i = 0; i < length; i++)
        if (enPrimeNumber::Prime == checkNumberType(arr[i]))
        {
            addNumberToArray(arr2, length2, arr[i]);
        }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], length = 0, length2 = 0, arr2[100];
    fillArrayElements(arr, length);

    copyPrimeNumbersToArray(arr, length, arr2, length2);

    cout << "Array 1:\n";
    printArray(arr, length);
    cout << "Array 2:\n";
    printArray(arr2, length2);

    return 0;
}
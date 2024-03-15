#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #29
Write a program to fill an array with max size 100 with random numbers from 1 to 100,
then copy only prime numbers to another array and print it.
*/
enum enPrimeNumber
{
    Prime = 1,
    NotPrime = 2
};

enPrimeNumber checkNumberType(int number)
{
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

void copyOnlyPrimeArrayElements(int arr[100], int length, int arr2[100], int &length2)
{
    int counter = 0;
    for (int i = 0; i < length; i++)
    {
        if (checkNumberType(arr[i]) == enPrimeNumber::Prime)
        {
            arr2[counter] = arr[i];
            counter++;
        }
    }
    length2 = --counter;
}

int main()
{
    srand(time(NULL));

    int arr[100], arr2[100], length = 0, length2 = 0;
    fillArrayElements(arr, length);

    cout << "\nArray's elements: ";
    printArray(arr, length);

    copyOnlyPrimeArrayElements(arr, length, arr2, length2);

    cout << "\nPrime numbers in array2: ";
    printArray(arr2, length2);

    return 0;
}
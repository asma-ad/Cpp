#include <iostream>
using namespace std;
/*
Problem #21
Write a program to print fibonacci series of 10.
*/

// usingg array
void fibonacci(int arr[], int length)
{
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < length; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}
void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i] << " ";
    }
}

// using loop
void printFibonacci(short number)
{
    int fibNumber = 0;
    int prev1 = 1, prev2 = 0;
    cout << "1  ";
    for (int i = 2; i <= number; i++)
    {
        fibNumber = prev1 + prev2;
        cout << fibNumber << "  ";
        prev2 = prev1;
        prev1 = fibNumber;
    }
}

int main()
{
    printFibonacci(10);

    /*
    int length = 10;
    int arr[length];

    fibonacci(arr, length);
    printArray(arr, length);
    */

    return 0;
}
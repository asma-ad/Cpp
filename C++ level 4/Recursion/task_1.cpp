#include <iostream>
using namespace std;

// Write a C++ program to find the sum of all elements in an array using recursion.

int sumOfArray(int arr[4], int arrlength)
{
    if (arrlength == 0)
        return 0;

    else if (arrlength > 0)
        return (arr[arrlength - 1] + sumOfArray(arr, arrlength - 1));
}

int main()
{
    int arr[4] = {2, 3, 7, 5}; // 17
    int arrlength = size(arr);

    cout << "\nArray elements: ";
    for (int n : arr)
    {
        cout << n << "  ";
    }

    cout << "\nSum of array elements using recursion: "
         << sumOfArray(arr, arrlength);

    return 0;
}
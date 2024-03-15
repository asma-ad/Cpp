#include <iostream>
using namespace std;
/*
Problem #36
Write a program to dynamically read numbers and save them in an array max size of array is 100,
allocate simi-dynamic array length;
*/

int readNumber()
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

void addNumberToArray(int arr[], int &length, int number)
{

    length++;
    arr[length - 1] = number;
}

void inputUserNumbersInArray(int arr[], int &length)
{
    bool ad_more = true;
    do
    {
        addNumberToArray(arr, length, readNumber());

        cout << "Do you want to add more numbers?\nIf yes enter 1, if no enter 0\n";
        cin >> ad_more;

    } while (ad_more);
}

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100], length = 0;

    inputUserNumbersInArray(arr, length);

    cout << "\nArray length: " << length;
    cout << "\nArray elements: ";
    printArray(arr, length);

    return 0;
}
#include <iostream>
using namespace std;
/*
Problem#6:
Write a program to fill 3x3 matrix with ordered numbers,
then print it.
*/
void fillMatrixWithOrderedNumbers(int arr[3][3], int rows, int cols)
{
    int counter = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            counter++;
            arr[i][j] = counter;
        }
    }
}

void printMatrix(int arr[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}

int main()
{
    int arr[3][3];
    fillMatrixWithOrderedNumbers(arr, 3, 3);
    cout << "\nThe following is a 3x3 ordered matrix:\n";
    printMatrix(arr, 3, 3);
    return 0;
}
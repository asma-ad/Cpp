#include <iostream>
using namespace std;
/*
Problem #10
Write a program to fill 3x3 matrix with random numbers,
then print it, then write a function to sum all numbers in this matrix and print it.
*/
int randomNumbers(int from, int to)
{
    return rand() % (to - from + 1) + from;
}
void fillMatrixWithRandomNumbers(int arr[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = randomNumbers(1, 10);
        }
    }
}
void printMatrix(int arr[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%0*d  ", 2, arr[i][j]);
            // cout << setw(3) << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
int sumOfMatrix(int arr[3][3], int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main()
{
    srand(time(NULL));
    int arr[3][3];
    fillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "Matrix:\n";
    printMatrix(arr, 3, 3);
    cout << "Sum of matrix is: " << sumOfMatrix(arr, 3, 3) << endl;
    return 0;
}
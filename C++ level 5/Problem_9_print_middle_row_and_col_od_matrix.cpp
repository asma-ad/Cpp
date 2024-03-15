#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
/*
Problem#9
Write a program to fill 3x3 matrix with random numbers,
then print it, then print the middle row and col.
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
void printMiddleRowOfMatrix(int arr[3][3], int rows, int cols)
{
    short middleRow = rows / 2;
    for (short j = 0; j < cols; j++)
    {
        printf("%0*d  ", 2, arr[middleRow][j]);
    }
    cout << endl;
}
void printMiddleColOfMatrix(int arr[3][3], int rows, int cols)
{
    short middleCol = cols / 2;
    for (short j = 0; j < rows; j++)
    {
        printf("%0*d  ", 2, arr[j][middleCol]);
    }
    cout << endl;
}
int main()
{
    srand(time(NULL));
    int arr[3][3];

    cout << "\nMatrix 1: \n";
    fillMatrixWithRandomNumbers(arr, 3, 3);
    printMatrix(arr, 3, 3);

    cout << "\nMiddle row of matrix 1: \n";
    printMiddleRowOfMatrix(arr, 3, 3);

    cout << "\nMiddle col of matrix 1: \n";
    printMiddleColOfMatrix(arr, 3, 3);
    return 0;
}
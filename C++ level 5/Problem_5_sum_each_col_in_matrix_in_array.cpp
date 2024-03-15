#include <iostream>
#include <iomanip>
using namespace std;
/*
Problem #05:
write a program to fill a 3x3 matrix with random numbers,
then sum each col in separate array and print the results.
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
            arr[i][j] = randomNumbers(1, 100);
        }
    }
}
void printMatrix(int arr[3][3], int rows, int clos)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < clos; j++)
        {
            cout << setw(3) << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
int sumMatrixCol(int arr[3][3], int rows, int colsNumver)
{
    int sum = 0;
    for (int j = 0; j < rows; j++)
    {
        sum += arr[j][colsNumver];
    }

    return sum;
}
void sumMatrixColInArray(int arr[3][3], int sumArr[], int rows, int cols)
{
    for (int i = 0; i < cols; i++)
    {
        sumArr[i] += sumMatrixCol(arr, rows, i);
    }
}
void printColSumArray(int arr[], int length)
{
    cout << "The following are the sum of row in the matrix:\n";
    for (int i = 0; i < length; i++)
    {
        cout << "Col " << i + 1 << " sum = " << arr[i] << endl;
    }
}

int main()
{
    srand(time(NULL));
    int arr[3][3];
    int arrSum[3];
    fillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "\nThe following is a 3x3 random martix:\n";
    printMatrix(arr, 3, 3);
    sumMatrixColInArray(arr, arrSum, 3, 3);
    printColSumArray(arrSum, 3);
    return 0;
}
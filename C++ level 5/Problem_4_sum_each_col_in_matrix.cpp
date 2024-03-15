#include <iostream>
#include <iomanip>
using namespace std;
/*
Problem #04:
write a program to fill a 3x3 matrix with random numbers,
then print each col sum
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
void printColMatrixSum(int arr[3][3], int cols, int rows)
{
    cout << "The following are the sum of row in the matrix:\n";
    for (int i = 0; i < cols; i++)
    {
        cout << "Row " << i + 1 << " sum = " << sumMatrixCol(arr, rows, i) << endl;
    }
}

int main()
{
    srand(time(NULL));
    int arr[3][3];
    fillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "\nThe following is a 3x3 random martix:\n";
    printMatrix(arr, 3, 3);

    printColMatrixSum(arr, 3, 3);
    return 0;
}
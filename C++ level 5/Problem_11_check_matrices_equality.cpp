#include <iostream>
using namespace std;
/*
Problem #11
write a program to compare two matrices and check if they are equal or not.
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
bool isMatrixEqual(int matrix1[3][3], int matrix2[3][3], int rows, int cols)
{
    return sumOfMatrix(matrix1, rows, cols) == sumOfMatrix(matrix2, rows, cols);
}

int main()
{
    srand(time(NULL));
    int matrix1[3][3];
    int matrix2[3][3];
    fillMatrixWithRandomNumbers(matrix1, 3, 3);
    cout << "Matrix 1:\n";
    printMatrix(matrix1, 3, 3);
    fillMatrixWithRandomNumbers(matrix2, 3, 3);
    cout << "Matrix 2:\n";
    printMatrix(matrix2, 3, 3);

    if (isMatrixEqual(matrix1, matrix2, 3, 3))
        cout << "Yes: matrices are equal.\n";
    else
        cout << "No: matrices are NOT equal.\n";

    return 0;
}
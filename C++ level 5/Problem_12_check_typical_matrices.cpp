#include <iostream>
using namespace std;
/*
Problem #12
write a program to compare two matrices and check if they are typical or not.
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
bool isMatrixTypical(int matrix1[3][3], int matrix2[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix1[i][j] != matrix2[i][j])
                return false;
        }
    }
    return true;
}

int main()
{
    srand(time(NULL));
    int matrix1[3][3];
    int matrix2[3][3];
    fillMatrixWithRandomNumbers(matrix1, 3, 3);
    cout << "\nMatrix 1:\n";
    printMatrix(matrix1, 3, 3);
    fillMatrixWithRandomNumbers(matrix2, 3, 3);
    cout << "\nMatrix 2:\n";
    printMatrix(matrix2, 3, 3);
    if (isMatrixTypical(matrix1, matrix2, 3, 3))
        cout << "\nYes: matrices are typical.\n";
    else
        cout << "\nNo: matrices are NOT typical.\n";
    return 0;
}
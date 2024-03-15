#include <iostream>
#include <iomanip>
using namespace std;
/*
Problem #16
write a program to check id the matrix is sparse or not.
*/

void printMatrix(int arr[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(3) << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
short countNumberInMatrix(int matrix[3][3], int rows, int cols, short number)
{
    short counter = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (number == matrix[i][j])
                counter++;
        }
    }
    return counter;
}
bool isMatrixSparse(int matrix[3][3], int rows, int cols)
{
    short matrixSize = rows * cols;
    return (countNumberInMatrix(matrix, rows, cols, 0) >= (matrixSize / 2));
}
int main()
{
    int matrix[3][3] = {
        {0, 0, 1},
        {0, 6, 0},
        {0, 0, 44},
    };
    cout << "\nMatrix:\n";
    printMatrix(matrix, 3, 3);

    if (isMatrixSparse(matrix, 3, 3))
        cout << "Yes, it is sparse.\n";
    else
        cout << "No, it is NOT sparse.\n";

    return 0;
}
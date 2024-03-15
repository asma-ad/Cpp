#include <iostream>
#include <iomanip>
using namespace std;
/*
Problem #14
write a program to check if the matrix is scalar or not.
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
bool isMatrixScalar(int matrix[3][3], int rows, int cols)
{
    int scalar = matrix[0][0]; // first diagonal element
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // check for diagonal element
            if (i == j && scalar != matrix[i][j])
                return false;
            // check for the rest element
            else if (matrix[i][j] != 0 && i != j)
                return false;
        }
    }
    return true;
}

int main()
{
    int arr[3][3] = {
        {7, 0, 0},
        {0, 7, 0},
        {0, 0, 7}};
    cout << "\nMatrix 1:\n";
    printMatrix(arr, 3, 3);

    if (isMatrixScalar(arr, 3, 3))
        cout << "\nYes: matrix is scalar.\n";
    else
        cout << "\nNo: matrix is NOT scalar.\n";
    return 0;
}
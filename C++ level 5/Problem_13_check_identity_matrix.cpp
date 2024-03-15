#include <iostream>
using namespace std;
/*
Problem #13
write a program to check if the matrix is identity or not.
*/
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
bool isMatrixIdentity(int matrix[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // check for diagonals element
            if (matrix[i][j] != 1 && i == j)
                return false;
            // check for rest element
            else if (matrix[i][j] != 0 && i != j)
                return false;
        }
    }
    return true;
}

int main()
{
    int arr[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};
    cout << "\nMatrix 1:\n";
    printMatrix(arr, 3, 3);

    if (isMatrixIdentity(arr, 3, 3))
        cout << "\nYes: matrix is identity.\n";
    else
        cout << "\nNo: matrix is NOT identity.\n";
    return 0;
}
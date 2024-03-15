#include <iostream>
#include <iomanip>
using namespace std;
/*
Problem#8:
Write a program to fill 3x3 matrix with random numbers,
then print it, then multiply them into a 3rd matrix and print it.
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
void multiplyMatrix(int arr1[3][3], int arr2[3][3], int multyArr[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            multyArr[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}
int main()
{
    srand(time(NULL));
    int arr1[3][3], arr2[3][3], multyArr[3][3];

    cout << "\nMatrix 1: \n";
    fillMatrixWithRandomNumbers(arr1, 3, 3);
    printMatrix(arr1, 3, 3);

    cout << "\nMatrix 2: \n";
    fillMatrixWithRandomNumbers(arr2, 3, 3);
    printMatrix(arr2, 3, 3);

    cout << "\nResult: \n";
    multiplyMatrix(arr1, arr2, multyArr, 3, 3);
    printMatrix(multyArr, 3, 3);

    return 0;
}
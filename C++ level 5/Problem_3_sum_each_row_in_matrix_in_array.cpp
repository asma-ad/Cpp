#include <iostream>
#include <iomanip>
using namespace std;
/*
Problem #03:
write a program to fill a 3x3 matrix with random numbers,
then sum each row in separate array and print the results.
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
void sumMatrixRowInArray(int arr[3][3], int sumArr[], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sumArr[i] += arr[i][j];
        }
    }
}
void printRowSumArray(int arr[], int length)
{
    cout << "The following are the sum of row in the matrix:\n";
    for (int i = 0; i < length; i++)
    {
        cout << "Row " << i + 1 << " sum = " << arr[i] << endl;
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
    sumMatrixRowInArray(arr, arrSum, 3, 3);
    printRowSumArray(arrSum, 3);
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
/*
Problem #19
Write a program to print MAX and MIN numbers in matrix.
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
c
int getMaxNumberInMatrix(int matrix[3][3], int rows, int cols)
{
    int max = matrix[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (max < matrix[i][j])
                max = matrix[i][j];
        }
    }
    return max;
}
int getMinNumberInMatrix(int matrix[3][3], int rows, int cols)
{
    int min = matrix[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (min > matrix[i][j])
                min = matrix[i][j];
        }
    }
    return min;
}

int main()
{
    srand(time(NULL));

    int matrix[3][3];
    fillMatrixWithRandomNumbers(matrix, 3, 3);

    std::cout << "MMatrix:\n";
    printMatrix(matrix, 3, 3);

    std::cout << "Max number is: "
              << getMaxNumberInMatrix(matrix, 3, 3) << std::endl;
    std::cout << "Min number is: "
              << getMinNumberInMatrix(matrix, 3, 3) << std::endl;

    system("pause>0");
}
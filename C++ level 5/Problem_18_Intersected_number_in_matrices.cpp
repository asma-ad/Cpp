#include <iostream>
#include <iomanip>
/*
Problem #18
Write a program to print the intersceted numbers in two given matrices.
*/
void printMatrix(int arr[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << std::setw(3) << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}
bool isNumberInMatrix(int arr[3][3], int rows, int cols, int number)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == number)
                return true;
        }
    }
    return false;
}
void printIntersectedNumberInMatrix(int matrix1[3][3], int matrix2[3][3], int rows, int cols)
{
    int number = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            number = matrix1[i][j];
            if (isNumberInMatrix(matrix2, 3, 3, number))
                std::cout << std::setw(3) << number << " ";
        }
    }
}

int main()
{
    int matrix1[3][3] = {{77, 5, 12}, {22, 20, 1}, {1, 0, 9}};
    int matrix2[3][3] = {{5, 80, 90}, {22, 77, 1}, {10, 8, 33}};

    std::cout << "Matrix 1:" << std::endl;
    printMatrix(matrix1, 3, 3);

    std::cout << "Matrix 2:" << std::endl;
    printMatrix(matrix2, 3, 3);

    std::cout << "Intersected numbers in matrix are:" << std::endl;
    printIntersectedNumberInMatrix(matrix1, matrix2, 3, 3);

    return 0;
}
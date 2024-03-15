#include <iostream>
#include <iomanip>
using namespace std;
/*
Problem #20
write a program to check if the matrix is palindrome or not.
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
bool isMatrixPalindrome(int matrix[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols / 2; j++)
        {
            if (matrix[i][j] != matrix[i][cols - 1 - j])
                return false;
        }
    }
    return true;
}

int main()
{
    int matrix[3][3] = {{1, 2, 1}, {5, 5, 5}, {7, 3, 7}};
    std::cout << "Matrix:\n";
    printMatrix(matrix, 3, 3);

    if (isMatrixPalindrome(matrix, 3, 3))
        std::cout << "Yes, it is palindrome.\n";
    else
        std::cout << "No, it is Not palindrome.\n";

    return 0;
}
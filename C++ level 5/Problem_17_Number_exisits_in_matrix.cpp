#include <iostream>
#include <iomanip>

/*
Problem #17
write a program to check if a given number exisits in matrix or not
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

int main()
{
    int matrix[3][3]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::cout << "\nMatrix:\n";
    printMatrix(matrix, 3, 3);

    int number = 0;
    std::cout << "Enter a number to look to in the matrix: ";
    std::cin >> number;

    if (isNumberInMatrix(matrix, 3, 3, number))
        std::cout << "Yes, it is there.";
    else
        std::cout << "No, it is Not there.";

    return 0;
}
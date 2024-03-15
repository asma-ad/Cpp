#include <iostream>
#include <iomanip>
using namespace std;
/*
Problem #15
write a program to count a given number in a matrix.
*/
int readNumbers()
{
    int number = 0;
    cout << "Enter a number to count in matrix: ";
    cin >> number;
    return number;
}
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

int main()
{
    srand(time(NULL));
    int arr[3][3];
    fillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "\nMatrix 1:\n";
    printMatrix(arr, 3, 3);
    int number = readNumbers();
    cout << "Number " << number << " count in matrix is: " << countNumberInMatrix(arr, 3, 3, number) << endl;

    return 0;
}
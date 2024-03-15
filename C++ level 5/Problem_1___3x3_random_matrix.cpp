#include <iostream>
#include <iomanip>
using namespace std;
/*
Problem #01:
write a program to fill a 3x3 matrix with random numbers.
*/

int randomNumbers(int from, int to)
{
    return rand() % (to - from + 1) + from;
}
void fill3x3MatrixWithRandomNumbers(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = randomNumbers(1, 100);
        }
    }
}

void print3x3Matrix(int arr[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(3) << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    srand(time(NULL));
    int arr[3][3];
    fill3x3MatrixWithRandomNumbers(arr);
    cout << "The following is 3x3 random matrix:\n";
    print3x3Matrix(arr);

    return 0;
}
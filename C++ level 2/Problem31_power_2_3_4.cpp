#include <iostream>
using namespace std;
/*
Problem #31:
Write a program to ask user to enter a number,
then print the number^2, number^3, number^4
*/

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

void Power_2_3_4(int N)
{
    int p2 = N * N;
    int p3 = p2 * N;
    int p4 = p3 * N;

    cout << p2 << endl << p3 << endl<< p4 << endl;
}

int main()
{
     Power_2_3_4(readNumber());

    return 0;
}
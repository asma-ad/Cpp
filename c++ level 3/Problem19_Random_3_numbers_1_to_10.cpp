#include <iostream>
#include <cstdlib>
using namespace std;
/*
Problem #19
Write a program to print 3 random numbers from 1 to 10
*/

int randomNumbers(int from, int to)
{
    return (rand() % (to - from - 1) + from);
}

int main()
{
    // Seeds the random number generator in C++, called only once.
    srand((unsigned)time(NULL));

    /*
        cout << rand() << endl;
        cout << rand() << endl;
    */

    cout << randomNumbers(1, 10) << endl;
    cout << randomNumbers(1, 10) << endl;
    cout << randomNumbers(1, 10) << endl;

    return 0;
}
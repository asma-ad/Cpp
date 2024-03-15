#include <iostream>
using namespace std;

int main()
{
    /*The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.*/

    cout << "Result: " << (12 & 25) << endl; // 8
    cout << "Result: " << (36 & 15) << endl; // 4

    return 0;
}
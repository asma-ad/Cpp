#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #18:
Write a program to calculate circle area,
then print it on the screen.
*/

const float PI = 3.141592653589793238;

float readValues()
{
    float r;
    cout << "Enter r (radious): ";
    cin >> r;
    return r;
}

float circleArea(float r)
{
    return PI * pow(r, 2);
}

void printResult(float area)
{
    cout << "\nRectangle area = " << area << endl;
}

int main()
{
    printResult(circleArea(readValues()));

    return 0;
}
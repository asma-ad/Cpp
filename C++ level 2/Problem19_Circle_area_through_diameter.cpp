#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #19:
Write a program to calculate circle area through diameter,
then print it on the screen.
*/

const float PI = 3.141592653589793238;

float readDiameter()
{
    float d;
    cout << "Enter D (diemeter): ";
    cin >> d;
    return d;
}

float circleAreaByDiameter(float d)
{
    return (PI * pow(d, 2)) / 4;
}

void printResult(float area)
{
    cout << "\nRectangle area = " << area << endl;
}

int main()
{
    printResult(circleAreaByDiameter(readDiameter()));

    return 0;
}
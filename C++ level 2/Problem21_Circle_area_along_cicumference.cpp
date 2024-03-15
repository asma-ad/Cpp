#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #21:
Write a program to calculate circle area along the circumference,
then print it on the screen.
*/

const float PI = 3.141592653589793238;

float readCircumference()
{
    float l;
    cout << "Enter L (Circumference): ";
    cin >> l;
    return l;
}

float circleAreaAlongCircumference(float l)
{
    return pow(l, 2) / (4 * PI);
}

void printResult(float area)
{
    cout << "\nRectangle area = " << area << endl;
}

int main()
{
    printResult(circleAreaAlongCircumference(readCircumference()));

    return 0;
}
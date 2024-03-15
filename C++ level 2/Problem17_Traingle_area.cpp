#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #17:
Write a program to calculate triangle area,
then print it on the screen.
*/

void readValues(float &a, float &h)
{
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter h: ";
    cin >> h;
}

float traingleArea(float a, float h)
{
    return a / 2 * h;
}

void printResult(float area)
{
    cout << "\nRectangle area = " << area << endl;
}

int main()
{
    float a, h;
    readValues(a, h);
    printResult(traingleArea(a, h));

    return 0;
}